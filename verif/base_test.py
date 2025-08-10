
import cocotb
from pyuvm import *

print(dir(cocotb.top))

@cocotb.test()
async def base_test(dut):
    """Base test for PyUVM"""
    await cocotb.start(uvm_root().run_test("BaseTest"))


class BaseTest(uvm_test):
    def __init__(self, name, parent):
        print(f"Initializing BaseTest:")

    def build_phase(self):
        print(f"Building BaseTest:")
        pass
    def run_phase(self):
        print(f"Running BaseTest:")
        pass