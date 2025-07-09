# import cocotb
# from cocotb.triggers import RisingEdge, FallingEdge,ReadWrite
# from cocotb.handle import SimHandleBase
# from cocotb.queue import Queue
# from collections import deque
# from memory_model import MemoryModel
# import logging
# import random
# adapter_logger = logging.getLogger('ibex_test_logger')

# def get_formatted_sim_time():
#     return f"{cocotb.utils.get_sim_time(units='ns'):.2f}ns" # Force 2 decimal places for consistency

# class IbexMemoryAdapter:
#    '''Implements LSU Protocol for Ibex core simulation.'''

#    def __init__(self, dut: SimHandleBase):
#         self.dut = dut
#         self.mem = MemoryModel()
#         self.data_queue =Queue()
#         self.instr_queue = Queue()
#         # self.dut._log=adapter_logger
#         adapter_logger.info("IbexMemoryAdapter initialized")


#    async def monitor_data(self):
#         """Continuously monitor the DUT and respond to LSU memory accesses.
#             Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/load_store_unit.html#timing2
#         """
#         while True:
#             await RisingEdge(self.dut.clk_i)

#             # Default values for response signals
#             self.dut.data_gnt_i.value = 0
#             # Setting rvalid and error here might be in Race with the response phase
#             # self.dut.data_rvalid_i.value = 0
#             # self.dut.data_err_i.value = 0

#             # Grant phase: Detect and latch new request
#             if self.dut.data_req_o.value :
#                 addr = int(self.dut.data_addr_o.value)
#                 write_enable = int(self.dut.data_we_o.value)
#                 byte_enable = [int(self.dut.data_be_o[i].value) for i in range(4)]
#                 write_data = int(self.dut.data_wdata_o.value)

#                 # Store request in queue
#                 request={
#                     'addr': addr,
#                     'write_enable': write_enable,
#                     'byte_enable': byte_enable,
#                     'write_data': write_data
#                 }
                
#                 await self.data_queue.put(request)

#                 # Grant this request (1-cycle pulse)
#                 self.dut.data_gnt_i.value = 1


#    async def respond_data(self):
#         '''Responds to data requests'''
#         while True:
#             request = await self.data_queue.get()
#             addr = request['addr']
#             write_enable = request['write_enable']
#             byte_enable = request['byte_enable']
#             write_data = request['write_data']

#             if write_enable:
#                 # Apply byte enables
#                 for i in range(4):
#                     if byte_enable[i]:
#                         byte = (write_data >> (8 * i)) & 0xFF
#                         self.mem.write(addr + i, byte, 1)
#             else:
#                 await RisingEdge(self.dut.clk_i)  # Stall for 1 cycle to simulate delay
#                 try:
#                     read_data = 0
#                     for i in range(4):
#                         if byte_enable[i]:
#                             byte = self.mem.read(addr + i, 1)
#                             read_data |= (byte << (8 * i))
#                     self.dut.data_rdata_i.value = read_data
#                     self.dut.data_err_i.value = 0
#                     self.dut.data_rvalid_i.value = 1
#                 except Exception as e:
#                     self.dut._log.warning(f"Memory read failed at {addr:#x}: {e}")
#                     adapter_logger.warning(f"{get_formatted_sim_time()} - Memory read failed at {addr:#x}: {e}")
#                     self.dut.data_rdata_i.value = 0
#                     self.dut.data_err_i.value = 1
#                     self.dut.data_rvalid_i.value = 1
#                 # Keep rvalid for 1 cycle
#                 await RisingEdge(self.dut.clk_i)
#                 self.dut.data_rvalid_i.value = 0
#                 self.dut.data_err_i.value = 0
            
    
# #    async def monitor_instr(self):                 
# #         """Continuously monitor the DUT and respond to LSU instruction fetches.
# #             Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/instruction_fetch.html
# #         """ 
# #         prev_addr = 0
# #         self.dut.instr_gnt_i.value = 0
# #         self.dut.instr_rvalid_i.value = 0
# #         self.dut.instr_err_i.value = 0
# #         self.dut.instr_rdata_i.value = 0
# #         self.dut.instr_rdata_intg_i.value = 0
# #         while True:
# #             # if self.dut.instr_req_o.value :
# #             #     self.dut.instr_gnt_i.value = 1
# #             # else :
# #             #     self.dut.instr_gnt_i.value = 0
# #             # adapter_logger.info(f"{get_formatted_sim_time()} - Monitoring instruction fetch: instr_req_o={self.dut.instr_req_o.value}, instr_addr_o={self.dut.instr_addr_o.value.integer:#x}, instr_gnt_i={self.dut.instr_gnt_i.value}")
# #             while self.dut.instr_req_o.value == 0:
# #             #   self.dut.instr_gnt_i.value =0
# #               await FallingEdge(self.dut.clk_i)
# #             # adapter_logger.info(f"{get_formatted_sim_time()} - Monitoring instruction fetch: instr_req_o={self.dut.instr_req_o.value}, instr_addr_o={self.dut.instr_addr_o.value.integer:#x}, instr_gnt_i={self.dut.instr_gnt_i.value}")

