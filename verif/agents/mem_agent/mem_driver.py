import cocotb 
import pyuvm
from pyuvm import *
from cocotb.triggers import RisingEdge, ReadWrite ,First , FallingEdge , Combine
from .mem_seq_item import mem_seq_item

class mem_driver(uvm_driver):
    def __init__(self, name, parent):
        super().__init__(name, parent)
    
    def build_phase(self):
        self.mem_if = ConfigDB().get(self, "", "mem_if")
        self.rdata_queue = UVMQueue("rdata_queue")

    async def run_phase(self):
        await self.reset_signals()

        while self.mem_if.rst == 0:
            await RisingEdge(self.mem_if.clk)
        
        while True:
            sd=cocotb.start_soon(self.send_grant())
            gd=cocotb.start_soon(self.get_and_drive())
            wfr=cocotb.start_soon(self.wait_for_reset())

            returned_trigger=await First(sd, gd, wfr) # Reaches here only if reset happens

            sd.kill()
            gd.kill()

            await self.handle_reset()

    async def reset_signals(self):
        # Instruction Mem
        self.mem_if.instr_rvalid_i.value = 0
        self.mem_if.instr_gnt_i.value = 0
        self.mem_if.instr_rdata_i.value = 0
        self.mem_if.instr_rdata_intg_i.value = 0
        self.mem_if.instr_err_i.value = 0

        # Data Mem
        self.mem_if.data_rvalid_i.value = 0
        self.mem_if.data_gnt_i.value = 0
        self.mem_if.data_rdata_i.value = 0
        self.mem_if.data_rdata_intg_i.value = 0
        self.mem_if.data_err_i.value = 0
        await ReadWrite()

    async def wait_for_reset(self):
        await FallingEdge(self.mem_if.rst)

    async def handle_reset(self):
        while not self.rdata_queue.empty():
            tr = self.rdata_queue.peek_nowait()

        #TODO: Clear seq_item_port
        # while True:
        #     try:
        #         req = await self.seq_item_port.get_next_item() # Issue is mayn't reset on time
        #         if req is not None:
        #             self.seq_item_port.item_done()
        #         else:
        #             break
        #     except :
        #         break

        await self.reset_signals()
        while self.mem_if.rst == 0:
            await RisingEdge(self.mem_if.clk)
    
    async def send_grant(self):
        while True:
            if self.mem_if.data_req_o.value or self.mem_if.instr_req_o.value:
                self.logger.critical("Sending grant")
                if self.mem_if.rst.value:
                    if self.mem_if.data_req_o.value:
                        self.mem_if.data_gnt_i.value = 1
                    if self.mem_if.instr_req_o.value:
                        self.mem_if.instr_gnt_i.value = 1
            else:
                self.mem_if.data_gnt_i.value = 0
                self.mem_if.instr_gnt_i.value = 0

            await RisingEdge(self.mem_if.clk)
            await ReadWrite()

    async def get_and_drive(self):
        while self.mem_if.rst == 0:
            await RisingEdge(self.mem_if.clk)

        a = cocotb.start_soon(self.get_from_sequencer())
        b = cocotb.start_soon(self.send_read_data())

        c = await Combine(a, b)
        c.kill()

    async def get_from_sequencer(self):
        while True:
            req = await self.seq_item_port.get_next_item()
            if self.mem_if.rst.value:
                self.rdata_queue.put_nowait(req)
            self.seq_item_port.item_done()

    async def send_read_data(self):
        item_received = mem_seq_item("item_received")
        while True:
            self.mem_if.instr_rvalid_i.value = 0
            self.mem_if.instr_err_i.value = 0
            self.mem_if.instr_rdata_i.value = 0
            self.mem_if.instr_rdata_intg_i.value = 0

            self.mem_if.data_rvalid_i.value = 0
            self.mem_if.data_err_i.value = 0
            self.mem_if.data_rdata_i.value = 0
            self.mem_if.data_rdata_intg_i.value = 0
            await ReadWrite()
            try:
                item_received = self.rdata_queue.get_nowait()
            except:
                item_received = None
                await RisingEdge(self.mem_if.clk)
                continue
            
            await RisingEdge(self.mem_if.clk)

            if self.mem_if.rst.value == 0 :
                continue


            if item_received is not None:
                if item_received.instr_req:
                    self.mem_if.instr_rvalid.value = 1
                    self.mem_if.instr_rdata.value = item_received.rdata
                    self.mem_if.err.value = item_received.instr_err

                if item_received.data_req:
                    self.mem_if.data_rvalid.value = 1
                    self.mem_if.data_err.value = item_received.data_err
                    if item_received.data_we.value == 0:
                        self.mem_if.data_rdata.value = item_received.data_rdata
                
            await ReadWrite()
            await RisingEdge(self.mem_if.clk)

                    


