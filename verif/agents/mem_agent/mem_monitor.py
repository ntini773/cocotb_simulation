import cocotb
import pyuvm
from pyuvm import *
from cocotb.triggers import RisingEdge, First ,FallingEdge ,ReadWrite
from .mem_seq_item import mem_seq_item

class mem_monitor(uvm_monitor):

    def build_phase(self):
        self.cnt = 0
        self.mem_if=ConfigDB().get(self, "", "mem_if")
        self.addr_ph_port = uvm_analysis_port("addr_ph_port", self)

    async def run_phase(self):
        # Kind of redundant as rst becomes 1 in start
        while self.mem_if.rst == 0:
            await RisingEdge(self.mem_if.clk)

        while True:
            self.logger.info(f"Starting Coroutines")
            cap=cocotb.start_soon(self.collect_address_phase())
            wfr=cocotb.start_soon(self.wait_for_reset())
            returned_trigger=await First(cap, wfr) # This will return only if a mid-reset happens
            cap.kill()

            while self.mem_if.rst == 0:
                self.logger.info("Reset detected")
                await RisingEdge(self.mem_if.clk)
                self.cnt += 1


    async def wait_for_reset(self):
        await FallingEdge(self.mem_if.rst)

    async def collect_address_phase(self):
        
        while True:
            if self.mem_if.instr_req_o.value or self.mem_if.data_req_o.value:
                self.item = mem_seq_item.create("item_collected")
                if self.mem_if.instr_req_o.value:
                    self.item.instr_req = 1
                    self.item.instr_addr = self.mem_if.instr_addr_o.value

                if self.mem_if.data_req_o.value:
                    self.item.data_req = 1
                    self.item.data_addr = self.mem_if.data_addr_o.value
                    self.item.data_we = self.mem_if.data_we_o.value
                    self.item.data_be = self.mem_if.data_be_o.value
                    self.item.data_wdata = self.mem_if.data_wdata_o.value
                    self.item.data_wdata_intg = self.mem_if.data_wdata_intg_o.value

                self.addr_ph_port.write(self.item)
                # self.logger.info(f"Collected Item: {self.item.get_full_name()} with Instr Req: {self.item.instr_req} and Data Req: {self.item.data_req}")
            self.logger.info(f"Clk edge:{self.cnt}")
            await RisingEdge(self.mem_if.clk)
            self.cnt += 1
            await ReadWrite()