# #             # Default values for response signals
# #             if self.dut.rst_ni.value == 1:
# #                 # self.dut.instr_gnt_i.value = 0
# #                 self.dut.instr_gnt_i.value=1
# #                 addr = int(self.dut.instr_addr_o.value)
# #                 await self.instr_queue.put(addr)
# #                 self.dut._log.info(f"Instruction request received for address: {addr:#x}")
# #                 adapter_logger.info(f"{get_formatted_sim_time()} -  Instruction request received for address: {addr:#x}")
# #                 await FallingEdge(self.dut.clk_i)  # Wait for the next clock edge
# #                 self.dut.instr_gnt_i.value = 0
# #             # if(self.dut.rst_ni.value == 0):
# #             # if(self.dut.instr_req_o.value) :
# #             #     self.dut.instr_gnt_i.value = 1
            
# #             # if(self.dut.instr_req_o.value == 0):
# #             #     self.dut.instr_gnt_i.value = 0
# #             #     continue
# #             # else:
# #             #     await FallingEdge(self.dut.clk_i)  # Wait for the next clock edge
# #             #     self.dut.instr_gnt_i.value = 0
# #             # await FallingEdge(self.dut.instr_req_o)  # Wait for the request to go low


# #             # while self.dut.instr_req_o.value == 1:
# #             #     await FallingEdge(self.dut.clk_i)
# #             # Grant phase: Detect and latch new request
# #             # if self.dut.instr_req_o.value :

# #             #     addr = int(self.dut.instr_addr_o.value)
# #             #     await self.instr_queue.put(addr)
# #             #     self.dut._log.info(f"Instruction request received for address: {addr:#x}")
# #             #     adapter_logger.info(f"{get_formatted_sim_time()} -  Instruction request received for address: {addr:#x}")
# #                 # self.dut.instr_gnt_i.value = 1
# #                 # Grant this request (1-cycle pulse)
# #                 # await Timer(0, units="ns")
            
