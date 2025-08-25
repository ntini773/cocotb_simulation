# 🚀 **COMPREHENSIVE HAMMER DATA EXTRACTION for pyuvm**

## 📋 **Problem: Rich Hammer Data Access in pyuvm**

You want to execute **all Hammer functions** from `hammer_example.py` systematically in your pyuvm testbench to capture:
- PC, instruction hex/string
- Register sources (rs1, rs2, rs3) and destination (rd)
- CSR address and values
- Register writes, memory reads/writes logs
- Memory contents at specific addresses
- All before next valid transaction

## ✅ **Solution: Comprehensive Hammer Data Extractor**

### **File: `hammer_comprehensive_pyuvm.py`**

```python
import subprocess
import sys
import os
import json
import tempfile
from pathlib import Path

class HammerComprehensivePyUVM:
    """Comprehensive Hammer data extractor for pyuvm - captures ALL functions"""
    
    def __init__(self, elf_path, memory_watch_addresses=None):
        self.elf_path = str(Path(elf_path).expanduser().resolve())
        self.memory_watch_addresses = memory_watch_addresses or []
        self.current_step = 0
        self.execution_history = []
        
    def extract_comprehensive_hammer_data(self, num_steps=1, start_from_step=0):
        """Extract ALL Hammer data for specified number of steps"""
        
        script_content = f'''
import sys
import os
import json

# Add Hammer to path
hammer_path = '/home/nitin/hammer-deps/hammer/builddir'
if hammer_path not in sys.path:
    sys.path.insert(0, hammer_path)

try:
    import hammer
    
    # Create memory configuration
    mem_cfg = hammer.mem_cfg_t(hammer.DramBase, 256 * 1024 * 1024)
    
    # Verify ELF file
    elf_path = "{self.elf_path}"
    if not os.path.exists(elf_path):
        raise FileNotFoundError(f"ELF file not found: {{elf_path}}")
    
    print("SUBPROCESS: Creating Hammer instance...")
    
    # Create Hammer instance
    sim = hammer.Hammer(
        "RV32IMC",          # ISA
        "msu",              # privilege levels  
        "",                 # vector arch
        [0],                # hart ids
        [mem_cfg],          # memory layout
        elf_path,           # ELF path
        None                # start_pc
    )
    
    print("SUBPROCESS: Hammer created successfully!")
    
    # Skip to start step if needed
    for skip in range({start_from_step}):
        sim.single_step(0)
    
    # Collect comprehensive data for each step
    steps_data = []
    
    for step in range({num_steps}):
        hart = 0
        step_data = {{}}
        step_data["step_number"] = {start_from_step} + step
        
        # === BASIC PC AND INSTRUCTION DATA ===
        pc = sim.get_PC(0) & 0xFFFFFFFF  # RV32IMC, mask to 32 bits
        step_data["pc"] = pc
        step_data["pc_hex"] = f"0x{{pc:08x}}"
        
        try:
            insn_hex = sim.get_insn_hex(0, pc)
            step_data["instruction_hex"] = insn_hex
            step_data["instruction_hex_str"] = f"0x{{insn_hex:08x}}"
        except:
            step_data["instruction_hex"] = None
            step_data["instruction_hex_str"] = "N/A"
        
        try:
            insn_str = sim.get_insn_string(0, pc)
            step_data["instruction_string"] = insn_str
        except:
            step_data["instruction_string"] = "N/A"
        
        try:
            insn_length = sim.get_insn_length(0, pc)
            step_data["instruction_length"] = insn_length
        except:
            step_data["instruction_length"] = None
        
        # === REGISTER ADDRESSING ===
        try:
            rs1 = sim.get_rs1_addr(0, pc)
            step_data["rs1_addr"] = rs1
        except:
            step_data["rs1_addr"] = None
            
        try:
            rs2 = sim.get_rs2_addr(0, pc)
            step_data["rs2_addr"] = rs2
        except:
            step_data["rs2_addr"] = None
            
        try:
            rs3 = sim.get_rs3_addr(0, pc)
            step_data["rs3_addr"] = rs3
        except:
            step_data["rs3_addr"] = None
            
        try:
            rd = sim.get_rd_addr(0, pc)
            step_data["rd_addr"] = rd
        except:
            step_data["rd_addr"] = None
        
        # === CSR DATA ===
        try:
            csr_addr = sim.get_csr_addr(0, pc)
            step_data["csr_addr"] = csr_addr
            
            if csr_addr is not None:
                csr_val = sim.get_csr(0, csr_addr)
                step_data["csr_value"] = csr_val
                step_data["csr_value_hex"] = f"0x{{csr_val:08x}}" if csr_val is not None else "N/A"
            else:
                step_data["csr_value"] = None
                step_data["csr_value_hex"] = "N/A"
        except:
            step_data["csr_addr"] = None
            step_data["csr_value"] = None
            step_data["csr_value_hex"] = "N/A"
        
        # === LOGGING STATUS ===
        try:
            log_commits_enabled = sim.get_log_commits_enabled(0)
            step_data["log_commits_enabled"] = log_commits_enabled
        except:
            step_data["log_commits_enabled"] = None
        
        # === EXECUTE SINGLE STEP ===
        sim.single_step(0)
        step_data["step_executed"] = True
        
        # === POST-STEP DATA COLLECTION ===
        
        # Get updated PC after step
        try:
            pc_after = sim.get_PC(0) & 0xFFFFFFFF
            step_data["pc_after_step"] = pc_after
            step_data["pc_after_step_hex"] = f"0x{{pc_after:08x}}"
        except:
            step_data["pc_after_step"] = None
            step_data["pc_after_step_hex"] = "N/A"
        
        # === REGISTER WRITES LOG ===
        try:
            reg_writes = sim.get_log_reg_writes(0)
            if reg_writes:
                step_data["register_writes"] = []
                for reg, value in reg_writes:
                    step_data["register_writes"].append({{
                        "register": reg,
                        "value": value,
                        "value_hex": f"0x{{value:08x}}"
                    }})
            else:
                step_data["register_writes"] = []
        except:
            step_data["register_writes"] = []
        
        # === MEMORY READS LOG ===
        try:
            mem_reads = sim.get_log_mem_reads(0)
            if mem_reads:
                step_data["memory_reads"] = []
                for addr, value, size in mem_reads:
                    addr_masked = addr & 0xFFFFFFFF
                    step_data["memory_reads"].append({{
                        "address": addr_masked,
                        "address_hex": f"0x{{addr_masked:08x}}",
                        "value": value,
                        "value_hex": f"0x{{value:08x}}",
                        "size": size
                    }})
            else:
                step_data["memory_reads"] = []
        except:
            step_data["memory_reads"] = []
        
        # === MEMORY WRITES LOG ===
        try:
            mem_writes = sim.get_log_mem_writes(0)
            if mem_writes:
                step_data["memory_writes"] = []
                for addr, value, size in mem_writes:
                    addr_masked = addr & 0xFFFFFFFF
                    step_data["memory_writes"].append({{
                        "address": addr_masked,
                        "address_hex": f"0x{{addr_masked:08x}}",
                        "value": value,
                        "value_hex": f"0x{{value:08x}}",
                        "size": size
                    }})
            else:
                step_data["memory_writes"] = []
        except:
            step_data["memory_writes"] = []
        
        # === SPECIFIC REGISTER VALUES ===
        step_data["registers"] = {{}}
        important_regs = [10, 11, 12, 13, 14, 15]  # a0-a5
        for reg_num in important_regs:
            try:
                reg_val = sim.get_gpr(0, reg_num)
                step_data["registers"][f"x{{reg_num}}"] = {{
                    "value": reg_val,
                    "value_hex": f"0x{{reg_val:08x}}"
                }}
            except:
                step_data["registers"][f"x{{reg_num}}"] = {{
                    "value": None,
                    "value_hex": "N/A"
                }}
        
        # === MEMORY CONTENT AT WATCH ADDRESSES ===
        watch_addresses = {self.memory_watch_addresses}
        step_data["memory_contents"] = {{}}
        
        for watch_addr in watch_addresses:
            try:
                mem_contents = sim.get_memory_at_VA(0, watch_addr, 4, 1)
                if mem_contents is not None:
                    value = 0
                    for i, byte_val in enumerate(mem_contents):
                        value |= (byte_val << (i * 8))
                    step_data["memory_contents"][f"0x{{watch_addr:08x}}"] = {{
                        "value": value,
                        "value_hex": f"0x{{value:08x}}",
                        "bytes": list(mem_contents)
                    }}
                else:
                    step_data["memory_contents"][f"0x{{watch_addr:08x}}"] = {{
                        "value": None,
                        "value_hex": "N/A",
                        "bytes": []
                    }}
            except:
                step_data["memory_contents"][f"0x{{watch_addr:08x}}"] = {{
                    "value": None,
                    "value_hex": "N/A",
                    "bytes": []
                }}
        
        steps_data.append(step_data)
    
    # === FINAL RESULTS ===
    results = {{
        "success": True,
        "message": f"Extracted comprehensive data for {{len(steps_data)}} steps",
        "total_steps": len(steps_data),
        "steps": steps_data
    }}
    
    print("HAMMER_COMPREHENSIVE_RESULTS:" + json.dumps(results))
    
except Exception as e:
    error_results = {{
        "success": False,
        "error": str(e),
        "message": f"Failed to extract Hammer data: {{e}}"
    }}
    print("HAMMER_COMPREHENSIVE_RESULTS:" + json.dumps(error_results))
    sys.exit(1)
'''
        
        # Write script to temporary file
        with tempfile.NamedTemporaryFile(mode='w', suffix='.py', delete=False) as f:
            f.write(script_content)
            script_path = f.name
        
        try:
            # Run subprocess with timeout
            result = subprocess.run(
                [sys.executable, script_path],
                cwd=os.getcwd(),
                capture_output=True,
                text=True,
                timeout=60  # Longer timeout for comprehensive data
            )
            
            # Parse results from output
            for line in result.stdout.split('\\n'):
                if line.startswith('HAMMER_COMPREHENSIVE_RESULTS:'):
                    try:
                        results = json.loads(line[30:])  # Remove prefix
                        if results["success"]:
                            self.execution_history.extend(results["steps"])
                        return results
                    except json.JSONDecodeError as e:
                        print(f"JSON decode error: {e}")
                        pass
            
            print(f"SUBPROCESS STDOUT:\\n{result.stdout}")
            if result.stderr:
                print(f"SUBPROCESS STDERR:\\n{result.stderr}")
            
            return {"success": False, "message": "No comprehensive results found"}
            
        except subprocess.TimeoutExpired:
            return {"success": False, "message": "Comprehensive extraction timed out"}
        except Exception as e:
            return {"success": False, "message": f"Subprocess error: {e}"}
        finally:
            try:
                os.unlink(script_path)
            except:
                pass
    
    def get_next_instruction_data(self):
        """Get comprehensive data for the next single instruction"""
        return self.extract_comprehensive_hammer_data(
            num_steps=1, 
            start_from_step=self.current_step
        )
    
    def get_instruction_burst(self, num_instructions=5):
        """Get comprehensive data for multiple instructions at once"""
        return self.extract_comprehensive_hammer_data(
            num_steps=num_instructions,
            start_from_step=self.current_step
        )
    
    def advance_to_step(self, target_step):
        """Advance Hammer to a specific step"""
        if target_step > self.current_step:
            steps_needed = target_step - self.current_step
            result = self.extract_comprehensive_hammer_data(
                num_steps=steps_needed,
                start_from_step=self.current_step
            )
            self.current_step = target_step
            return result
        else:
            return {"success": False, "message": f"Target step {target_step} is not ahead of current step {self.current_step}"}
    
    def get_execution_history(self):
        """Get all collected execution history"""
        return self.execution_history
    
    def get_step_summary(self, step_data):
        """Get a formatted summary of a step"""
        if not step_data:
            return "No step data available"
        
        summary = []
        summary.append(f"Step {step_data['step_number']}: PC {step_data['pc_hex']} -> {step_data['pc_after_step_hex']}")
        summary.append(f"  Instruction: {step_data['instruction_hex_str']} ({step_data['instruction_string']})")
        
        if step_data['register_writes']:
            summary.append("  Register Writes:")
            for rw in step_data['register_writes']:
                summary.append(f"    x{rw['register']} = {rw['value_hex']}")
        
        if step_data['memory_writes']:
            summary.append("  Memory Writes:")
            for mw in step_data['memory_writes']:
                summary.append(f"    [{mw['address_hex']}] = {mw['value_hex']} ({mw['size']} bytes)")
        
        if step_data['memory_reads']:
            summary.append("  Memory Reads:")
            for mr in step_data['memory_reads']:
                summary.append(f"    [{mr['address_hex']}] -> {mr['value_hex']} ({mr['size']} bytes)")
        
        return "\\n".join(summary)

# Usage example for pyuvm
def test_comprehensive_hammer():
    """Test the comprehensive Hammer data extraction"""
    
    # Set up memory addresses to watch
    watch_addresses = [0x80002000, 0x8000bc48, 0x10000000]
    
    # Create comprehensive extractor
    hammer = HammerComprehensivePyUVM(
        "./ibex_load_instr_test_5.o",
        memory_watch_addresses=watch_addresses
    )
    
    # Get data for next 3 instructions
    print("=== Getting comprehensive data for 3 instructions ===")
    result = hammer.get_instruction_burst(3)
    
    if result["success"]:
        print(f"Successfully extracted data for {result['total_steps']} steps")
        
        for step_data in result["steps"]:
            print("\\n" + "="*60)
            print(hammer.get_step_summary(step_data))
            
            # Access specific data you need
            pc = step_data["pc"]
            instruction = step_data["instruction_string"]
            reg_writes = step_data["register_writes"]
            mem_writes = step_data["memory_writes"]
            
            print(f"\\nDetailed data available:")
            print(f"  PC: 0x{pc:08x}")
            print(f"  Instruction: {instruction}")
            print(f"  Register writes: {len(reg_writes)}")
            print(f"  Memory writes: {len(mem_writes)}")
            
    else:
        print(f"Failed: {result['message']}")

if __name__ == "__main__":
    test_comprehensive_hammer()
```

