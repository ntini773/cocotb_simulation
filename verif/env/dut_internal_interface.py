import cocotb
import pyuvm

class Dut_Internal_Interface(metaclass=pyuvm.Singleton):
    def __init__(self):
        self.dut = cocotb.top
        self.clk = cocotb.top.clk_i
        self.rst = cocotb.top.rst_ni

        # Useful Internal Signals (all are not included)