# #             # prev_addr=int(self.dut.instr_addr_o.value)

            
#    async def monitor_instr(self):                 
#         """Continuously monitor the DUT and respond to LSU instruction fetches.
#             Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/instruction_fetch.html
#         """ 
#         prev_addr = 0
#         self.dut.instr_gnt_i.value = 0
#         self.dut.instr_rvalid_i.value = 0
#         self.dut.instr_err_i.value = 0
#         self.dut.instr_rdata_i.value = 0
#         self.dut.instr_rdata_intg_i.value = 0
#         while True:
#             self.dut._log.info(f"Time={get_formatted_sim_time()}")
#             # await ReadWrite()
#             self.dut._log.info(f"Time={get_formatted_sim_time()}")
#             await RisingEdge(self.dut.instr_req_o)
#             # if self.dut.instr_req_o.value :
#             #      self.dut.instr_gnt_i.value = 1
#             # else :
#             #      self.dut.instr_gnt_i.value = 0
#             # await RisingEdge(self.dut.clk_i)
#             # await ReadWrite()
#             # assert self.dut.instr_gnt_i.value==1
#             self.dut._log.info(f"Time={get_formatted_sim_time()}")
#             self.dut._log.info(f"Time={get_formatted_sim_time()}")
#             # adapter_logger.info(f"{get_formatted_sim_time()} - Monitoring instruction fetch: instr_req_o={self.dut.instr_req_o.value}, instr_addr_o={self.dut.instr_addr_o.value.integer:#x}, instr_gnt_i={self.dut.instr_gnt_i.value}")
#             # while self.dut.instr_req_o.value == 0:
#             #   self.dut.instr_gnt_i.value =0
#             #   await FallingEdge(self.dut.clk_i)
#             # adapter_logger.info(f"{get_formatted_sim_time()} - Monitoring instruction fetch: instr_req_o={self.dut.instr_req_o.value}, instr_addr_o={self.dut.instr_addr_o.value.integer:#x}, instr_gnt_i={self.dut.instr_gnt_i.value}")

#             # Default values for response signals
#             if self.dut.rst_ni.value == 0:
#                 self.dut.instr_gnt_i.value = 0
#                 continue
#             # if(self.dut.rst_ni.value == 0):
#             # if(self.dut.instr_req_o.value) :
#             #     self.dut.instr_gnt_i.value = 1
            
#             addr = int(self.dut.instr_addr_o.value)
#             await self.instr_queue.put(addr)
#             self.dut._log.info(f"Instruction request received for address: {addr:#x}")
#             adapter_logger.info(f"{get_formatted_sim_time()} -  Instruction request received for address: {addr:#x}")
#             # await RisingEdge(self.dut.clk_i)  # Wait for the next clock edge
#             # self.dut.instr_gnt_i.value = 0
#             # if(self.dut.instr_req_o.value == 0):
#             #     self.dut.instr_gnt_i.value = 0
#             #     continue
#             # else:
#             #     await FallingEdge(self.dut.clk_i)  # Wait for the next clock edge
#             #     self.dut.instr_gnt_i.value = 0
#             # await FallingEdge(self.dut.instr_req_o)  # Wait for the request to go low


#             # while self.dut.instr_req_o.value == 1:
#             #     await FallingEdge(self.dut.clk_i)
#             # Grant phase: Detect and latch new request
#             # if self.dut.instr_req_o.value :

#             #     addr = int(self.dut.instr_addr_o.value)
#             #     await self.instr_queue.put(addr)
#             #     self.dut._log.info(f"Instruction request received for address: {addr:#x}")
#             #     adapter_logger.info(f"{get_formatted_sim_time()} -  Instruction request received for address: {addr:#x}")
#                 # self.dut.instr_gnt_i.value = 1
#                 # Grant this request (1-cycle pulse)
#                 # await Timer(0, units="ns")
            
#             # prev_addr=int(self.dut.instr_addr_o.value)

# # #Follows Protocol 7
# #    async def monitor_instr(self):
# #         """Continuously monitor the DUT and respond to LSU instruction fetches.
# #             Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/instruction_fetch.html
# #         """
# #         # if self.dut.instr_req_o.value == 1:
# #         #     self.dut.instr_gnt_i.value = 1
# #         # else:
# #         #     self.dut.instr_gnt_i.value = 0
# #         # await ReadWrite()

# #         while True:
# #             if self.dut.instr_req_o.value == 1:
# #                  self.dut.instr_gnt_i.value = 1
# #                  addr = int(self.dut.instr_addr_o.value)
# #                  self.dut._log.info(f"Before Clock time={get_formatted_sim_time()}")
# #                  self.instr_queue.put_nowait(addr)
# #             else:
                 
# #                 self.dut.instr_gnt_i.value = 0
# #                 #Debugging what value shouldnt pass
# #                 temp=self.mem.read(int(self.dut.instr_addr_o.value),4)
# #                 self.dut._log.info(f"Read value {temp:#x} from address {int(self.dut.instr_addr_o.value):#x}")
# #                 # if temp==0xc1332d7:
# #                 #     break
# #             await ReadWrite()
            