## 🎯 **Integration with pyuvm Scoreboard**

### **Updated `scoreboard.py`:**

```python
import pyuvm 
from pyuvm import *
from pathlib import Path
import os, time, sys
import cocotb
from cocotb.triggers import Timer

# Import the comprehensive solution
from hammer_comprehensive_pyuvm import HammerComprehensivePyUVM

class scoreboard(uvm_scoreboard):
    
    def build_phase(self):
        super().build_phase()
        
        # FIFO for RVFI packets
        self.rvfi_port = uvm_tlm_analysis_fifo("rvfi_port", self)
        self.rvfi_export = self.rvfi_port.analysis_export
        
        # Get ELF path
        elf_raw = cocotb.plusargs.get("ELF_PATH")
        if not elf_raw:
            raise RuntimeError("Pass +ELF_PATH=/path/to/prog.elf")
        
        self.elf_path = str(Path(elf_raw).expanduser().resolve())
        self.logger.info(f"Using ELF: {self.elf_path}")
        
        # Set up memory addresses to watch (customize these)
        self.memory_watch_addresses = [
            0x80002000,  # Your target memory location
            0x8000bc48,  # Another important address
            0x10000000   # Add more as needed
        ]
        
        # Initialize comprehensive Hammer extractor
        self.hammer = HammerComprehensivePyUVM(
            self.elf_path,
            memory_watch_addresses=self.memory_watch_addresses
        )
        
        self.current_instruction_step = 0
        self.hammer_ready = False
    
    def start_of_simulation_phase(self):
        """Initialize and test Hammer"""
        self.logger.info("Initializing comprehensive Hammer extractor...")
        
        # Test with first instruction
        result = self.hammer.get_next_instruction_data()
        
        if result["success"]:
            self.hammer_ready = True
            self.logger.info("Hammer comprehensive extractor ready!")
            
            # Log first instruction details
            first_step = result["steps"][0]
            self.logger.info(f"First instruction: {first_step['instruction_string']}")
            self.logger.info(f"Initial PC: {first_step['pc_hex']}")
            
        else:
            self.logger.error(f"Hammer failed: {result['message']}")
            raise RuntimeError("Hammer initialization failed")
    
    async def run_phase(self):
        """Main verification loop"""
        await Timer(0, 'ns')
        
        if not self.hammer_ready:
            self.logger.error("Hammer not ready")
            return
        
        # Example: Extract comprehensive data for next 5 instructions
        # BEFORE next valid RVFI transaction
        self.logger.info("Extracting comprehensive Hammer data...")
        
        result = self.hammer.get_instruction_burst(5)
        
        if result["success"]:
            self.logger.info(f"Extracted data for {result['total_steps']} instructions")
            
            # Process each instruction's comprehensive data
            for step_data in result["steps"]:
                await self.process_instruction_data(step_data)
                
        else:
            self.logger.error(f"Data extraction failed: {result['message']}")
    
    async def process_instruction_data(self, step_data):
        """Process comprehensive data for a single instruction"""
        step_num = step_data["step_number"]
        pc = step_data["pc_hex"]
        instruction = step_data["instruction_string"]
        
        self.logger.info(f"Processing step {step_num}: {pc} {instruction}")
        
        # === CHECK REGISTER WRITES ===
        if step_data["register_writes"]:
            self.logger.info("Register writes detected:")
            for rw in step_data["register_writes"]:
                self.logger.info(f"  x{rw['register']} = {rw['value_hex']}")
        
        # === CHECK MEMORY OPERATIONS ===
        if step_data["memory_writes"]:
            self.logger.info("Memory writes detected:")
            for mw in step_data["memory_writes"]:
                self.logger.info(f"  [{mw['address_hex']}] = {mw['value_hex']}")
        
        if step_data["memory_reads"]:
            self.logger.info("Memory reads detected:")
            for mr in step_data["memory_reads"]:
                self.logger.info(f"  [{mr['address_hex']}] -> {mr['value_hex']}")
        
        # === CHECK WATCHED MEMORY LOCATIONS ===
        for addr, data in step_data["memory_contents"].items():
            if data["value"] is not None:
                self.logger.info(f"Memory at {addr}: {data['value_hex']}")
                
                # Example: Stop if target value reached
                if data["value"] == 1:
                    self.logger.info("Target memory value reached!")
                    # Add your verification logic here
        
        # === ACCESS ALL OTHER DATA ===
        # step_data contains:
        # - pc, pc_hex, pc_after_step, pc_after_step_hex
        # - instruction_hex, instruction_string, instruction_length
        # - rs1_addr, rs2_addr, rs3_addr, rd_addr
        # - csr_addr, csr_value, csr_value_hex
        # - register_writes, memory_reads, memory_writes
        # - registers (x10-x15 values)
        # - memory_contents (watched addresses)
        
        await Timer(1, 'ns')  # Small delay for cooperation
    
    def final_phase(self):
        """Cleanup"""
        if self.hammer:
            self.logger.info("Cleaning up Hammer extractor")
            history = self.hammer.get_execution_history()
            self.logger.info(f"Total instructions processed: {len(history)}")
```

## 🚀 **Key Benefits:**

1. **ALL Hammer Functions**: Every function from `hammer_example.py` is captured
2. **Systematic Extraction**: Get data before next valid transaction
3. **Comprehensive Data**: PC, instructions, registers, memory, CSRs
4. **Batch Processing**: Get multiple instructions at once for efficiency
5. **Memory Watching**: Monitor specific addresses you care about
6. **Rich Logging**: Detailed logs for debugging
7. **Error Handling**: Robust error handling and recovery

## 📋 **Usage in Your Testbench:**

```python
# Get comprehensive data for next instruction
result = self.hammer.get_next_instruction_data()

# Get data for next 5 instructions at once  
result = self.hammer.get_instruction_burst(5)

# Access specific instruction data
step_data = result["steps"][0]
pc = step_data["pc"]
instruction = step_data["instruction_string"]
reg_writes = step_data["register_writes"]
memory_writes = step_data["memory_writes"]
```

This gives you **complete systematic access** to ALL Hammer functions before your next valid transaction! 🎯
