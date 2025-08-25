import pyuvm 
from pyuvm import *
from pathlib import Path
import os, time, sys
import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge

# Import the co-simulation solution
from hammer_cosim import HammerCoSim

class scoreboard(uvm_scoreboard):
    
    def build_phase(self):
        
        # FIFO for RVFI packets
        self.rvfi_port = uvm_tlm_analysis_fifo("rvfi_port", self)
        self.rvfi_export = self.rvfi_port.analysis_export
        
        # Get ELF path
        elf_raw = cocotb.plusargs.get("ELF_PATH")
        if not elf_raw:
            raise RuntimeError("Pass +ELF_PATH=/path/to/prog.elf")
        
        self.elf_path = str(Path(elf_raw).expanduser().resolve())
        
        # Set up memory addresses to watch
        #TODO : Change this to a variable To-host address
        self.memory_watch_addresses = [
            0x80002000  # Your target memory location
        ]
        
        # Initialize co-simulation
        self.hammer_cosim = HammerCoSim(
            self.elf_path,
            memory_watch_addresses=self.memory_watch_addresses
        )
        
        self.current_step = 1
        self.cosim_ready = False
    
    def start_of_simulation_phase(self):
        """Initialize co-simulation"""
        self.logger.info("Starting Hammer co-simulation...")
        
        result = self.hammer_cosim.start_cosimulation()
        
        if result["success"]:
            self.cosim_ready = True
            self.logger.info("Hammer co-simulation ready and waiting!")
            
            # Query initial PC
            pc_result = self.hammer_cosim.query_pc()
            if pc_result["success"]:
                self.logger.info(f"Initial PC: {pc_result['pc_hex']}")
            
        else:
            self.logger.error(f"Co-simulation failed: {result['message']}")
            raise RuntimeError("Hammer co-simulation initialization failed")
    
    async def run_phase(self):
        """Main verification loop with co-simulation"""
        
        if not self.cosim_ready:
            self.logger.error("Co-simulation not ready")
            return
        
        self.logger.info("Starting co-simulation verification...")
        
        # Main loop: wait for RVFI packets, then step Hammer
        while True:
            try:
                # === WAIT FOR RVFI PACKET FROM DUT ===
                self.logger.info("Waiting for RVFI packet from FIFO...")
                
                # This blocks until FIFO has data
                rvfi_packet = await self.rvfi_port.get()
                
                # self.logger.info(f"Received RVFI packet: {rvfi_packet}")
                
                # === NOW STEP HAMMER (synchronized!) ===
                self.logger.info(f"Stepping Hammer (step {self.current_step})...")
                
                step_result = self.hammer_cosim.step_instruction(self.current_step)
                
                if step_result["success"]:
                    hammer_data = step_result["data"]
                    
                    # === COMPARE RVFI vs HAMMER ===
                    await self.compare_rvfi_hammer(rvfi_packet, hammer_data)
                    
                    self.current_step += 1
                    
                else:
                    self.logger.error(f"Hammer step failed: {step_result}")
                    break
                    
            except Exception as e:
                self.logger.error(f"Co-simulation error: {e}")
                break
    
    async def compare_rvfi_hammer(self, rvfi_packet, hammer_data):
        """Print both RVFI packet and Hammer data side by side"""
        
        step_num = hammer_data["step_number"]
        # self.logger.info(f"═══════════ STEP {step_num} SIGNALS ═══════════")
        
        # Print RVFI signals
        self.logger.info("🔵 RVFI SIGNALS:")

        # If rvfi_packet has specific attributes, print them individually
        # if hasattr(rvfi_packet, '__dict__'):
        #     for attr, value in rvfi_packet.__dict__.items():
        #         if not attr.startswith('_'):
        #             self.logger.info(f"  rvfi_{attr}: {value}")
        self.logger.info(f"Order:{rvfi_packet.order}, PC:{rvfi_packet.pc_rdata:#x}, Insn Hex:{rvfi_packet.insn:#x}")
        
        # If it's a dict-like object
        # elif hasattr(rvfi_packet, 'items'):
        #     for key, value in rvfi_packet.items():
        #         self.logger.info(f"  rvfi_{key}: {value}")
        
        # Print Hammer signals
        self.logger.info("🟡 HAMMER SIGNALS:")
        self.logger.info(f"  PC: {hammer_data['pc_hex']} -> {hammer_data['pc_after_step_hex']}")
        # self.logger.info(f"  Instruction: {hammer_data['instruction_string']}")
        self.logger.info(f"  Instruction Hex: {hammer_data['instruction_hex']:#x}")
        
        # # Register addresses
        # if hammer_data.get("rs1_addr") is not None:
        #     self.logger.info(f"  rs1_addr: {hammer_data['rs1_addr']}")
        # if hammer_data.get("rs2_addr") is not None:
        #     self.logger.info(f"  rs2_addr: {hammer_data['rs2_addr']}")
        # if hammer_data.get("rd_addr") is not None:
        #     self.logger.info(f"  rd_addr: {hammer_data['rd_addr']}")
        
        # # CSR data
        # if hammer_data.get("csr_addr") is not None:
        #     self.logger.info(f"  csr_addr: {hammer_data['csr_addr']}")
        #     self.logger.info(f"  csr_value: {hammer_data['csr_value_hex']}")
        
        # # Register writes
        # if hammer_data["register_writes"]:
        #     self.logger.info("  Register writes:")
        #     for rw in hammer_data["register_writes"]:
        #         self.logger.info(f"    x{rw['register']} = {rw['value_hex']}")
        # else:
        #     self.logger.info("  Register writes: None")
        
        # # Memory reads
        # if hammer_data["memory_reads"]:
        #     self.logger.info("  Memory reads:")
        #     for mr in hammer_data["memory_reads"]:
        #         self.logger.info(f"    [{mr['address_hex']}] = {mr['value_hex']} (size: {mr['size']})")
        # else:
        #     self.logger.info("  Memory reads: None")
        
        # # Memory writes
        # if hammer_data["memory_writes"]:
        #     self.logger.info("  Memory writes:")
        #     for mw in hammer_data["memory_writes"]:
        #         self.logger.info(f"    [{mw['address_hex']}] = {mw['value_hex']} (size: {mw['size']})")
        # else:
        #     self.logger.info("  Memory writes: None")
        
        # # Current register values (a0-a5)
        # self.logger.info("  Current register values:")
        # for reg_name, reg_data in hammer_data["registers"].items():
        #     if reg_data["value"] is not None:
        #         self.logger.info(f"    {reg_name}: {reg_data['value_hex']}")
        
        # # Memory contents at watched addresses
        # if hammer_data["memory_contents"]:
        #     self.logger.info("  Watched memory contents:")
        #     for addr, data in hammer_data["memory_contents"].items():
        #         if data["value"] is not None:
        #             self.logger.info(f"    {addr}: {data['value_hex']}")
        #         else:
        #             self.logger.info(f"    {addr}: N/A")
        
        self.logger.info("═══════════════════════════════════════════════")
        
        await Timer(1, 'ns')  # Small delay
    
    def final_phase(self):
        """Cleanup co-simulation"""
        if self.hammer_cosim:
            self.logger.info("Shutting down Hammer co-simulation...")
            self.hammer_cosim.shutdown()
            self.logger.info(f"Total steps processed: {self.current_step}")