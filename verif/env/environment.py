from pyuvm import *
from pathlib import Path
import sys
sys.path.insert(0, str(Path("../agents/spike_agent").resolve()))
# print(sys.path)
from agents.spike_agent import spike_agent
from utils.memory_model import MemoryModel

class environment(uvm_env):
    def build_phase(self):
        super().build_phase()
        
        # Create  spike agent
        self.spike_agent = spike_agent.create("spike_agent", self)

        # Create instr_data_mem agent
        # self.instr_data_mem_agent = instr_data_mem_agent.create("instr_data_mem_agent", self)

        # Create scoreboard
        # self.scoreboard = scoreboard.create("scoreboard", self)

        # Create Memory Instance and register in ConfigDB
        self.mem = MemoryModel()
        ConfigDB().set(self, "*", "memory_model", self.mem)


    
    def connect_phase(self):
        """
            TO DO:
            Connect scoreboard.analysis fifo with spike_agent.monitor
        """

