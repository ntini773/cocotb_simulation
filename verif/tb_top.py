from pathlib import Path
import sys
import cocotb
import pyuvm
from pyuvm import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge , ClockCycles , ReadWrite

# print(sys.path)
sys.path.insert(0,str(Path("./utils").resolve()))
sys.path.insert(0,str(Path("./env").resolve()))
# print(sys.path)
from env.environment import environment
from env.rvfi_interface import RVFI_Interface
from env.mem_interface import Mem_Interface

@pyuvm.test()
class BaseTest(uvm_test):
    def build_phase(self):
        self.rvfi_if = RVFI_Interface()
        self.mem_if = Mem_Interface()
        ConfigDB().is_tracing=True
        ConfigDB().set(self, "*", "rvfi_if",self.rvfi_if)
        ConfigDB().set(self, "*", "mem_if",self.mem_if)
        env = environment.create("env", self)


    async def run_phase(self):
        self.raise_objection()
        clock = Clock(cocotb.top.clk_i, 1, units="ns")
        cocotb.start_soon(clock.start())
        self.logger.info(f"Base Test Started...!")
        # Setup DUT Internal signals and preload
        cocotb.top.test_en_i.value = 0
        cocotb.top.ram_cfg_i.value = 0
        cocotb.top.hart_id_i.value = 0
        cocotb.top.fetch_enable_i.value = 0
        cocotb.top.rst_ni.value = 1
        await ReadWrite()
        await ClockCycles(cocotb.top.clk_i, 5)
        # TODO: Preload in memory model and in Hammer
        mem_model=ConfigDB().get(self, "", "memory_model")
        mem_model.preload_memory("./ibex_load_instr_test_0.o")
        # mem_model.dump_memory("check_memory.txt")
        cocotb.top.rst_ni.value = 0
        cocotb.top.boot_addr_i.value = 0x80000000
        await ClockCycles(cocotb.top.clk_i, 5)
        cocotb.top.fetch_enable_i.value = 1
        cocotb.top.rst_ni.value = 1

        # Started Requesting Instructions
        print(f"Req={cocotb.top.instr_req_o.value}, Addr={cocotb.top.instr_addr_o.value.integer:#x}")
        await ClockCycles(cocotb.top.clk_i, 10)
        self.drop_objection()

