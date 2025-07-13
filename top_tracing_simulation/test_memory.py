import memory_model
from memory_model import MemoryModel
import unittest

class TestMemoryModel(unittest.TestCase):
    def setUp(self):
        self.mem = MemoryModel()
        self.mem.preload_memory("./riscv_arithmetic_basic_test_0.o")

  

    def test_read_memory(self):
        # self.mem.write(0x100080,5)
        self.mem.dump_memory("check_memory.txt")
        # Check if the memory was loaded correctly
        # print(f"Memory contents after preload:{self.mem.read(0x100080, 4):#x}")

if __name__ == "__main__":
    unittest.main(verbosity=2)