# #             await RisingEdge(self.dut.clk_i)
# #             await ReadWrite()
            
# #             # if self.dut.instr_req_o.value.integer==1:
# #             #     self.dut.instr_gnt_i.value = 1
# #             #     self.dut._log.info(f"Clock time={get_formatted_sim_time()}")
# #             #     await ReadWrite()
# #             #     self.dut._log.info(f"Read Write done Clock time={get_formatted_sim_time()}")
# #             #     assert self.dut.instr_gnt_i.value==1, "instr_gnt_i should be 1 when instr_req_o is 1"
# #             #     addr = int(self.dut.instr_addr_o.value)
# #             #     await self.instr_queue.put(addr)
# #             #     # self.dut._log.info(f"Instruction request received for address: {addr:#x}")
# #             #     # adapter_logger.info(f"{get_formatted_sim_time()} - Instruction request received for address: {addr:#x}")
# #             # else:
# #             #     self.dut.instr_gnt_i.value = 0
# #             #     await ReadWrite()
# #             #     # continue
            
                
            

#    async def respond_instr(self):
#         '''Responds to instruction requests'''
#         await RisingEdge(self.dut.clk_i)  # Ensure we start after the first clock edge
#         self.dut._log.info(f"Before Clock time={get_formatted_sim_time()}")

#         # await RisingEdge(self.dut.clk_i)  # Ensure we start after the first clock edge
#         await ReadWrite()  # Ensure initial state is set
        

#         while True:
#             # await RisingEdge(self.dut.clk_i)
#             # self.dut.instr_rvalid_i.value = 0
#             # self.dut.instr_err_i.value = 0
#             # self.dut.instr_rdata_i.value = 0

#             try:
                
#                 # await RisingEdge(self.dut.clk_i)
#                 # if self.instr_queue.empty():
#                 #     self.dut.instr_rvalid_i.value = 0
#                 #     await RisingEdge(self.dut.clk_i)  # Wait for the next clock edge
#                 addr = await self.instr_queue.get()


#                 instruction = self.mem.read(addr,4)
#                 await RisingEdge(self.dut.clk_i)
#                 self.dut.instr_rdata_i.value = instruction
#                 self.dut.instr_err_i.value = 0
#                 self.dut.instr_rvalid_i.value = 1
#                 await ReadWrite()
#                 self.dut._log.info(f"Fetched instruction 0x{instruction:X} from address 0x{addr:X}")
#                 adapter_logger.info(f"{get_formatted_sim_time()} - Fetched instruction 0x{instruction:X} from address 0x{addr:X}")
#                 self.dut._log.info(f"time={get_formatted_sim_time()}")

#                 # await RisingEdge(self.dut.clk_i)  # Wait for the next clock edge
#                 # self.dut.instr_err_i.value = 0
#                 # self.dut._log.info(f"Instruction queue is empty, setting rvalid and err to 0 at {get_formatted_sim_time()}")
#                 # await ReadWrite()
#             except Exception as e:
#                 self.dut._log.warning(f"Instruction fetch failed at 0x{addr:X}: {e}")
#                 adapter_logger.warning(f"{get_formatted_sim_time()} - Instruction fetch failed at 0x{addr:X}: {e}")
#                 self.dut.instr_rdata_i.value = 0
#                 self.dut.instr_err_i.value = 1
#                 self.dut.instr_rvalid_i.value = 1
            
#              # Keep rvalid for 1 cycle

            
                   
# #    async def respond_instr(self):
# #         '''Responds to instruction requests'''
# #         await RisingEdge(self.dut.clk_i)
# #         await ReadWrite()

# #         while True:

            
# #             self.dut.instr_rvalid_i.value = 0
# #             self.dut.instr_err_i.value = 0
# #             await ReadWrite()  
# #             # Default: deassert rvalid and err every cycle
# #             self.dut._log.info(
# #                 f"instr_queue at {get_formatted_sim_time()}: {[hex(x) for x in list(self.instr_queue._queue)]}"
# #             )
# #             if self.instr_queue.empty():

