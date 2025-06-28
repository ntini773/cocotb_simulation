import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.handle import SimHandleBase
from cocotb.queue import Queue
from collections import deque
from memory_model import MemoryModel
import random

class IbexMemoryAdapter:
   '''Implements LSU Protocol for Ibex core simulation.'''

   def __init__(self, dut: SimHandleBase):
        self.dut = dut
        self.mem = MemoryModel()
        self.data_queue =Queue()
        self.instr_queue = Queue()
    

   async def monitor_data(self):
        """Continuously monitor the DUT and respond to LSU memory accesses.
            Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/load_store_unit.html#timing2
        """
        while True:
            await RisingEdge(self.dut.clk_i)

            # Default values for response signals
            self.dut.data_gnt_i.value = 0
            # Setting rvalid and error here might be in Race with the response phase
            # self.dut.data_rvalid_i.value = 0
            # self.dut.data_err_i.value = 0

            # Grant phase: Detect and latch new request
            if self.dut.data_req_o.value :
                addr = int(self.dut.data_addr_o.value)
                write_enable = int(self.dut.data_we_o.value)
                byte_enable = [int(self.dut.data_be_o[i].value) for i in range(4)]
                write_data = int(self.dut.data_wdata_o.value)

                # Store request in queue
                request={
                    'addr': addr,
                    'write_enable': write_enable,
                    'byte_enable': byte_enable,
                    'write_data': write_data
                }
                await self.data_queue.put(request)

                # Grant this request (1-cycle pulse)
                self.dut.data_gnt_i.value = 1


   async def respond_data(self):
        '''Responds to data requests'''
        while True:
            request = await self.data_queue.get()
            addr = request['addr']
            write_enable = request['write_enable']
            byte_enable = request['byte_enable']
            write_data = request['write_data']

            if write_enable:
                # Apply byte enables
                for i in range(4):
                    if byte_enable[i]:
                        byte = (write_data >> (8 * i)) & 0xFF
                        self.mem.write(addr + i, byte, 1)
            else:
                await RisingEdge(self.dut.clk_i)  # Stall for 1 cycle to simulate delay
                try:
                    read_data = 0
                    for i in range(4):
                        if byte_enable[i]:
                            byte = self.mem.read(addr + i, 1)
                            read_data |= (byte << (8 * i))
                    self.dut.data_rdata_i.value = read_data
                    self.dut.data_err_i.value = 0
                    self.dut.data_rvalid_i.value = 1
                except Exception as e:
                    self.dut._log.warning(f"Memory read failed at 0x{addr:X}: {e}")
                    self.dut.data_rdata_i.value = 0
                    self.dut.data_err_i.value = 1
                    self.dut.data_rvalid_i.value = 1
                # Keep rvalid for 1 cycle
                await RisingEdge(self.dut.clk_i)
                self.dut.data_rvalid_i.value = 0
                self.dut.data_err_i.value = 0
            
    
   async def monitor_instr(self):                 
        """Continuously monitor the DUT and respond to LSU instruction fetches.
            Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/instruction_fetch.html
        """ 
        while True:
            await RisingEdge(self.dut.clk_i)

            # Default values for response signals
            self.dut.instr_gnt_i.value = 0
            # self.dut.instr_rvalid_i.value = 0
            # self.dut.instr_err_i.value = 0

            # Grant phase: Detect and latch new request
            if self.dut.instr_req_o.value:
                addr = int(self.dut.instr_addr_o.value)
                await self.instr_queue.put(addr)

                # Grant this request (1-cycle pulse)
                self.dut.instr_gnt_i.value = 1
            

   async def respond_instr(self):
        '''Responds to instruction requests'''
        while True:
            addr = await self.instr_queue.get()
            await RisingEdge(self.dut.clk_i)

            try:
                instruction = self.mem.read(addr,4)
                self.dut.instr_rdata_i.value = instruction
                self.dut.instr_err_i.value = 0
                self.dut.instr_rvalid_i.value = 1
            except Exception as e:
                self.dut._log.warning(f"Instruction fetch failed at 0x{addr:X}: {e}")
                self.dut.instr_rdata_i.value = 0
                self.dut.instr_err_i.value = 1
                self.dut.instr_rvalid_i.value = 1
            
             # Keep rvalid for 1 cycle
            await RisingEdge(self.dut.clk_i)
            self.dut.instr_rvalid_i.value = 0
            self.dut.instr_err_i.value = 0
            
                   
