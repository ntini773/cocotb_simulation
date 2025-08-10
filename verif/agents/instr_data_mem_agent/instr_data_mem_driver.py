import cocotb 
import pyuvm
from pyuvm import *

class Instr_Data_Mem_Driver(uvm_driver):
    def __init__(self, name, parent):
        super().__init__(name, parent)
    
    def build_phase(self):
        self.intf = ConfigDB().get(self, "*", "instr_data_mem_if")

    async def run_phase(self):
        self.reset_signals()



    








    def reset_signals(self):
        # Instruction Mem
        self.intf.instr_rvalid_i.value = 0
        self.intf.instr_gnt_i.value = 0
        self.intf.instr_rdata_i.value = 0
        self.intf.instr_rdata_intg_i.value = 0
        self.intf.instr_err_i.value = 0

        # Data Mem
        self.intf.data_rvalid_i.value = 0
        self.intf.data_gnt_i.value = 0
        self.intf.data_rdata_i.value = 0
        self.intf.data_rdata_intg_i.value = 0
        self.intf.data_err_i.value = 0