# #                 await RisingEdge(self.dut.clk_i)  # Wait for the next clock edge
# #                 continue

# #             try:
# #                 addr = self.instr_queue.get_nowait()
# #                 instruction = self.mem.read(addr, 4)
# #                 self.dut.instr_rdata_i.value = instruction
# #                 self.dut.instr_err_i.value = 0
# #                 self.dut.instr_rvalid_i.value = 1
# #                 await ReadWrite()
# #                 self.dut._log.info(f"Fetched instruction 0x{instruction:X} from address 0x{addr:X}")
# #                 adapter_logger.info(f"{get_formatted_sim_time()} - Fetched instruction 0x{instruction:X} from address 0x{addr:X}")
# #                 self.dut._log.info(f"time={get_formatted_sim_time()}")
# #                 await RisingEdge(self.dut.clk_i)
# #                 self.dut.instr_rvalid_i.value = 0
# #                 self.dut.instr_err_i.value = 0
# #                 await ReadWrite()


# #                 # await RisingEdge(self.dut.clk_i)
# #             except Exception:
# #                 # No instruction request, just wait for next clock
# #                 await RisingEdge(self.dut.clk_i)
# #                 continue

# #             # If we got an address, respond as usual

# #         # rvalid will be deasserted on the next loop iteration

# # #Follows Protocol 7
# #    async def respond_instr(self):
# #         '''Responds to instruction requests'''
# #         self.dut._log.info(f" Entering respond at time={get_formatted_sim_time()}")
# #         while True:
# #             self.dut.instr_rvalid_i.value = 0
# #             self.dut.instr_err_i.value = 0
# #             self.dut.instr_rdata_i.value = 0
# #             await ReadWrite()  
# #             self.dut._log.info(
# #                 f"instr_queue at {get_formatted_sim_time()}: {[hex(x) for x in list(self.instr_queue._queue)]}"
# #             )
# #             try :
# #                 addr= int(self.instr_queue.get_nowait())
                
# #             except Exception as e:
# #                 self.dut._log.info(f"Instr queue is empty at time={get_formatted_sim_time()}")
# #                 await RisingEdge(self.dut.clk_i)  # Wait for the next clock edge
# #                 continue
            
# #             try:
# #                 self.dut._log.info(f"Got address {addr:#x} from instr_queue at time={get_formatted_sim_time()}")
# #                 instruction = self.mem.read(addr, 4)
# #                 self.dut.instr_rdata_i.value = instruction
# #                 self.dut.instr_err_i.value = 0
# #                 self.dut.instr_rvalid_i.value = 1
# #             except Exception as e:
# #                 self.dut._log.warning(f"Memory read failed at {addr:#x}: {e}")
# #                 adapter_logger.warning(f"{get_formatted_sim_time()} - Memory read failed at {addr:#x}: {e}")
# #                 instruction = 0
# #                 self.dut.instr_rdata_i.value = instruction
# #                 self.dut.instr_err_i.value = 1
# #                 self.dut.instr_rvalid_i.value = 1
# #             await ReadWrite()
# #             await RisingEdge(self.dut.clk_i)

            

            
import cocotb
from cocotb.triggers import RisingEdge, FallingEdge,Timer
from cocotb.handle import SimHandleBase
from cocotb.queue import Queue
from collections import deque
from memory_model import MemoryModel
import logging
import random
adapter_logger = logging.getLogger('ibex_test_logger')

def get_formatted_sim_time():
    return f"{cocotb.utils.get_sim_time(units='ns'):.2f}ns" # Force 2 decimal places for consistency

