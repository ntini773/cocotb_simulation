import cocotb
from cocotb.triggers import RisingEdge, FallingEdge,ReadWrite
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

#Follows Protocol 7
   async def monitor_data(self):
        """Continuously monitor the DUT and respond to LSU memory accesses.
            Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/load_store_unit.html#timing2
        """
        while True:
            if self.dut.data_req_o.value :
                self.dut.data_gnt_i.value = 1
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
                
                self.data_queue.put_nowait(request)
            else :
                self.dut.data_gnt_i.value = 0
                #Debugging what value shouldnt pass
                # temp=self.mem.read(int(self.dut.data_addr_o.value),4)
                # self.dut._log.info(f"Read value {temp:#x} from address {int(self.dut.data_addr_o.value):#x}")

            # await ReadWrite()
            await RisingEdge(self.dut.clk_i)
            await ReadWrite()


#Follows Protocol 7
   async def respond_data(self):
        '''Responds to data requests'''
        while True:
            self.dut.data_rvalid_i.value = 0
            self.dut.data_err_i.value = 0
            self.dut.data_rdata_i.value = 0
            await ReadWrite()
            self.dut._log.info(
                f"data_queue at {get_formatted_sim_time()}: {[hex(x['addr']) for x in list(self.data_queue._queue)]}"
            )
            try :
                request =  self.data_queue.get_nowait()
                addr = request['addr']
                write_enable = request['write_enable']
                byte_enable = request['byte_enable']
                write_data = request['write_data']
            except Exception as e:
                self.dut._log.info(f"Data queue is empty at time={get_formatted_sim_time()}")
                await RisingEdge(self.dut.clk_i)
                continue
            try:
                if write_enable:
                    # Apply byte enables
                    await RisingEdge(self.dut.clk_i)
                    try:
                        for i in range(4):
                            if byte_enable[i]:
                                byte = (write_data >> (8 * i)) & 0xFF
                                self.mem.write(addr + i, byte, 1)
                        # Should raise rvalid even for write operations
                        self.dut.data_rvalid_i.value = 1
                        self.dut.data_err_i.value = 0
                    except Exception as e:
                        self.dut._log.warning(f"Memory write failed at {addr:#x}: {e}")
                        adapter_logger.warning(f"{get_formatted_sim_time()} - Memory write failed at {addr:#x}: {e}")
                        self.dut.data_err_i.value = 1
                        self.dut.data_rvalid_i.value = 1

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
                        read_data=0
                        self.dut.data_rdata_i.value = read_data
                        self.dut.data_err_i.value = 1
                        self.dut.data_rvalid_i.value = 1
            except Exception as e:
                self.dut._log.warning(f"Memory write failed at {addr:#x}: {e}")
                adapter_logger.warning(f"{get_formatted_sim_time()} - Memory write failed at {addr:#x}: {e}")
                
            await ReadWrite()
            await RisingEdge(self.dut.clk_i)
            

#Follows Protocol 7
   async def monitor_instr(self):
        """Continuously monitor the DUT and respond to LSU instruction fetches.
            Follows this timing diagram : https://ibex-core.readthedocs.io/en/latest/03_reference/instruction_fetch.html
        """
        while True:
            if self.dut.instr_req_o.value == 1:
                 self.dut.instr_gnt_i.value = 1
                 addr = int(self.dut.instr_addr_o.value)
                 self.dut._log.info(f"Before Clock time={get_formatted_sim_time()}")
                 self.instr_queue.put_nowait(addr)
            else:
                 
                self.dut.instr_gnt_i.value = 0
                #Debug  ging what value shouldnt pass
                temp=self.mem.read(int(self.dut.instr_addr_o.value),4)
                self.dut._log.info(f"Read value {temp:#x} from address {int(self.dut.instr_addr_o.value):#x}")
                # if temp==0xc1332d7:
                #     break
            await ReadWrite()
            

            await RisingEdge(self.dut.clk_i)
            await ReadWrite()
            
            
#Follows Protocol 7
   async def respond_instr(self):
        '''Responds to instruction requests'''
        self.dut._log.info(f" Entering respond at time={get_formatted_sim_time()}")
        while True:
            self.dut.instr_rvalid_i.value = 0
            self.dut.instr_err_i.value = 0
            self.dut.instr_rdata_i.value = 0
            await ReadWrite()  
            self.dut._log.info(
                f"instr_queue at {get_formatted_sim_time()}: {[hex(x) for x in list(self.instr_queue._queue)]}"
            )
            try :
                addr= int(self.instr_queue.get_nowait())
                
            except Exception as e:
                self.dut._log.info(f"Instr queue is empty at time={get_formatted_sim_time()}")
                await RisingEdge(self.dut.clk_i)  # Wait for the next clock edge
                continue
            
            try:
                self.dut._log.info(f"Got address {addr:#x} from instr_queue at time={get_formatted_sim_time()}")
                instruction = self.mem.read(addr, 4)
                self.dut.instr_rdata_i.value = instruction
                self.dut.instr_err_i.value = 0
                self.dut.instr_rvalid_i.value = 1
            except Exception as e:
                self.dut._log.warning(f"Memory read failed at {addr:#x}: {e}")
                adapter_logger.warning(f"{get_formatted_sim_time()} - Memory read failed at {addr:#x}: {e}")
                instruction = 0
                self.dut.instr_rdata_i.value = instruction
                self.dut.instr_err_i.value = 1
                self.dut.instr_rvalid_i.value = 1
            await ReadWrite()
            await RisingEdge(self.dut.clk_i)

            

            

