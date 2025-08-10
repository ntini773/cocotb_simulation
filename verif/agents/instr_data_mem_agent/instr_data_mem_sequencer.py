import cocotb
import pyuvm
from pyuvm import *

class Instr_Data_Mem_Sequencer(uvm_sequencer):
    def __init__(self, name, parent):
        super().__init__(name, parent)

    def build_phase(self):
        self.addr_ph_port = uvm_tlm_analysis_fifo("addr_ph_port", self)
