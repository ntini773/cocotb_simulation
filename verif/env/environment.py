from pyuvm import *
from pathlib import Path
import sys
sys.path.insert(0, str(Path("../agents/rvfi_agent").resolve()))
# print(sys.path)
from agents.rvfi_agent import rvfi_agent
from agents.mem_agent.mem_agent import Mem_agent
from utils.memory_model import MemoryModel

class environment(uvm_env):
    def build_phase(self):
        super().build_phase()

        # Create  rvfi agent
        self.rvfi_agent = rvfi_agent.create("rvfi_agent", self)

        # Create mem agent
        self.mem_agent = Mem_agent.create("mem_agent", self)

        # Create scoreboard
        # self.scoreboard = scoreboard.create("scoreboard", self)

        # Create Memory Instance and register in ConfigDB
        self.mem = MemoryModel()
        ConfigDB().set(None, "*", "memory_model", self.mem)


    
    def connect_phase(self):
        """
            TO DO:
            Connect scoreboard.analysis fifo with spike_agent.monitor
        """

