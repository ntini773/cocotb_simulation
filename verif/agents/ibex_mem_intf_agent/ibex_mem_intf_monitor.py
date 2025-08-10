"""
Copyright lowRISC contributors.
Licensed under the Apache License, Version 2.0, see LICENSE for details.
SPDX-License-Identifier: Apache-2.0

IBEX Memory Interface Monitor - PyUVM Implementation
Monitors memory interface transactions and forwards them to scoreboard
"""

import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from pyuvm import *
import asyncio
from pathlib import Path
import sys

# Add relative imports
sys.path.insert(0, str(Path(__file__).parent))
from ibex_mem_intf_seq_item import ibex_mem_intf_seq_item

class ibex_mem_intf_monitor(uvm_monitor):
    """
    Memory interface monitor that collects transactions from the interface
    and forwards them to the scoreboard via analysis ports
    """
    
    def __init__(self, name="ibex_mem_intf_monitor", parent=None):
        super().__init__(name, parent)
        self.outstanding_accesses = 0
        self.collect_response_queue = asyncio.Queue()
        
    def build_phase(self):
        super().build_phase()
        # Create analysis ports
        self.item_collected_port = uvm_analysis_port("item_collected_port", self)
        self.addr_ph_port = uvm_analysis_port("addr_ph_port_monitor", self)
        self.outstanding_accesses_port = uvm_analysis_port("outstanding_accesses_port", self)
        
        # Get virtual interface from config database
        self.vif = ConfigDB().get(self, "", "vif")
        if self.vif is None:
            self.logger.error(f"Virtual interface must be set for: {self.get_full_name()}.vif")
            raise Exception("NOVIF")
            
    async def run_phase(self):
        """Main monitor task - runs until reset or end of test"""
        await self.wait_for_reset_deassert()
        
        while True:
            try:
                # Create parallel tasks for monitoring
                tasks = [
                    asyncio.create_task(self.collect_address_phase()),
                    asyncio.create_task(self.collect_response_phase()),
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
                self.logger.error(f"Monitor error: {e}")
                break
                
    async def handle_reset(self):
        """Handle reset condition - clear queues and wait for reset deassertion"""
        # Clear the response queue
        while not self.collect_response_queue.empty():
            try:
                self.collect_response_queue.get_nowait()
            except asyncio.QueueEmpty:
                break
                
        self.outstanding_accesses = 0
        await self.wait_for_reset_deassert()
        
    async def wait_for_reset_assert(self):
        """Wait for reset to be asserted"""
        while self.vif.reset.value != 1:
            await RisingEdge(self.vif.clk)
            
    async def wait_for_reset_deassert(self):
        """Wait for reset to be deasserted"""
        while self.vif.reset.value != 0:
            await RisingEdge(self.vif.clk)
            
    async def collect_address_phase(self):
        """Collect address phase transactions and put them in response queue"""
        while True:
            await RisingEdge(self.vif.clk)
            await ReadOnly()  # Wait for signals to settle
            
            # Create new transaction
            trans_collected = ibex_mem_intf_seq_item("trans_collected")
            
            # Wait for valid request with grant
            while not (self.vif.request.value and self.vif.grant.value):
                # Check for responses while waiting
                if self.vif.rvalid.value and not self.vif.spurious_response.value:
                    self.outstanding_accesses -= 1
                    
                self.outstanding_accesses_port.write(self.outstanding_accesses)
                await RisingEdge(self.vif.clk)
                await ReadOnly()
                
            # Collect address phase information
            trans_collected.addr = self.vif.addr.value.integer
            trans_collected.be = self.vif.be.value.integer
            trans_collected.misaligned_first = self.vif.misaligned_first.value
            trans_collected.misaligned_second = self.vif.misaligned_second.value
            trans_collected.misaligned_first_saw_error = self.vif.misaligned_first_saw_error.value
            trans_collected.m_mode_access = self.vif.m_mode_access.value
            
            self.logger.info(f"Detect request with address: 0x{trans_collected.addr:x}")
                    
            # Determine if read or write and collect data
            if self.vif.we.value:
                trans_collected.read_write = "WRITE"
                trans_collected.data = self.vif.wdata.value.integer
                trans_collected.intg = self.vif.wintg.value.integer
            else:
                trans_collected.read_write = "READ"
                
            # Send to address phase port
            self.addr_ph_port.write(trans_collected)
            self.logger.info("Send through addr_ph_port")
            
            # Put in response queue for response phase collection
            await self.collect_response_queue.put(trans_collected)
            
            # Update outstanding access count
            self.outstanding_accesses += 1
            if self.vif.rvalid.value and not self.vif.spurious_response.value:
                self.outstanding_accesses -= 1
                
            self.outstanding_accesses_port.write(self.outstanding_accesses)
            
    async def collect_response_phase(self):
        """Collect response phase transactions and send to item_collected_port"""
        while True:
            # Get transaction from address phase
            trans_collected = await self.collect_response_queue.get()
            
            # Wait for valid response (not spurious)
            while True:
                await RisingEdge(self.vif.clk)
                await ReadOnly()
                
                if self.vif.rvalid.value and not self.vif.spurious_response.value:
                    break
                    
            # Collect response data for reads
            if trans_collected.read_write == "READ":
                trans_collected.data = self.vif.rdata.value.integer
                trans_collected.intg = self.vif.rintg.value.integer
                
            trans_collected.error = self.vif.error.value
            
            # Send completed transaction to scoreboard
            self.item_collected_port.write(trans_collected)