class IbexMemoryAdapter:
   '''Implements LSU Protocol for Ibex core simulation.'''

   def __init__(self, dut: SimHandleBase):
        self.dut = dut
        self.mem = MemoryModel()
        self.data_queue =Queue()
        self.instr_queue = Queue()
        # self.dut._log=adapter_logger
        adapter_logger.info("IbexMemoryAdapter initialized")


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
                    self.dut._log.warning(f"Memory read failed at {addr:#x}: {e}")
                    adapter_logger.warning(f"{get_formatted_sim_time()} - Memory read failed at {addr:#x}: {e}")
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
        prev_addr = 0
        self.dut.instr_gnt_i.value = 0
        self.dut.instr_rvalid_i.value = 0
        self.dut.instr_err_i.value = 0
        self.dut.instr_rdata_i.value = 0
        self.dut.instr_rdata_intg_i.value = 0
        while True:
            # if self.dut.instr_req_o.value :
            #     self.dut.instr_gnt_i.value = 1
            # else :
            #     self.dut.instr_gnt_i.value = 0
            # adapter_logger.info(f"{get_formatted_sim_time()} - Monitoring instruction fetch: instr_req_o={self.dut.instr_req_o.value}, instr_addr_o={self.dut.instr_addr_o.value.integer:#x}, instr_gnt_i={self.dut.instr_gnt_i.value}")
            while self.dut.instr_req_o.value == 0:
              await FallingEdge(self.dut.clk_i)
            # adapter_logger.info(f"{get_formatted_sim_time()} - Monitoring instruction fetch: instr_req_o={self.dut.instr_req_o.value}, instr_addr_o={self.dut.instr_addr_o.value.integer:#x}, instr_gnt_i={self.dut.instr_gnt_i.value}")

            # Default values for response signals
            if self.dut.rst_ni.value == 0:
                self.dut.instr_gnt_i.value = 0
                continue
            # if(self.dut.rst_ni.value == 0):
            self.dut.instr_gnt_i.value = 1
            addr = int(self.dut.instr_addr_o.value)
            await self.instr_queue.put(addr)
            self.dut._log.info(f"Instruction request received for address: {addr:#x}")
            adapter_logger.info(f"{get_formatted_sim_time()} -  Instruction request received for address: {addr:#x}")
            await FallingEdge(self.dut.clk_i)  # Wait for the next clock edge
            self.dut.instr_gnt_i.value = 0


            # while self.dut.instr_req_o.value == 1:
            #     await FallingEdge(self.dut.clk_i)
            # Grant phase: Detect and latch new request
            # if self.dut.instr_req_o.value :

            #     addr = int(self.dut.instr_addr_o.value)
            #     await self.instr_queue.put(addr)
            #     self.dut._log.info(f"Instruction request received for address: {addr:#x}")
            #     adapter_logger.info(f"{get_formatted_sim_time()} -  Instruction request received for address: {addr:#x}")
                # self.dut.instr_gnt_i.value = 1
                # Grant this request (1-cycle pulse)
                # await Timer(0, units="ns")
            
            # prev_addr=int(self.dut.instr_addr_o.value)

            

   async def respond_instr(self):
        '''Responds to instruction requests'''
        while True:
            await RisingEdge(self.dut.clk_i)
            addr = await self.instr_queue.get()

            try:
                instruction = self.mem.read(addr,4)
                self.dut.instr_rdata_i.value = instruction
                self.dut.instr_err_i.value = 0
                self.dut.instr_rvalid_i.value = 1
                self.dut._log.info(f"Fetched instruction 0x{instruction:X} from address 0x{addr:X}")
                adapter_logger.info(f"{get_formatted_sim_time()} - Fetched instruction 0x{instruction:X} from address 0x{addr:X}")
            except Exception as e:
                self.dut._log.warning(f"Instruction fetch failed at 0x{addr:X}: {e}")
                adapter_logger.warning(f"{get_formatted_sim_time()} - Instruction fetch failed at 0x{addr:X}: {e}")
                self.dut.instr_rdata_i.value = 0
                self.dut.instr_err_i.value = 1
                self.dut.instr_rvalid_i.value = 1
            
             # Keep rvalid for 1 cycle
            await RisingEdge(self.dut.clk_i)
            self.dut.instr_rvalid_i.value = 0
            self.dut.instr_err_i.value = 0
            
                   
