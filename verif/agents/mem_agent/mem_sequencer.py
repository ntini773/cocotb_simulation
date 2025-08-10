import cocotb
import pyuvm
from pyuvm import *

class mem_sequencer(uvm_sequencer):
    def __init__(self, name, parent):
        super().__init__(name, parent)

    def build_phase(self):
        self.addr_ph_port = uvm_tlm_analysis_fifo("addr_ph_port", self)

    def reset(self):
        self.addr_ph_port.flush()
