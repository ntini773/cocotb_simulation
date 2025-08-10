import cocotb
import pyuvm
from pyuvm import *

from .mem_monitor import mem_monitor
from .mem_driver import mem_driver
from .mem_sequencer import mem_sequencer

class Mem_agent(uvm_agent):

    def build_phase(self):
        self.driver = mem_driver.create("driver", self)
        self.monitor = mem_monitor.create("monitor", self)
        self.sequencer = mem_sequencer.create("sequencer", self)

    def connect_phase(self):
        # TO DO: 
        # Connect monitor.analysis_port to sequencer.analysis_fifo.export
        # Connect sequencer port to driver port
        # Connect driver analysis port to monitor.analysis_port
        self.monitor.addr_ph_port.connect(self.sequencer.addr_ph_port.analysis_export)
        self.driver.seq_item_port.connect(self.sequencer.seq_item_export)
        