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
from agents.mem_agent.mem_seq_lib import mem_seq

@pyuvm.test()
class BaseTest(uvm_test):
    def build_phase(self):
        self.rvfi_if = RVFI_Interface()
        self.mem_if = Mem_Interface()
        # ConfigDB().is_tracing=True
        ConfigDB().set(self, "*", "rvfi_if",self.rvfi_if)
        ConfigDB().set(self, "*", "mem_if",self.mem_if)
        self.env = environment.create("env", self)

    def end_of_elaboration_phase(self):
        self.mem_seq = mem_seq.create("mem_seq")
        
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
        mem_model=ConfigDB().get(None, "", "memory_model")
        mem_model.preload_memory("./ibex_load_instr_test_0.o")
        # mem_model.dump_memory("check_memory.txt")
        cocotb.top.rst_ni.value = 0
        cocotb.top.boot_addr_i.value = 0x80000000
        await ClockCycles(cocotb.top.clk_i, 5)
        cocotb.top.fetch_enable_i.value = 1
        cocotb.top.rst_ni.value = 1

        # Started Requesting Instructions
        print(f"Req={cocotb.top.instr_req_o.value}, Addr={cocotb.top.instr_addr_o.value.integer:#x}")
        # await ClockCycles(cocotb.top.clk_i, 10)
        # self.drop_objection()
        await self.mem_seq.start(self.env.mem_agent.sequencer)
        # await self.mem_seq.start()
        # i = 1
        # while True:
        #     await RisingEdge(cocotb.top.clk_i)
        #     self.logger.critical(f"Clk edge:{i}, Req={cocotb.top.instr_req_o.value}, Addr={cocotb.top.instr_addr_o.value.integer:#x}")
        #     if mem_model.read(0x80002000,4)==1:
        #         self.logger.info("Simulation ending : Memory access at tohost address 0x80002000")
        #         self.drop_objection()
        #         return
        #     i += 1

        # await ClockCycles(cocotb.top.clk_i, 100)

        self.drop_objection()

