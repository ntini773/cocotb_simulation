import memory_model
from memory_model import MemoryModel
import unittest

#Testing not Completed
class TestMemoryModel(unittest.TestCase):
    def setUp(self):
        self.mem = MemoryModel()
        self.mem.preload_memory("/home/nitin/cocotb_simulation/top_tracing_simulation/riscv_arithmetic_basic_test_1.o")

  

    def test_read_memory(self):
        self.mem.write(0x100080,510)
        self.mem.dump_memory("/home/nitin/cocotb_simulation/top_tracing_simulation/check_memory.txt")
        # Check if the memory was loaded correctly
        print(f"Memory contents after preload:{self.mem.read(0x100080, 4):#x}")

if __name__ == "__main__":
    unittest.main(verbosity=2)