"""
Copyright lowRISC contributors.
Licensed under the Apache License, Version 2.0, see LICENSE for details.
SPDX-License-Identifier: Apache-2.0

IBEX Memory Interface Response Sequence Library - PyUVM Implementation
Collection of response sequences for different test scenarios
"""

import cocotb
from pyuvm import *
import random
import asyncio
from pathlib import Path
import sys

# Add relative imports
sys.path.insert(0, str(Path(__file__).parent))
from ibex_mem_intf_seq_item import ibex_mem_intf_seq_item

# Constants
ADDR_WIDTH = 32
DATA_WIDTH = 32
INTG_WIDTH = 7
READ = "READ"
WRITE = "WRITE"
TEST_PASS = 1
TEST_FAIL = 0

class ibex_mem_intf_response_seq(uvm_sequence):
    """
    Base response sequence for memory interface
    Handles basic read/write responses with configurable timing and error injection
    """
    
    def __init__(self, name="ibex_mem_intf_response_seq"):
        super().__init__(name)
        self.m_mem = None
        self.cosim_agent = None
        self.enable_intg_error = False
        self.enable_error = False
        self.error_synch = True
        self.is_dmem_seq = False
        self.suppress_error_on_exc = False
        self.enable_spurious_response = False
        self.spurious_response_delay_cycles = 0
        
    def pre_randomize(self):
        """Pre-randomization setup"""
        # Randomize spurious response delay
        if hasattr(self.get_sequencer(), 'cfg'):
            cfg = self.get_sequencer().cfg
            self.spurious_response_delay_cycles = random.randint(
                cfg.spurious_response_delay_min,
                cfg.spurious_response_delay_max
            )
        else:
            self.spurious_response_delay_cycles = random.randint(0, 10)
            
    async def body(self):
        """Main sequence body"""
        # Get DUT interface for exception monitoring
        ibex_dut_vif = ConfigDB().get(None, "", "dut_if")
        if ibex_dut_vif is None:
            self.logger.error("Failed to get ibex dut_if from config database")
            return
            
        if self.m_mem is None:
            self.logger.error("Cannot get memory model")
            return
            
        self.logger.info(f"is_dmem_seq: 0x{self.is_dmem_seq:x}")
        
        self.pre_randomize()
        
        while True:
            aligned_addr = 0
            rand_data = 0
            data_was_uninitialized = False
            
            if self.enable_spurious_response:
                # Handle spurious responses
                while True:
                    # Wait for monitor tick
                    await asyncio.sleep(0)  # Yield control
                    
                    # Try to get new request
                    try:
                        item = self.get_sequencer().addr_ph_port.try_get()
                        if item is not None:
                            break
                    except:
                        pass
                        
                    # Check if time to generate spurious response
                    if (self.spurious_response_delay_cycles == 0 and 
                        self.get_sequencer().outstanding_accesses == 0):
                        
                        # Create spurious response
                        req = ibex_mem_intf_seq_item("req")
                        await self.randomize_request(req, rvalid_delay=0)
                        req.spurious_response = True
                        
                        # Add integrity bits
                        req.intg, req.data = self.calculate_integrity(req.data)
                        
                        self.logger.info(f"Generated spurious response: {req}")
                        
                        await self.start_item(req)
                        await self.finish_item(req)
                        
                        self.pre_randomize()
                        
                    elif self.spurious_response_delay_cycles > 0:
                        self.spurious_response_delay_cycles -= 1
            else:
                # Wait for monitor to report new request
                item = await self.get_sequencer().addr_ph_port.get()
                
            aligned_addr = (item.addr & 0xFFFFFFFC)  # Align to 4 bytes
            
            # Create response request
            req = ibex_mem_intf_seq_item("req")
            self.error_synch = False
            
            # Check for exception suppression
            if (self.suppress_error_on_exc and 
                hasattr(ibex_dut_vif, 'sync_exc_seen') and
                (ibex_dut_vif.sync_exc_seen or ibex_dut_vif.irq_exc_seen)):
                self.enable_error = False
                self.enable_intg_error = False
                
            # Randomize request
            await self.randomize_request(req, 
                                       addr=item.addr,
                                       read_write=item.read_write,
                                       data=item.data,
                                       intg=item.intg,
                                       be=item.be,
                                       error=self.enable_error)
                                       
            self.error_synch = True
            self.enable_error = False  # Disable after single error
            
            # Handle test control addresses (don't inject errors)
            if aligned_addr in [0x8ffffff8, 0x8ffffffc]:
                req.error = False
                self.enable_intg_error = False
                
            # Handle error injection
            if req.error:
                req.data = random.randint(0, 0xFFFFFFFF)
            elif item.read_write == READ:
                # Get data from memory model
                req.data = self.read_memory(aligned_addr, data_was_uninitialized)
            elif item.read_write == WRITE:
                # Update memory model
                self.write_memory(aligned_addr, item.data, item.be)
                if self.get_sequencer().cfg.fixed_data_write_response:
                    req.data = 0xFFFFFFFF
                    
            # Add integrity bits
            req.intg, req.data = self.calculate_integrity(req.data)
            
            # Handle bad integrity on uninitialized access
            if ((self.get_sequencer().cfg.enable_bad_intg_on_uninit_access and 
                 data_was_uninitialized) or self.enable_intg_error):
                req.intg = ~req.intg & 0x7F  # Invert integrity bits
                self.enable_intg_error = False
                
            self.logger.info(f"Response transfer: {req}")
            
            await self.start_item(req)
            await self.finish_item(req)
            
    async def randomize_request(self, req, **constraints):
        """Randomize request with given constraints"""
        # Apply constraints
        for key, value in constraints.items():
            if hasattr(req, key):
                setattr(req, key, value)
                
        # Randomize delay if not specified
        if 'rvalid_delay' not in constraints:
            if self.get_sequencer().cfg.zero_delays:
                req.rvalid_delay = 0
            else:
                cfg = self.get_sequencer().cfg
                # Weighted random delay distribution
                rand_val = random.random()
                if rand_val < 0.5:  # 50% chance of min delay
                    req.rvalid_delay = cfg.valid_delay_min
                elif rand_val < 0.8:  # 30% chance of medium delay
                    req.rvalid_delay = random.randint(
                        cfg.valid_delay_min + 1,
                        cfg.valid_delay_max // 2
                    )
                else:  # 20% chance of high delay
                    req.rvalid_delay = random.randint(
                        cfg.valid_delay_max // 2,
                        cfg.valid_delay_max
                    )
                    
    def inject_error(self):
        """Inject error in next transaction"""
        self.enable_error = True
        
    def inject_intg_error(self):
        """Inject integrity error in next transaction"""
        self.enable_intg_error = True
        
    def get_error_synch(self):
        """Get error synchronization status"""
        return self.error_synch
        
    def read_memory(self, addr, data_was_uninitialized):
        """Read data from memory model"""
        data = 0
        data_was_uninitialized = False
        
        for i in range(3, -1, -1):  # Read 4 bytes
            byte_addr = addr + i
            byte_data, byte_uninit = self.read_byte(byte_addr)
            
            if byte_uninit:
                data_was_uninitialized = True
                if self.is_dmem_seq:
                    # DMEM: return random data and update memory
                    byte_data = random.randint(0, 255)
                    self.logger.info(f"Addr is uninit! DMEM seq, returning random data 0x{byte_data:02x}")
                    self.m_mem.write_byte(byte_addr, byte_data)
                    if self.cosim_agent:
                        self.cosim_agent.write_mem_byte(byte_addr, byte_data)
                else:
                    # IMEM: return C.unimp instructions
                    self.logger.info("Addr is uninit! IMEM seq, returning 0x0000 (c.unimp)")
                    return 0x00000000  # 2x C.unimp instructions
                    
            data = (data << 8) | (byte_data & 0xFF)
            
        return data
        
    def write_memory(self, addr, data, be):
        """Write data to memory model"""
        for i in range(4):
            if be & (1 << i):
                self.m_mem.write_byte(addr + i, (data >> (i * 8)) & 0xFF)
                
    def read_byte(self, addr):
        """Read byte from memory, return (data, is_uninitialized)"""
        if not self.m_mem.addr_exists(addr):
            self.logger.info(f"Read from uninitialized addr 0x{addr:x}")
            return 0, True
        else:
            data = self.m_mem.system_memory[addr]
            self.logger.info(f"Read Mem: Addr[0x{addr:x}], Data[0x{data:02x}]")
            return data, False
            
    def calculate_integrity(self, data):
        """Calculate integrity bits for data (simplified implementation)"""
        # This is a simplified version - real implementation would use
        # prim_secded_pkg::prim_secded_inv_39_32_enc
        intg = (data ^ (data >> 16) ^ (data >> 8)) & 0x7F
        return intg, data


