import binascii
from elftools.elf.elffile import ELFFile
from typing import List
from intelhex import IntelHex


class MemoryModel:
    def __init__(self):
        # Associative arrays 
        '''
        System Memory Map
        Address	Description
        0x20000	ASCII Out, write ASCII characters here that will get output to the log file
        0x20008	Simulator Halt, write 1 here to halt the simulation
        0x30000	RISC-V timer mtime register
        0x30004	RISC-V timer mtimeh register
        0x30008	RISC-V timer mtimecmp register
        0x3000C	RISC-V timer mtimecmph register
        0x100000- 0x1FFFFF	1 MB memory for instruction and data. Execution starts at 0x100080, exception handler base is 0x100000
        '''
        # Byte addressing
        self.memory={}
        self.ram_base=0x100000
        self.ram_size=1 * 1024 * 1024  # 1MB
        self.ram_end = self.ram_base + self.ram_size - 1

        self.peripherals_registers= {
            0x20000: 0,  # ASCII Out register
            0x20008: 0,  # Simulator Halt register
            0x30000: 0,  # RISC-V timer mtime register (lower)
            0x30004: 0,  # RISC-V timer mtimeh register (upper)
            0x30008: 0,  # RISC-V timer mtimecmp register (lower)
            0x3000C: 0   # RISC-V timer mtimecmph register (upper)
        }
    
    def read(self, addr, size=4):
        """
        Read 'size' bytes from memory at 'addr'.
        Returns the value as an integer.
        """
        if addr in self.peripherals_registers:
            return self.peripherals_registers[addr]
        elif self.ram_base <= addr <= self.ram_end:
            # Check alignment for multi-byte access
            if size > 1 and addr % size != 0:
                raise ValueError(f"Unaligned {size}-byte access at address {addr:#x}")
            
            value = 0
            for i in range(size):
                value |= (self.memory.get(addr + i, 0) << (8 * i))
            return value
        else:
            raise ValueError(f"Address {addr:#x} is out of bounds")

    def write(self, addr, value, size=4):
        """
        Write 'size' bytes to memory at 'addr'.
        addr: 32-bit address (can be hex or int)
        value: integer to write
        size: number of bytes to write (1,2,4)
        """
        # Mask value to appropriate size
        value = value & ((1 << (size * 8)) - 1)

        if addr in self.peripherals_registers:
            self.peripherals_registers[addr]= value
            # Special handling for peripheral writes
            if addr == 0x20000:  # ASCII Out
                print(f"ASCII Output: {chr(value & 0xFF)}")
            elif addr == 0x20008 and value == 1:  # Simulator Halt
                print("Simulator Halt requested")
        elif self.ram_base <= addr <= self.ram_end:
            if size > 1 and addr % size != 0:
                raise ValueError(f"Unaligned {size}-byte access at address {addr:#x}")
    
            for i in range(size):
                self.memory[addr + i] = (value >> (8 * i)) & 0xFF
        else:
            raise ValueError(f"Address {addr:#x} is out of bounds")
    
    # def load_hex(self, filename):
    #     """
    #     Load memory contents from Intel HEX format file.
    #     Intel HEX format:
    #     :LLAAAATT[DD...]CC
    #     LL    = Length of data (1-2 hex digits)
    #     AAAA  = Address (4 hex digits)
    #     TT    = Record type (00=data, 01=EOF, etc)
    #     DD    = Data bytes
    #     CC    = Checksum (Two's complement of sum of all bytes)
    #     """
    #     try:
    #         with open(filename, 'r') as f:
    #             extended_addr = 0
    #             for line_num, line in enumerate(f, 1):
    #                 line = line.strip()
    #                 if not line.startswith(':'):
    #                     continue
                    
    #                 # Verify line length is valid
    #                 if len(line) < 11:  # Minimum length for a valid record
    #                     raise ValueError(f"Line {line_num}: Invalid hex record length")
                    
    #                 # Remove colon and convert to bytes
    #                 try:
    #                     data = binascii.unhexlify(line[1:])
    #                 except binascii.Error:
    #                     raise ValueError(f"Line {line_num}: Invalid hex characters")
                    
    #                 # Verify checksum
    #                 checksum = sum(data) & 0xFF
    #                 if checksum != 0:
    #                     raise ValueError(f"Line {line_num}: Checksum error")
                    
    #                 # Parse record
    #                 length = data[0]
    #                 addr = (data[1] << 8) | data[2]
    #                 rec_type = data[3]
                    
    #                 # Verify data length matches record
    #                 if len(data) != length + 5:  # length + 4 bytes header + checksum
    #                     raise ValueError(f"Line {line_num}: Data length mismatch")
                    
    #                 # Handle different record types
    #                 if rec_type == 0x00:  # Data record
    #                     full_addr = extended_addr + addr
    #                     for i in range(length):
    #                         mem_addr = full_addr + i
    #                         if self.ram_base <= mem_addr <= self.ram_end:
    #                             self.memory[mem_addr] = data[4 + i]
    #                         else:
    #                             print(f"Warning: Address 0x{mem_addr:08x} out of range")
                                
    #                 elif rec_type == 0x02:  # Extended Segment Address
    #                     if length != 2:
    #                         raise ValueError(f"Line {line_num}: Invalid segment address record")
    #                     extended_addr = ((data[4] << 8) | data[5]) << 4
                        
    #                 elif rec_type == 0x04:  # Extended Linear Address
    #                     if length != 2:
    #                         raise ValueError(f"Line {line_num}: Invalid linear address record")
    #                     extended_addr = ((data[4] << 8) | data[5]) << 16
                        
    #                 elif rec_type == 0x01:  # EOF
    #                     if length != 0:
    #                         raise ValueError(f"Line {line_num}: Invalid EOF record")
    #                     break
                        
    #                 else:
    #                     raise ValueError(f"Line {line_num}: Unknown record type: {rec_type}")
                        
    #     except FileNotFoundError:
    #         raise FileNotFoundError(f"HEX file not found: {filename}")
    #     except Exception as e:
    #         raise ValueError(f"Error parsing HEX file: {str(e)}")
    
    def load_hex(self, filename):
        """
        Load memory contents from Intel HEX format file using the intelhex package.
        """
        ih = IntelHex(filename)
        for addr in ih.addresses():
            if self.ram_base <= addr <= self.ram_end:
                self.memory[addr] = ih[addr]

    def load_elf(self, filename):
        """Load memory contents from ELF file"""
        with open(filename, 'rb') as f:
            elf = ELFFile(f)
            for segment in elf.iter_segments():
                if segment.header.p_type == 'PT_LOAD':
                    addr = segment.header.p_paddr
                    data = segment.data()
                    for i, byte in enumerate(data):
                        if self.ram_base <= addr + i <= self.ram_end:
                            self.memory[addr + i] = byte

    def load_vmem(self, filename):
        """Load memory contents from VMEM file"""
        with open(filename, 'r') as f:
            for line in f:
                line = line.strip()
                if line and not line.startswith('//'):
                    addr, value = line.split(':')
                    addr = int(addr, 16)
                    value = int(value, 16)
                    if self.ram_base <= addr <= self.ram_end:
                        self.memory[addr] = value

    def preload_memory(self, file_path):
        """
        Auto-detect file format and load memory contents
        Supports: .elf, .hex, .vmem
        """
        if file_path.endswith('.elf'):
            self.load_elf(file_path)
        elif file_path.endswith('.hex'):
            self.load_hex(file_path)
        elif file_path.endswith('.vmem'):
            self.load_vmem(file_path)
        else:
            raise ValueError(f"Unsupported file format: {file_path}")
    
    def dump_memory(self, filename=None, start_addr=None, size=None):
        """
        Dump memory contents to a file or return as string
        Args:
            filename: Optional file to write to
            start_addr: Starting address (defaults to ram_base)
            size: Number of bytes to dump (defaults to entire RAM)
        """
        start_addr = start_addr if start_addr is not None else self.ram_base
        end_addr = start_addr + (size if size is not None else self.ram_size)
        
        output = []
        output.append(f"Memory Dump (0x{start_addr:08x} to 0x{end_addr:08x}):")
        
        for addr in range(start_addr, end_addr, 16):
            # Create hex dump line
            hex_values = []
            ascii_values = []
            
            for offset in range(16):
                if addr + offset <= self.ram_end:
                    value = self.memory.get(addr + offset, 0)
                    hex_values.append(f"{value:02x}")
                    ascii_values.append(chr(value) if 32 <= value <= 126 else '.')
            
            # Format the line
            hex_str = " ".join(hex_values)
            ascii_str = "".join(ascii_values)
            output.append(f"0x{addr:08x}: {hex_str:<47s} |{ascii_str}|")
        
        dump_content = "\n".join(output)
        
        if filename:
            with open(filename, 'w') as f:
                f.write(dump_content)
        
        return dump_content



