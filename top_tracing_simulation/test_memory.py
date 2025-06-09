import memory_model
from memory_model import MemoryModel
import unittest

#Testing not Completed
class TestMemoryModel(unittest.TestCase):
    def setUp(self):
        self.mem = MemoryModel()
        self.mem.load_hex("test_program.hex")

    def test_exception_handler_region(self):
        """Test memory contents at exception handler region (0x100000)"""
        print("\nTesting exception handler region:")
        try:
            val = self.mem.read(0x100000, size=4)
            self.assertEqual(val, 0x11223344, f"Expected 0x11223344 at 0x100000, got 0x{val:08x}")
            print(f"✓ 0x100000: 0x{val:08x} [PASS]")

            val = self.mem.read(0x100004, size=4)
            self.assertEqual(val, 0xAABBCCDD, f"Expected 0xAABBCCDD at 0x100004, got 0x{val:08x}")
            print(f"✓ 0x100004: 0x{val:08x} [PASS]")
        except AssertionError as e:
            print(f"✗ {str(e)} [FAIL]")
            raise

    def test_entry_point(self):
        """Test memory contents at program entry point (0x100080)"""
        print("\nTesting program entry point:")
        try:
            val = self.mem.read(0x100080, size=4)
            self.assertEqual(val, 0xDEADBEEF, f"Expected 0xDEADBEEF at 0x100080, got 0x{val:08x}")
            print(f"✓ 0x100080: 0x{val:08x} [PASS]")

            val = self.mem.read(0x100084, size=4)
            self.assertEqual(val, 0xCAFEBABE, f"Expected 0xCAFEBABE at 0x100084, got 0x{val:08x}")
            print(f"✓ 0x100084: 0x{val:08x} [PASS]")
        except AssertionError as e:
            print(f"✗ {str(e)} [FAIL]")
            raise

if __name__ == "__main__":
    unittest.main(verbosity=2)