class ibex_mem_intf_response_random_seq(ibex_mem_intf_response_seq):
    """
    Random response sequence with variable delays and data patterns
    Used for stress testing and performance boundary testing
    """
    
    def __init__(self, name="ibex_mem_intf_response_random_seq"):
        super().__init__(name)
        
    async def randomize_request(self, req, **constraints):
        """Override to provide more random behavior"""
        await super().randomize_request(req, **constraints)
        
        # Add more randomness to delays
        if 'rvalid_delay' not in constraints:
            req.rvalid_delay = random.randint(0, 20)


class ibex_mem_intf_response_grant_seq(ibex_mem_intf_response_seq):
    """
    Grant signal management sequence
    Focuses on handshaking protocol implementation and flow control testing
    """
    
    def __init__(self, name="ibex_mem_intf_response_grant_seq"):
        super().__init__(name)
        
    async def randomize_request(self, req, **constraints):
        """Override to focus on grant timing"""
        await super().randomize_request(req, **constraints)
        
        # Force zero delays for grant testing
        req.rvalid_delay = 0


class ibex_mem_intf_response_slow_seq(ibex_mem_intf_response_seq):
    """
    Slow response sequence for back-pressure testing
    Generates responses with long delays to test performance boundaries
    """
    
    def __init__(self, name="ibex_mem_intf_response_slow_seq"):
        super().__init__(name)
        
    async def randomize_request(self, req, **constraints):
        """Override to provide slow responses"""
        await super().randomize_request(req, **constraints)
        
        # Force long delays
        if 'rvalid_delay' not in constraints:
            req.rvalid_delay = random.randint(50, 100)
