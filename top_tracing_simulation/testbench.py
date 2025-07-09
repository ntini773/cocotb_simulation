import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
# from memory_adapter2 import IbexMemoryAdapter
from lsu_protocol_self import IbexMemoryAdapter
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
    
    print(dir(dut))
    def get_formatted_sim_time():
        return f"{cocotb.utils.get_sim_time(units='ns'):.2f}ns" # Force 2 decimal places for consistency

    ['hart_id_i', 'instr_addr_o', 'instr_err_i', 'instr_gnt_i', 'instr_rdata_i', 'instr_rdata_intg_i', 'instr_req_o', 'instr_rvalid_i',
      'irq_external_i', 'irq_fast_i', 'irq_nm_i', 'irq_software_i', 'irq_timer_i', 
      'ram_cfg_i', 'rst_ni',

        'rvfi_ext_debug_mode', 'rvfi_ext_debug_req', 'rvfi_ext_ic_scr_key_valid', 'rvfi_ext_irq_valid', 'rvfi_ext_mcycle', 'rvfi_ext_mhpmcounters', 'rvfi_ext_mhpmcountersh', 'rvfi_ext_nmi', 'rvfi_ext_nmi_int', 'rvfi_ext_post_mip', 'rvfi_ext_pre_mip', 'rvfi_ext_rf_wr_suppress', 'rvfi_halt', 'rvfi_insn', 'rvfi_intr', 'rvfi_ixl', 'rvfi_mem_addr', 'rvfi_mem_rdata', 'rvfi_mem_rmask', 'rvfi_mem_wdata', 'rvfi_mem_wmask', 'rvfi_mode', 'rvfi_order', 'rvfi_pc_rdata', 'rvfi_pc_wdata', 'rvfi_rd_addr', 'rvfi_rd_wdata', 'rvfi_rs1_addr', 'rvfi_rs1_rdata', 'rvfi_rs2_addr', 'rvfi_rs2_rdata', 'rvfi_rs3_addr', 'rvfi_rs3_rdata', 'rvfi_trap', 'rvfi_valid', 
        
        'scramble_key_i', 'scramble_key_valid_i', 'scramble_nonce_i', 'scramble_req_o', ]


    # import pdb
    # pdb.set_trace()  # Set a breakpoint here to debug the test

    dut._log.info("Starting Ibex test simulation")
    ibex_logger.info(f"{get_formatted_sim_time()} Starting Ibex test simulation")

    
    clock = Clock(dut.clk_i, 1, units="ns")
    cocotb.start_soon(clock.start())
    cycle = 0

    #Initialize
    # await Timer(1, units="ns")  # This variables are needed to be scheduled in scheduler so sometime should be held to assign
    # rst =getattr(dut, 'rst_ni', None)
    # rst.value = 0 # Assert reset
    dut.rst_ni.value = 0  # Assert reset
    # dut._log.info("Reset asserted , dut.rst_ni.value: %s,rst.value :%s", dut.rst_ni.value,rst.value)
    dut.test_en_i.value = 0
    dut.ram_cfg_i.value = 0
    dut.hart_id_i.value = 0
    dut.fetch_enable_i.value = 1
    # boot_addr = getattr(dut, 'boot_addr_i', None)
    # dut._log.info(f"boot_addr_i: {dut.boot_addr_i.value.integer:#x}")  # Log the boot address}")
    # boot_addr.value = 0x80000000  # Reset vector
    # await Timer(1, units="ns") 
    dut.boot_addr_i.value = 0x80000000  # Reset vector
    dut._log.info(f"boot_addr_i: {dut.boot_addr_i.value.integer:#x}")  # Log the boot address}") Doesnt get updated instantly as scheduler need to given time 
    dut._log.info("Initialized input signals")


    mem_adapter = IbexMemoryAdapter(dut)
    dut._log.info("Programming memory with test instructions...")
    mem_adapter.mem.preload_memory("/home/nitin/cocotb_simulation/top_tracing_simulation/riscv_arithmetic_basic_test_0.o")

    

    # cocotb.start_soon(mem_adapter.monitor_and_respond_instr())
    
    dut._log.info("Memory adapter started")
    dut._log.info("Starting simulation...")
    await RisingEdge(dut.clk_i)  # Wait for the first clock edge
    await RisingEdge(dut.clk_i)  # Wait for the second clock edge to ensure DUT is ready
    cycle += 2
    cocotb.start_soon(mem_adapter.monitor_instr())
    cocotb.start_soon(mem_adapter.monitor_data())
    cocotb.start_soon(mem_adapter.respond_data())
    cocotb.start_soon(mem_adapter.respond_instr())

    dut._log.info("Resetting DUT")
    dut.rst_ni.value = 1  # Release reset
    ibex_logger.info(f"Default values : dut.instr_addr_o.value: {dut.instr_addr_o.value.integer:#x}")
    # await Timer(3, units='ns')  # Wait for a few cycles after reset
    dut._log.info("Simulation started, running for 1000 cycles")
    # for _ in range(100):
    #     await RisingEdge(dut.clk_i)

    #     dut._log.info(f"Cycle {_ + 1}: Fetch request: {dut.instr_req_o.value}, Fetch address: {dut.instr_addr_o.value.integer:#x},Grant: {dut.instr_gnt_i.value}, Instruction data: {dut.instr_rdata_i.value.integer:#x}")
    #     dut._log.info(f" rvfi_valid={dut.rvfi_valid.value}, pc={dut.rvfi_pc_rdata.value.integer:#x}, instr={dut.rvfi_insn.value.integer:#x}")
    #     # Log RVFI signals
    #     # if dut.rvfi_valid.value:
    #     #     dut._log.info(f"Babu Namaste:{dut.rvfi_valid.value}, pc={dut.rvfi_pc_rdata.value}, instr={dut.rvfi_insn.value}, ")
        
    rvfi_count = 0
    mem_adapter.mem.dump_memory("nitin.txt")
    v1=mem_adapter.mem.read(0x800000e6, 1)
    v2=mem_adapter.mem.read(0x800000e7, 1)
    v3=mem_adapter.mem.read(0x800000e8, 1)
    v4=mem_adapter.mem.read(0x800000e9, 1)
    v5=mem_adapter.mem.read(0x800000e6, 4)
    dut._log.info(f"Memory dump at 0x800000e4: {v1:#x}, 0x800000e5: {v2:#x}, 0x800000e6: {v3:#x}, 0x800000e7: {v4:#x},total:{v5:#x})")
    for cycle in range(1500):
        await RisingEdge(dut.clk_i)
        dut._log.info(f"Main Clock :{get_formatted_sim_time()}")
        
        ibex_logger.info(
            f"Cycle {cycle}: "
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
            # rvfi_logger.info(f"  --- Instruction Fetch Details (from LSU) ---") 
            # rvfi_logger.info(f"  Current Cycle: {cycle}") 
            # rvfi_logger.info(f"  Instr Request: {dut.instr_req_o.value}")
            # rvfi_logger.info(f"  Instr Address: {dut.instr_addr_o.value.integer:#x}")
            # rvfi_logger.info(f"  Instr Grant:   {dut.instr_gnt_i.value}")
            # rvfi_logger.info(f"  Instr RValid:  {dut.instr_rvalid_i.value}")
            # rvfi_logger.info(f"  Instr Data:    {dut.instr_rdata_i.value.integer:#x}")
            # rvfi_logger.info(f"  ------------------------------------------")
            
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
            else:
                rvfi_logger.info("Mem:        No access")
        # --- End RVFI Logging Block ---
    


        