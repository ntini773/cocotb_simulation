import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
from memory_adapter2 import IbexMemoryAdapter
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

    # Setup general logging
    log_dir = os.path.join(os.path.dirname(__file__), "logs")
    os.makedirs(log_dir, exist_ok=True)
    
    # Setup main log file
    log_file = os.path.join(log_dir, "ibex_test.log")
    fh = logging.FileHandler(log_file, mode='w')
    fh.setLevel(logging.INFO)
    formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
    fh.setFormatter(formatter)
    dut._log.addHandler(fh)
    
    # Setup RVFI specific log file
    rvfi_logger = logging.getLogger('rvfi_logger')
    rvfi_logger.setLevel(logging.INFO)
    rvfi_file = os.path.join(log_dir, "rvfi_trace.log")
    rvfi_handler = logging.FileHandler(rvfi_file, mode='w')
    rvfi_handler.setFormatter(formatter)
    rvfi_logger.addHandler(rvfi_handler)
    
    dut._log.info("Starting Ibex test simulation")

    # Start clock
    clock = Clock(dut.clk_i, 1, units="ns")  # 100 MHz
    cocotb.start_soon(clock.start())

    # Initialize inputs
    dut.rst_ni.value = 0
    dut.test_en_i.value = 0
    dut.ram_cfg_i.value = 0
    dut.hart_id_i.value = 0
    dut.fetch_enable_i.value=1
    dut.boot_addr_i.value = 0x80000000  # Reset vector
    dut._log.info("Initialized input signals")

    # Create memory adapter instance
    mem_adapter = IbexMemoryAdapter(dut)
    

    dut._log.info("Programming memory with test instructions...")
    mem_adapter.mem.preload_memory("/home/nitin/cocotb_simulation/top_tracing_simulation/riscv_arithmetic_basic_test_0.o")
  
    # Start memory adapter monitoring
    cocotb.start_soon(mem_adapter.monitor_and_respond_data())
    cocotb.start_soon(mem_adapter.monitor_and_respond_instr())
    # await mem_adapter.monitor_and_respond()
    dut._log.info("Started memory adapter monitoring")



    # Hold in reset for 5 cycles
    dut._log.info("Holding in reset for 5 cycles...")
    for _ in range(5):
        await RisingEdge(dut.clk_i)

    # Release reset
    dut.rst_ni.value = 1
    dut._log.info("Released reset")

    # Monitor execution
    timeout = 100
    instruction_count = 0
    data_access_count = 0
    rvfi_count = 0
    
    dut._log.info(f"Starting execution monitoring for {timeout} cycles...")
    # await mem_adapter.monitor_and_respond()
    for cycle in range(timeout):
        print(f"rvfi_valid: {dut.rvfi_valid.value}, cycle: {cycle}")
        # Log RVFI signals
        if True:
            rvfi_count += 1
            rvfi_logger.info(f"\n=== RVFI Instruction {rvfi_count} (Cycle {cycle}) ===")
            rvfi_logger.info(f"Order:      {dut.rvfi_order.value.integer:#x}")
            rvfi_logger.info(f"Insn:       {dut.rvfi_insn.value.integer:#x}")
            rvfi_logger.info(f"Trap:       {dut.rvfi_trap.value}")
            rvfi_logger.info(f"Halt:       {dut.rvfi_halt.value}")
            rvfi_logger.info(f"Intr:       {dut.rvfi_intr.value}")
            rvfi_logger.info(f"Mode:       0x{dut.rvfi_mode.value.integer:#x}")
            rvfi_logger.info(f"PC:         0x{dut.rvfi_pc_rdata.value.integer:#x}")
            rvfi_logger.info(f"Next PC:    0x{dut.rvfi_pc_wdata.value.integer:#x}")
            
            # Register reads
            for i in range(2):
                rs_valid = getattr(dut, f'rvfi_rs{i+1}_addr').value
                rs_data = getattr(dut, f'rvfi_rs{i+1}_rdata').value
                rvfi_logger.info(f"rs{i+1}_addr:   {rs_valid.integer:02d}")
                rvfi_logger.info(f"rs{i+1}_rdata:  0x{rs_data.integer:08x}")
            
            # Register writes
            for i in range(1):
                rs_addr = getattr(dut, f'rvfi_rs{i+1}_addr').value
                rs_wdata = getattr(dut, f'rvfi_rs{i+1}_rdata').value
                rvfi_logger.info(f"rd{i+1}_addr:   {rs_addr.integer:02d}")
                rvfi_logger.info(f"rd{i+1}_wdata:  0x{rs_wdata.integer:08x}")
            
            # Memory access
            rvfi_logger.info(f"Mem addr:   0x{dut.rvfi_mem_addr.value.integer:08x}")
            rvfi_logger.info(f"Mem rdata:  0x{dut.rvfi_mem_rdata.value.integer:08x}")
            rvfi_logger.info(f"Mem wdata:  0x{dut.rvfi_mem_wdata.value.integer:08x}")
            rvfi_logger.info(f"Mem rmask:  0x{dut.rvfi_mem_rmask.value.integer:x}")
            rvfi_logger.info(f"Mem wmask:  0x{dut.rvfi_mem_wmask.value.integer:x}")

        # Log instruction fetches
        if dut.instr_req_o.value == 1:
            addr = dut.instr_addr_o.value
            instruction_count += 1
            # print(addr)
            dut._log.info(f"Cycle {cycle}: Instruction fetch from 0x{int(addr):08x}")

        # Log data accesses
        if dut.data_req_o.value == 1:
            addr = dut.data_addr_o.value
            data_access_count += 1
            if dut.data_we_o.value:
                data = dut.data_wdata_o.value
                mask = dut.data_be_o.value
                dut._log.info(f"Cycle {cycle}: Data write 0x{data:08x} to 0x{int(addr):08x} (mask: 0x{int(mask):x})")
            else:
                dut._log.info(f"Cycle {cycle}: Data read from 0x{addr:08x}")

    # Log execution statistics
    dut._log.info(f"\nTest completed - Statistics:")
    dut._log.info(f"Total cycles:          {timeout}")
    dut._log.info(f"Instructions fetched:  {instruction_count}")
    dut._log.info(f"Data accesses:         {data_access_count}")
    dut._log.info(f"RVFI instructions:     {rvfi_count}")
    
    # Close log handlers
    fh.close()
    rvfi_handler.close()
    dut._log.removeHandler(fh)
    rvfi_logger.removeHandler(rvfi_handler)


# from memory_adapter2 import IbexMemoryAdapter

# @cocotb.test()
# async def test_lsu(dut):
#     adapter = IbexMemoryAdapter(dut)
#     cocotb.start_soon(adapter.monitor_and_respond())

#     # Now run your memory-based test sequences here
#     adapter.mem.preload_memory("/home/nitin/cocotb_simulation/top_tracing_simulation/riscv_arithmetic_basic_test_0.o")
