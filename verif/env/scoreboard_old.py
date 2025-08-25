import pyuvm 
from pyuvm import *
from pathlib import Path
import os , time
import sys
import cocotb
from cocotb.triggers import Timer
sys.path.insert(0, "/home/nitin/hammer-deps/hammer/builddir")
import hammer
# Declare a logger file if cocotb.plusargs has LOG_PATH 

# class scoreboard(uvm_scoreboard):
#     # def __init__(self,elf_path):
#     #     self.elf_path = elf_path
#     #     self.logger.info(f"Using ELF file: {self.elf_path}")
#     def build_phase(self):
#         #TODO : Declare a uvm_analysis_fifo to receive RVFI Packets
#         self.rvfi_port = uvm_tlm_analysis_fifo("rvfi_port",self)
#         self.rvfi_export =self.rvfi_port.analysis_export
#         #TODO : Instantiate hammer as a function
#         # self.h=self.instantiate_hammer(cocotb.plusargs["ELF_PATH"])
#         self.mem_cfg = hammer.mem_cfg_t(hammer.DramBase, 256 * 1024 * 1024)
#         self.elf_path = cocotb.plusargs["ELF_PATH"]
#         self.logger.info(f"Using ELF file: {self.elf_path}")
#         print(dir(hammer.Hammer))
#         self.logger.info(f"hammer module: {hammer.__file__}")
#         self.logger.info(f"PYTHON: {sys.executable}")
#         self.logger.info(f"LD_LIBRARY_PATH={os.environ.get('LD_LIBRARY_PATH','<unset>')}")
#         self.logger.info(f"PYTHONPATH={os.environ.get('PYTHONPATH','<unset>')}")
#         self.logger.info(f"CWD={os.getcwd()}")
#         # self.hammer_handle = hammer.Hammer(
#         #             "RV32IMC",          # arg0: isa
#         #             "msu",              # arg1: privilege_levels  
#         #             "",                 # arg2: vector_arch
#         #             [0],                # arg3: hart_ids
#         #             [self.mem_cfg],     # arg4: memory_layout (sequence of mem_cfg_t)
#         #             self.elf_path,           # arg5: target_binary
#         #             None                # arg6: start_pc (optional)
#         #         )
       
#         # self.destroy_hammer(self.h)

#     # async def run_phase(self):
#     #     #TODO : Check RVFI Packets
#     #     #TODO : Move the hammer by 4 or 5 units so it points to start_pc
#     #      self.hammer_handle =  await hammer.Hammer(
#     #                             "RV32IMC",          # arg0: isa
#     #                             "msu",              # arg1: privilege_levels  
#     #                             "",                 # arg2: vector_arch
#     #                             [0],                # arg3: hart_ids
#     #                             [self.mem_cfg],     # arg4: memory_layout (sequence of mem_cfg_t)
#     #                             self.elf_path,           # arg5: target_binary
#     #                             None                # arg6: start_pc (optional)
#     #                         )
#     #     # pass

#     def instantiate_hammer(self,elf_path):
#         self.mem_cfg = hammer.mem_cfg_t(hammer.DramBase, 256 * 1024 * 1024)
#         hammer_handle =  hammer.Hammer(
#                                 "RV32IMC",          # arg0: isa
#                                 "msu",              # arg1: privilege_levels  
#                                 "",                 # arg2: vector_arch
#                                 [0],                # arg3: hart_ids
#                                 [self.mem_cfg],     # arg4: memory_layout (sequence of mem_cfg_t)
#                                 elf_path,           # arg5: target_binary
#                                 None                # arg6: start_pc (optional)
#                             )
#         self.logger.info(f"Hammer Instantiated")
#         return hammer_handle
#     def destroy_hammer(self,hammer_handle):
#         del hammer_handle
#         self.logger.info("Hammer instance destroyed")

import os, sys, time
from pathlib import Path

import cocotb
from cocotb.triggers import with_timeout, Timer
from pyuvm import *
import hammer


class scoreboard(uvm_scoreboard):
    def build_phase(self):
        super().build_phase()

        # FIFO must have parent
        self.rvfi_port   = uvm_tlm_analysis_fifo("rvfi_port", self)
        self.rvfi_export = self.rvfi_port.analysis_export

        # Resolve +ELF_PATH=... to absolute early
        elf_raw = cocotb.plusargs.get("ELF_PATH")
        if not elf_raw:
            raise RuntimeError("Pass +ELF_PATH=/abs/path/to/prog.elf to the simulator")

        self.elf_path = str(Path(elf_raw).expanduser().resolve())
        p = Path(self.elf_path)
        if not p.is_file():
            raise FileNotFoundError(f"ELF not found: {self.elf_path}")
        self.logger.info(f"Using ELF: {self.elf_path} (size={p.stat().st_size} bytes)")

        # Log exactly which extension we're loading (must match your example)
        self.logger.info(f"hammer module: {hammer.__file__}")
        self.logger.info(f"PYTHON: {sys.executable}")
        self.logger.info(f"LD_LIBRARY_PATH={os.environ.get('LD_LIBRARY_PATH','<unset>')}")
        self.logger.info(f"PYTHONPATH={os.environ.get('PYTHONPATH','<unset>')}")
        self.logger.info(f"CWD={os.getcwd()}")

        # Start small to rule out allocation stalls; bump later
        self.mem_cfg = hammer.mem_cfg_t(hammer.DramBase, 64 * 1024 * 1024)
        self.hammer_handle = None

    def start_of_simulation_phase(self):
        # Instantiate Hammer in a worker thread with a hard timeout
        self.logger.info("Instantiating Hammer (threaded)…")
        t0 = time.perf_counter()
        try:
            self.hammer_handle = cocotb.external(self._create_hammer_instance())()
            # self.hammer_handle = self._create_hammer_instance()
        except cocotb.result.SimTimeoutError:
            self.logger.error("Hammer ctor timed out (30s). Usually env/path or huge allocation.")
            print(type(self.hammer_handle))

            raise
        except Exception as e:
            self.logger.exception(f"Hammer ctor failed: {e}")
            print(type(self.hammer_handle))
            raise
        print(type(self.hammer_handle))
        self.logger.info(f"Hammer ready in {time.perf_counter()-t0:.3f}s")
        # Smoke test
        # pc = self.hammer_handle.get_PC(0)
        # self.logger.info(f"Initial PC: {pc:#x}")

    async def run_phase(self):
        await Timer(0, 'ns')  # keep the phase cooperative
        print(type(self.hammer_handle))

        # pc = self.hammer_handle.get_PC(0)
        # self.logger.info(f"Initial PC: {pc:#x}")


    def _create_hammer_instance(self):
        # Add ENTER/EXIT breadcrumbs to localize any stall
        print("ENTER Hammer ctor")
        sim = hammer.Hammer(
            "RV32IMC",          # ISA
            "msu",              # privilege levels
            "",                 # vector arch
            [0],                # hart ids
            [self.mem_cfg],     # memory layout
            self.elf_path,      # absolute path
            None                # start_pc
        )
        print("EXIT  Hammer ctor")
        return sim

    def final_phase(self):
        if self.hammer_handle is not None:
            self.logger.info("Destroying Hammer")
            h = self.hammer_handle
            self.hammer_handle = None
            del h
