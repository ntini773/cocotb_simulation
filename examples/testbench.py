import cocotb 
import pyuvm 
from cocotb.triggers import Timer
from pyuvm import *

@pyuvm.test()
class test(uvm_test):
    async def run_phase(self):
        self.raise_objection()
        await Timer(100, 'ns')
        self.logger.info("Hi all")
        self.drop_objection()


# async def run_test():
#     await uvm_root().run_test("test")