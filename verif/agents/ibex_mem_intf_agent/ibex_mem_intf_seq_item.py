"""
Ibex Memory Interface Sequence Item

Copyright lowRISC contributors.
Licensed under the Apache License, Version 2.0, see LICENSE for details.
SPDX-License-Identifier: Apache-2.0

Python equivalent of ibex_mem_intf_seq_item.sv
"""

from enum import Enum
from pyuvm import *
import random

class ReadWrite(Enum):
    READ = 0
    WRITE = 1

class IbexMemIntfSeqItem(uvm_sequence_item):
    """
    Memory interface sequence item containing transaction details
    """
    
    def __init__(self, name="ibex_mem_intf_seq_item"):
        super().__init__(name)
        
        # Randomizable fields
        self.addr = 0                          # Address
        self.read_write = ReadWrite.READ       # Read/Write operation
        self.data = 0                          # Data
        self.intg = 0                          # Integrity bits
        self.be = 0                            # Byte enable
        self.gnt_delay = 0                     # Grant delay
        self.req_delay = 0                     # Request delay  
        self.rvalid_delay = 0                  # Response valid delay
        self.error = False                     # Error flag
        
        # Non-randomizable fields
        self.spurious_response = False         # Spurious response flag
        self.misaligned_first = False          # First misaligned access
        self.misaligned_second = False         # Second misaligned access
        self.misaligned_first_saw_error = False # Error in first misaligned access
        self.m_mode_access = False             # Machine mode access
        
        # Constants (could be made configurable)
        self.ADDR_WIDTH = 32
        self.DATA_WIDTH = 32
        self.INTG_WIDTH = 7
    
    def randomize(self):
        """Randomize the randomizable fields"""
        self.addr = random.randint(0, (1 << self.ADDR_WIDTH) - 1)
        self.read_write = random.choice(list(ReadWrite))
        self.data = random.randint(0, (1 << self.DATA_WIDTH) - 1)
        self.intg = random.randint(0, (1 << self.INTG_WIDTH) - 1)
        self.be = random.randint(0, (1 << (self.DATA_WIDTH // 8)) - 1)
        self.gnt_delay = random.randint(0, 15)      # 4-bit field
        self.req_delay = random.randint(0, 15)      # 4-bit field
        self.rvalid_delay = random.randint(0, 63)   # 6-bit field
        self.error = random.choice([True, False])
        return True
    
    def sprint(self):
        """String representation of the sequence item"""
        return (f"IbexMemIntfSeqItem:\n"
                f"  addr: 0x{self.addr:08x}\n"
                f"  read_write: {self.read_write.name}\n"
                f"  data: 0x{self.data:08x}\n"
                f"  intg: 0x{self.intg:02x}\n"
                f"  be: 0x{self.be:02x}\n"
                f"  gnt_delay: {self.gnt_delay}\n"
                f"  req_delay: {self.req_delay}\n"
                f"  rvalid_delay: {self.rvalid_delay}\n"
                f"  error: {self.error}\n"
                f"  spurious_response: {self.spurious_response}\n"
                f"  misaligned_first: {self.misaligned_first}\n"
                f"  misaligned_second: {self.misaligned_second}\n"
                f"  misaligned_first_saw_error: {self.misaligned_first_saw_error}\n"
                f"  m_mode_access: {self.m_mode_access}")
    
    def __str__(self):
        return self.sprint()
