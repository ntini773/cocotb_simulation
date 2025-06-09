# sim/memory_model.py
import pyelftools.elf.elffile as elftools
from elftools.elf.elffile import ELFFile
class SystemMemory:
    def __init__(self):
        # 1MB memory from 0x100000 to 0x1FFFFF
        self.ram = bytearray(1 * 1024 * 1024)
        self.ascii_log = []
        self.running = True
        self.mtime = 0
        self.mtimecmp = 0

    def tick(self):
        self.mtime += 1

    def read_word(self, addr):
        if 0x100000 <= addr <= 0x1FFFFC:
            offset = addr - 0x100000
            return int.from_bytes(self.ram[offset:offset + 4], 'little')

        elif addr == 0x30000:
            return self.mtime & 0xFFFFFFFF
        elif addr == 0x30004:
            return (self.mtime >> 32) & 0xFFFFFFFF
        elif addr == 0x30008:
            return self.mtimecmp & 0xFFFFFFFF
        elif addr == 0x3000C:
            return (self.mtimecmp >> 32) & 0xFFFFFFFF

        else:
            return 0x0  # For unmapped reads

    def write_word(self, addr, data):
        if 0x100000 <= addr <= 0x1FFFFC:
            offset = addr - 0x100000
            self.ram[offset:offset + 4] = data.to_bytes(4, 'little')

        elif addr == 0x20000:
            self.ascii_log.append(data & 0xFF)

        elif addr == 0x20008:
            if data == 1:
                self.running = False

        elif addr == 0x30008:
            self.mtimecmp = (self.mtimecmp & 0xFFFFFFFF00000000) | (data & 0xFFFFFFFF)
        elif addr == 0x3000C:
            self.mtimecmp = (self.mtimecmp & 0xFFFFFFFF) | ((data & 0xFFFFFFFF) << 32)

    def read_bytes(self, addr, size):
        if 0x100000 <= addr < 0x100000 + len(self.ram):
            offset = addr - 0x100000
            return self.ram[offset:offset + size]
        return bytes([0] * size)

    def load_elf(self, path):
        from elftools.elf.elffile import ELFFile

        with open(path, 'rb') as f:
            elf = ELFFile(f)
            for seg in elf.iter_segments():
                if seg['p_type'] == 'PT_LOAD':
                    addr = seg['p_paddr']
                    data = seg.data()
                    if 0x100000 <= addr < 0x200000:
                        offset = addr - 0x100000
                        self.ram[offset:offset + len(data)] = data
