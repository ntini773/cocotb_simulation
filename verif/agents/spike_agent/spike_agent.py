
# Spike agent has the monitors to track the RVFI interface and send to Scoreboard
from pyuvm import *
from cocotb.triggers import Timer,Combine,RisingEdge,FallingEdge
from spike_monitor import spike_monitor

class spike_agent(uvm_agent):
    def build_phase(self):
        super().build_phase()
        self.monitor=spike_monitor.create("spike_monitor", self)
    