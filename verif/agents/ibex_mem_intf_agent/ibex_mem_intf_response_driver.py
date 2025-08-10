"""
Copyright lowRISC contributors.
Licensed under the Apache License, Version 2.0, see LICENSE for details.
SPDX-License-Identifier: Apache-2.0

IBEX Memory Interface Response Driver - PyUVM Implementation
Drives response transactions onto the memory interface
"""

import cocotb
from cocotb.triggers import RisingEdge, Timer
from pyuvm import *
import asyncio
import random
from pathlib import Path
import sys

# Add relative imports
sys.path.insert(0, str(Path(__file__).parent))
from ibex_mem_intf_seq_item import ibex_mem_intf_seq_item

class ibex_mem_intf_response_driver(uvm_driver):
    """
    Memory interface response driver that receives sequence items from
    sequencer and drives them onto the virtual interface
    """
    
    def __init__(self, name="ibex_mem_intf_response_driver", parent=None):
        super().__init__(name, parent)
        self.rdata_queue = asyncio.Queue()
        
    def build_phase(self):
        super().build_phase()
        # Get configuration from config database
        self.cfg = ConfigDB().get(self, "", "cfg")
        if self.cfg is None:
            self.logger.error(f"Configuration must be set for: {self.get_full_name()}")
            raise Exception("NO_CFG")
            
    async def run_phase(self):
        """Main driver task - runs until reset or end of test"""
        await self.reset_signals()
        await self.wait_for_reset_deassert()
        
        while True:
            try:
                # Create parallel tasks for driving
                tasks = [
                    asyncio.create_task(self.send_grant()),
                    asyncio.create_task(self.get_and_drive()),
                    asyncio.create_task(self.wait_for_reset_assert())
                ]
                
                # Wait for any task to complete (reset or normal operation)
                done, pending = await asyncio.wait(tasks, return_when=asyncio.FIRST_COMPLETED)
                
                # Cancel pending tasks
                for task in pending:
                    task.cancel()
                    
                # Handle mid-test reset if it occurred
                await self.handle_reset()
                
            except Exception as e:
                self.logger.error(f"Driver error: {e}")
                break
                
    async def handle_reset(self):
        """Handle reset condition - clear queues and reset signals"""
        # Clear rdata queue
        while not self.rdata_queue.empty():
            try:
                self.rdata_queue.get_nowait()
            except asyncio.QueueEmpty:
                break
                
        # Clear sequence item port
        while True:
            try:
                req = await self.seq_item_port.try_next_item()
                if req is not None:
                    self.seq_item_port.item_done()
                else:
                    break
            except:
                break
                
        await self.reset_signals()
        await self.wait_for_reset_deassert()
        
    async def wait_for_reset_assert(self):
        """Wait for reset to be asserted"""
        while self.cfg.vif.reset.value != 1:
            await RisingEdge(self.cfg.vif.clk)
            
    async def wait_for_reset_deassert(self):
        """Wait for reset to be deasserted"""
        while self.cfg.vif.reset.value != 0:
            await RisingEdge(self.cfg.vif.clk)
            
    async def reset_signals(self):
        """Reset all driven signals to default values"""
        self.cfg.vif.rvalid.value = 0
        self.cfg.vif.grant.value = 0
        self.cfg.vif.rdata.value = 0
        self.cfg.vif.rintg.value = 0
        self.cfg.vif.error.value = 0
        
    async def get_and_drive(self):
        """Get sequence items and manage response data driving"""
        await self.wait_for_reset_deassert()
        
        # Create parallel tasks for getting items and sending responses
        tasks = [
            asyncio.create_task(self.get_sequence_items()),
            asyncio.create_task(self.send_read_data())
        ]
        
        try:
            await asyncio.gather(*tasks)
        except asyncio.CancelledError:
            for task in tasks:
                if not task.done():
                    task.cancel()
                    
    async def get_sequence_items(self):
        """Get sequence items from sequencer and put in rdata queue"""
        while True:
            await RisingEdge(self.cfg.vif.clk)
            
            # Get next item from sequencer
            req = await self.seq_item_port.get_next_item()
            
            # Clone the request for processing
            req_c = req.clone() if hasattr(req, 'clone') else req
            
            # Put in rdata queue if not in reset
            if self.cfg.vif.reset.value != 1:
                await self.rdata_queue.put(req_c)
                
            self.seq_item_port.item_done()
            
    async def send_grant(self):
        """Send grant signals in response to requests"""
        while True:
            # Wait for request
            while self.cfg.vif.request.value != 1:
                await RisingEdge(self.cfg.vif.clk)
                
            # Calculate grant delay
            if self.cfg.zero_delays:
                gnt_delay = 0
            else:
                # Randomize grant delay based on configuration
                if random.random() < 0.1:  # 10% chance of min delay
                    gnt_delay = self.cfg.gnt_delay_min
                elif random.random() < 0.7:  # 70% chance of medium delay
                    gnt_delay = random.randint(self.cfg.gnt_delay_min + 1, 
                                             self.cfg.gnt_delay_max - 1)
                else:  # 20% chance of max delay
                    gnt_delay = self.cfg.gnt_delay_max
                    
            # Wait for the delay
            for _ in range(gnt_delay):
                await RisingEdge(self.cfg.vif.clk)
                
            # Drive grant if not in reset
            if self.cfg.vif.reset.value != 1:
                self.cfg.vif.grant.value = 1
                await RisingEdge(self.cfg.vif.clk)
                self.cfg.vif.grant.value = 0
                
    async def send_read_data(self):
        """Send read data responses from the rdata queue"""
        while True:
            await RisingEdge(self.cfg.vif.clk)
            
            # Reset response signals
            self.cfg.vif.rvalid.value = 0
            self.cfg.vif.spurious_response.value = 0
            self.cfg.vif.rdata.value = 0
            self.cfg.vif.rintg.value = 0
            self.cfg.vif.error.value = 0
            
            # Get transaction from queue
            tr = await self.rdata_queue.get()
            
            self.logger.info(f"Got response for addr 0x{tr.addr:x}")
            
            # Skip if in reset
            if self.cfg.vif.reset.value == 1:
                continue
                
            # Wait for rvalid delay
            for _ in range(tr.rvalid_delay):
                await RisingEdge(self.cfg.vif.clk)
                
            # Drive response if not in reset
            if self.cfg.vif.reset.value != 1:
                if tr.spurious_response:
                    self.logger.info("Driving spurious response")
                else:
                    self.logger.info(f"Driving response for addr 0x{tr.addr:x}")
                    
                self.cfg.vif.rvalid.value = 1
                self.cfg.vif.error.value = tr.error
                self.cfg.vif.spurious_response.value = tr.spurious_response
                
                if tr.read_write == "READ":
                    self.cfg.vif.rdata.value = tr.data
                    self.cfg.vif.rintg.value = tr.intg
                else:
                    # Write response handling
                    if self.cfg.fixed_data_write_response:
                        self.cfg.vif.rdata.value = tr.data
                        self.cfg.vif.rintg.value = tr.intg
                    else:
                        # Drive irrelevant fields to X (represented as 0 in Python)
                        self.cfg.vif.rdata.value = 0
                        self.cfg.vif.rintg.value = 0
