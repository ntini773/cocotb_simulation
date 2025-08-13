import cocotb
from cocotb.triggers import RisingEdge, Timer , ClockCycles
from cocotb.clock import Clock
# from memory_adapter2 import IbexMemoryAdapter
from lsu_protocol import IbexMemoryAdapter
from memory_model import MemoryModel
import logging
import os       

# Setup general logging
log_dir = os.path.join(os.path.dirname(__file__), "logs_testbench")
os.makedirs(log_dir, exist_ok=True)
formatter = logging.Formatter(
    '%(asctime)s %(levelname)-8s %(name)-20s %(message)s',
    datefmt="%t.2fns" # This should give you "93.00ns" for simulation time
)
# Setup main log file
ibex_logger = logging.getLogger('ibex_test_logger')
ibex_logger.setLevel(logging.DEBUG)
log_file = os.path.join(log_dir, "ibex_test.log")
fh = logging.FileHandler(log_file, mode='w')
fh.setLevel(logging.INFO)
# formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
# formatter = logging.Formatter(' %(name)s - %(message)s')  # Use cocotb's time format
# formatter = logging.Formatter('%(levelname)s - %(name)s - %(message)s') 
fh.setFormatter(formatter)
ibex_logger.addHandler(fh)
ibex_logger.propagate = False

 # Setup RVFI specific log file
rvfi_logger = logging.getLogger('rvfi_logger')
rvfi_logger.setLevel(logging.INFO)
rvfi_file = os.path.join(log_dir, "rvfi_trace.log")
rvfi_handler = logging.FileHandler(rvfi_file, mode='w')
rvfi_handler.setFormatter(formatter)
rvfi_logger.addHandler(rvfi_handler)
rvfi_logger.propagate = False

ch_ibex = logging.StreamHandler() # [cite: 295, 3685]
ch_ibex.setLevel(logging.INFO) # Set the level for console output (e.g., INFO, DEBUG) [cite: 293, 3677]
ch_ibex.setFormatter(formatter) # Use the same formatter for consistent appearance 
ibex_logger.addHandler(ch_ibex) # Add the console handler to your logger 


