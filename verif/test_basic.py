#!/usr/bin/env python3

"""
Basic PyUVM test for Ibex processor verification
This test verifies the basic PyUVM testbench infrastructure
"""

import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.handle import SimHandleBase
from cocotb.clock import Clock
from pyuvm import *
import sys
from pathlib import Path

# Add paths for our modules
sys.path.insert(0, str(Path("./env").resolve()))
sys.path.insert(0, str(Path("./agents/spike_agent").resolve()))
sys.path.insert(0, str(Path("./utils").resolve()))

# Import our PyUVM components
from environment import environment


class BasicTest(uvm_test):
    """
    Basic test to verify PyUVM environment setup and basic functionality
    """
    def __init__(self,dut:SimHandleBase):
        self.dut = dut
    def build_phase(self):
        """Build phase - create environment"""
        super().build_phase()
        self.env = environment.create("env", self)
        
        # Set the DUT in config DB for environment
        ConfigDB().set(self, "*", "dut", self.dut)
        
    def end_of_elaboration_phase(self):
        """Print testbench hierarchy"""
        self.set_logging_level_hier(CRITICAL)
        
    async def run_phase(self):
        """Run phase - execute the test"""
        self.raise_objection()
        
        try:
            # Print test start message
            self.logger.info("=" * 60)
            self.logger.info("Starting BasicTest for PyUVM infrastructure")
            self.logger.info("=" * 60)
            
            # Wait for some time to let the simulation run
            await Timer(1000, units="ns")
            
            # Check if RVFI interface is accessible
            if hasattr(self.dut, 'rvfi_valid'):
                self.logger.info("RVFI interface detected")
                # Wait for a valid RVFI transaction
                for i in range(10):
                    await RisingEdge(self.dut.clk_i)
                    if self.dut.rvfi_valid.value == 1:
                        self.logger.info(f"RVFI valid detected at cycle {i}")
                        self.logger.info(f"RVFI PC: 0x{self.dut.rvfi_pc_wdata.value:08x}")
                        self.logger.info(f"RVFI Instruction: 0x{self.dut.rvfi_insn.value:08x}")
                        break
            else:
                self.logger.warning("RVFI interface not found")
                
            # Test completed successfully
            self.logger.info("=" * 60)
            self.logger.info("BasicTest completed successfully!")
            self.logger.info("PyUVM infrastructure is working correctly")
            self.logger.info("=" * 60)
            
        except Exception as e:
            self.logger.error(f"Test failed with exception: {e}")
            raise
            
        finally:
            self.drop_objection()
@cocotb.test()
async def test_pyuvm_basic(dut):
    """
    Main cocotb test function that starts the PyUVM test
    """
    
    # Start the clock
    clock = Clock(dut.clk_i, 10, units="ns")  # 100MHz clock
    cocotb.start_soon(clock.start())
    
    # Reset the DUT
    dut.rst_ni.value = 0
    await Timer(100, units="ns")
    dut.rst_ni.value = 1
    await Timer(50, units="ns")
    
    # Initialize and run the PyUVM test
    await uvm_root().run_test("BasicTest")
    # await BasicTest(dut).run_test()

if __name__ == "__main__":
    # For standalone testing
    print("Run this test with: make")
    print("or: cocotb-config --version && make")
