import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
# from memory_adapter2 import IbexMemoryAdapter
from lsu_protocol import IbexMemoryAdapter
from memory_model import MemoryModel
import logging
import os

@cocotb.test()
async def test_ibex_top_tracing(dut):
    """
    Test Ibex core with tracing using custom memory adapter and logging.
    Logs both general execution and RVFI signals.
    """
    
    print(dir(dut))


    dut._log.info("Starting Ibex test simulation")

    # Start clock
    clock = Clock(dut.clk_i, 1, units="ns")
    cocotb.start_soon(clock.start())

    # Initialize inputs
    dut.rst_ni.value = 0
    dut.test_en_i.value = 0
    dut.ram_cfg_i.value = 0
    dut.hart_id_i.value = 0
    dut.fetch_enable_i.value = 1
    dut.boot_addr_i.value = 0x80000000  # Reset vector
    dut._log.info("Initialized input signals")
    # Create memory adapter instance
    mem_adapter = IbexMemoryAdapter(dut)
    dut._log.info("Programming memory with test instructions...")
    mem_adapter.mem.preload_memory("/home/nitin/cocotb_simulation/top_tracing_simulation/riscv_arithmetic_basic_test_0.o")
    # Start memory adapter monitoring
    cocotb.start_soon(mem_adapter.monitor_data())
    cocotb.start_soon(mem_adapter.respond_data())
    cocotb.start_soon(mem_adapter.monitor_instr())
    cocotb.start_soon(mem_adapter.respond_instr())

    # cocotb.start_soon(mem_adapter.monitor_and_respond_instr())
    
    dut._log.info("Memory adapter started")
    dut._log.info("Starting simulation...")
    dut.rst_ni.value = 1  # Release reset
    await Timer(3, units='ns')  # Wait for a few cycles after reset
    dut._log.info("Simulation started, running for 1000 cycles")
    for _ in range(100):
        await RisingEdge(dut.clk_i)
        dut._log.info(f"Instruction fetch request: {dut.instr_req_o.value}, Instruction address: {dut.instr_addr_o.value.integer:#x},Instruction gnt: {dut.instr_gnt_i.value}, Instruction data: {dut.instr_rdata_i.value.integer:#x}")
        dut._log.info(f"Cycle {_ + 1}: rvfi_valid={dut.rvfi_valid.value}, pc={dut.rvfi_pc_rdata.value.integer:#x}")
        # Log RVFI signals
        # if dut.rvfi_valid.value:
        #     dut._log.info(f"Babu Namaste:{dut.rvfi_valid.value}, pc={dut.rvfi_pc_rdata.value}, instr={dut.rvfi_insn.value}, ")
        