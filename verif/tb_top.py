from pathlib import Path
import sys
import cocotb
import pyuvm
from pyuvm import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge , ClockCycles

# print(sys.path)
sys.path.insert(0,str(Path("./utils").resolve()))
sys.path.insert(0,str(Path("./env").resolve()))
# print(sys.path)
from env.environment import environment
from env.rvfi_interface import RVFI_Interface
from env.instr_data_mem_interface import Instr_Data_Mem_Interface

@pyuvm.test()
class BaseTest(uvm_test):
    def build_phase(self):
        self.rvfi = RVFI_Interface()
        self.instr_data_mem = Instr_Data_Mem_Interface()
        ConfigDB().set(self, "*", "rvfi_if",self.rvfi)
        ConfigDB().set(self, "*", "instr_data_mem_if",self.instr_data_mem)
        env = environment.create("env", self)


    async def run_phase(self):
        self.raise_objection()
        clock = Clock(cocotb.top.clk_i, 1, units="ns")
        cocotb.start_soon(clock.start())
        await ClockCycles(cocotb.top.clk_i, 10)
        self.logger.info(f"Base Test Started...!")
        # TO DO : Setup DUT Internal signals and preload
        
        
        self.drop_objection()