@cocotb.test()
async def test_ibex_top_tracing(dut):
    """
    Test Ibex core with tracing using custom memory adapter and logging.
    Logs both general execution and RVFI signals.
    """
    
    # print(dir(dut))
    # print(dir(dut.u_ibex_top))  # Print the attributes of the Ibex top for debugging   
    # print(dir(dut.u_ibex_top.u_ibex_core))    
    # print(dir(dut.u_ibex_top.u_ibex_core.id_stage_i))    
    def get_formatted_sim_time():
        return f"{cocotb.utils.get_sim_time(units='ns'):.2f}ns" # Force 2 decimal places for consistency



    # import pdb
    # pdb.set_trace()  # Set a breakpoint here to debug the test

    dut._log.info("Starting Ibex test simulation")
    ibex_logger.info(f"{get_formatted_sim_time()} Starting Ibex test simulation")

    
    clock = Clock(dut.clk_i, 1, units="ns")
    cocotb.start_soon(clock.start())
    cycle = 0

    dut.rst_ni.value = 1  # Assert reset
    dut.test_en_i.value = 0
    dut.ram_cfg_i.value = 0
    dut.hart_id_i.value = 0
    dut.fetch_enable_i.value = 1
    dut.boot_addr_i.value = 0x80000000  # Reset vector
    await RisingEdge(dut.clk_i) 
    await RisingEdge(dut.clk_i) 
    cycle += 2
    dut._log.info("Programming memory with test instructions...")
    mem_adapter = IbexMemoryAdapter(dut)
    dut._log.info("Memory adapter started")
    # mem_adapter.mem.preload_memory("./ibex_arithmetic_basic_test_0.o")
    mem_adapter.mem.preload_memory("./ibex_load_instr_test_5.o")
    
    dut._log.info(f"boot_addr_i: {dut.boot_addr_i.value.integer:#x}")  # Log the boot address}") Doesnt get updated instantly as scheduler need to given time 
    dut._log.info("Initialized input signals")



    

    # cocotb.start_soon(mem_adapter.monitor_and_respond_instr())
    dut._log.info("Resetting DUT")
    dut.rst_ni.value = 0  # Release reset
    
    # Wait a few cycles for the core to initialize after reset
    await RisingEdge(dut.clk_i)
    await RisingEdge(dut.clk_i)
    cycle += 2
    dut.rst_ni.value = 1  # Assert reset again to ensure proper initialization
    
    # Log the privilege mode immediately after reset from multiple sources
    priv_mode_after_reset = dut.rvfi_mode.value.integer
    cs_priv_mode = dut.u_ibex_top.u_ibex_core.cs_registers_i.priv_mode_id_o.value.integer
    cs_priv_lvl_q = dut.u_ibex_top.u_ibex_core.cs_registers_i.priv_lvl_q.value.integer
    rvfi_stage_mode_0 = dut.u_ibex_top.u_ibex_core.rvfi_stage_mode[0].value.integer
    
    ibex_logger.info(f"PRIVILEGE MODE ANALYSIS AFTER RESET:")
    ibex_logger.info(f"  RVFI Mode (dut.rvfi_mode): {priv_mode_after_reset:#x}")
    ibex_logger.info(f"  CS Registers priv_mode_id_o: {cs_priv_mode:#x}")
    ibex_logger.info(f"  CS Registers priv_lvl_q: {cs_priv_lvl_q:#x}")
    ibex_logger.info(f"  RVFI stage_mode[0]: {rvfi_stage_mode_0:#x}")
    ibex_logger.info(f"  Expected: 0x3 (Machine mode)")
    
    dut._log.info(f"Privilege mode after reset: {priv_mode_after_reset:#x}")
    
    # ISSUE IDENTIFIED: Ibex is starting in User mode (0x0) instead of Machine mode (0x3)
    # This is incorrect behavior according to RISC-V specification.
    # The core should start in Machine mode after reset.
    if priv_mode_after_reset == 0:
        ibex_logger.warning("WARNING: Ibex core is starting in User mode instead of Machine mode!")
        ibex_logger.warning("This will cause CSR instructions to trap to the exception handler.")
        ibex_logger.warning("Expected behavior: Core should start in Machine mode (0x3) after reset.")
    elif priv_mode_after_reset == 3:
        ibex_logger.info("GOOD: Ibex core correctly started in Machine mode.")
    else:
        ibex_logger.warning(f"UNEXPECTED: Ibex core started in privilege mode {priv_mode_after_reset:#x}")
    
    dut._log.info("Starting simulation...")
    cocotb.start_soon(mem_adapter.monitor_instr())
    cocotb.start_soon(mem_adapter.monitor_data())
    cocotb.start_soon(mem_adapter.respond_data())
    cocotb.start_soon(mem_adapter.respond_instr())

    print(f"Req={cocotb.top.instr_req_o.value}, Addr={cocotb.top.instr_addr_o.value.integer:#x}")

    ibex_logger.info(f"Default values : dut.instr_addr_o.value: {dut.instr_addr_o.value.integer:#x}")
    dut._log.info("Simulation started, running for 1000 cycles")

    rvfi_count = 0
    # mem_adapter.mem.dump_memory("nitin.txt") # Checking dump memory
    for cycle in range(3500):
        await RisingEdge(dut.clk_i)
        dut._log.info(f"Main Clock :{get_formatted_sim_time()}")
        # dut._log.info(f"Hi:{dut.u_ibex_top.u_ibex_core.id_stage_i.priv_mode_i}")
        # ibex_logger.info(f"Cycle:{cycle},Privileged Mode:{dut.u_ibex_top.u_ibex_core.id_stage_i.priv_mode_i}")

        ibex_logger.info(
            f"Cycle {cycle+4}: "
            f"instr_req_o: {dut.instr_req_o.value}, "
            f"instr_addr_o: {dut.instr_addr_o.value.integer:#x}, "
            f"instr_gnt_i: {dut.instr_gnt_i.value}, "
            f"instr_rdata_i: {dut.instr_rdata_i.value.integer:#x}, "
            f"instr_rvalid_i: {dut.instr_rvalid_i.value}"
        )


                # --- Your RVFI Logging Block (Modified) ---
        if dut.rvfi_valid.value: # Log RVFI signals only when valid
            rvfi_count += 1
            # Explicitly log Instruction Fetch Details with specific formatting
            rvfi_logger.info(f"\n=== RVFI Instruction {rvfi_count} (Cycle {cycle}) Simulation time {get_formatted_sim_time()}===")
            
            # Core RVFI fields
            rvfi_logger.info(f"Order:      {dut.rvfi_order.value.integer:#x}") # Added 0x prefix for consistency
            rvfi_logger.info(f"Insn:       {dut.rvfi_insn.value.integer:#x}") # Added 0x prefix
            rvfi_logger.info(f"Trap:       {dut.rvfi_trap.value}")
            rvfi_logger.info(f"Halt:       {dut.rvfi_halt.value}")
            rvfi_logger.info(f"Intr:       {dut.rvfi_intr.value}")
            rvfi_logger.info(f"Mode:       {dut.rvfi_mode.value.integer:#x}") # Fixed 0x0x issue
            rvfi_logger.info(f"PC:         {dut.rvfi_pc_rdata.value.integer:#x}") # Fixed 0x0x issue
            rvfi_logger.info(f"Next PC:    {dut.rvfi_pc_wdata.value.integer:#x}") # Fixed 0x0x issue
            
            # Register reads
            for i in range(2): 
                rs_addr = getattr(dut, f'rvfi_rs{i+1}_addr').value
                rs_rdata = getattr(dut, f'rvfi_rs{i+1}_rdata').value
                rvfi_logger.info(f"rs{i+1}_addr:   {rs_addr.integer:02d}")
                rvfi_logger.info(f"rs{i+1}_rdata:  0x{rs_rdata.integer:08x}")
            
            # Register writes
            rvfi_logger.info(f"rd_addr:    {dut.rvfi_rd_addr.value.integer:02d}")
            rvfi_logger.info(f"rd_wdata:   0x{dut.rvfi_rd_wdata.value.integer:08x}")
            
            # Memory access
            if dut.rvfi_mem_rmask.value.integer or dut.rvfi_mem_wmask.value.integer:
                rvfi_logger.info(f"Mem addr:   0x{dut.rvfi_mem_addr.value.integer:08x}")
                rvfi_logger.info(f"Mem rdata:  0x{dut.rvfi_mem_rdata.value.integer:08x}")
                rvfi_logger.info(f"Mem wdata:  0x{dut.rvfi_mem_wdata.value.integer:08x}")
                rvfi_logger.info(f"Mem rmask:  0x{dut.rvfi_mem_rmask.value.integer:x}")
                rvfi_logger.info(f"Mem wmask:  0x{dut.rvfi_mem_wmask.value.integer:x}")
                # Add rvfi_mem_extamo if it's always available and desired in your specific Ibex config
                # if hasattr(dut, 'rvfi_mem_extamo'):
                #    rvfi_logger.info(f"Mem extamo: 0x{dut.rvfi_mem_extamo.value.integer:x}")
                if dut.rvfi_mem_addr.value.integer == 0x80002000:
                    rvfi_logger.info("Simulation ending : Memory access at tohost address 0x80002000")
                    break
                if dut.rvfi_mem_addr.value.integer == 0xdeadbeeb:
                    if dut.rvfi_mem_wdata.value.integer == 0x00000101:
                        rvfi_logger.info("Simulation ending :  Test Failed , 101 written to signature address")
                        break
                    elif dut.rvfi_mem_wdata.value.integer == 0x00000001:
                        rvfi_logger.info("Simulation ending :  Test Passed , 1 written to signature address")
                        break
                    
            else:
                rvfi_logger.info("Mem:        No access")
            

            
            
        # --- End RVFI Logging Block ---



