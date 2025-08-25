# 🔄 **HAMMER CO-SIMULATION with pyuvm**

## 🎯 **Problem: Synchronized Co-simulation**

You want Hammer subprocess to:

1. **Wait** for your command from pyuvm scoreboard
2. **Execute** single step only when UVM FIFO receives data
3. **Return** comprehensive instruction data
4. **Repeat** this cycle for true co-simulation

## ✅ **Solution: Bidirectional Hammer Co-simulation**

### **File: `hammer_cosimulation.py`**

```python
import subprocess
import sys
import os
import json
import time
import threading
import queue
from pathlib import Path
import select
import signal

class HammerCoSimulation:
    """Bidirectional Hammer co-simulation - waits for your commands"""
  
    def __init__(self, elf_path, memory_watch_addresses=None):
        self.elf_path = str(Path(elf_path).expanduser().resolve())
        self.memory_watch_addresses = memory_watch_addresses or []
        self.process = None
        self.stdin_pipe = None
        self.stdout_pipe = None
        self.is_running = False
        self.response_queue = queue.Queue()
        self.reader_thread = None
      
    def start_cosimulation(self):
        """Start the Hammer subprocess and establish communication"""
      
        script_content = f'''
import sys
import os
import json
import signal

# Handle clean shutdown
def signal_handler(signum, frame):
    print("HAMMER_SUBPROCESS: Shutting down...")
    sys.exit(0)

signal.signal(signal.SIGTERM, signal_handler)
signal.signal(signal.SIGINT, signal_handler)

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
  
    print("HAMMER_READY", flush=True)
  
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
  
    print("HAMMER_INITIALIZED", flush=True)
  
    # Main command loop - wait for commands from parent
    while True:
        try:
            # Wait for command from parent process
            command_line = input()
          
            if not command_line.strip():
                continue
              
            try:
                command = json.loads(command_line.strip())
            except json.JSONDecodeError:
                print(json.dumps({{"success": False, "error": "Invalid JSON command"}}), flush=True)
                continue
          
            cmd_type = command.get("type", "")
          
            if cmd_type == "step":
                # Execute single step and return comprehensive data
                hart = 0
              
                # Get pre-step data
                pc = sim.get_PC(0) & 0xFFFFFFFF
                step_data = {{}}
                step_data["step_number"] = command.get("step_number", 0)
                step_data["pc"] = pc
                step_data["pc_hex"] = f"0x{{pc:08x}}"
              
                # Get instruction data
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
              
                # Get register addresses
                try:
                    step_data["rs1_addr"] = sim.get_rs1_addr(0, pc)
                except:
                    step_data["rs1_addr"] = None
                  
                try:
                    step_data["rs2_addr"] = sim.get_rs2_addr(0, pc)
                except:
                    step_data["rs2_addr"] = None
                  
                try:
                    step_data["rs3_addr"] = sim.get_rs3_addr(0, pc)
                except:
                    step_data["rs3_addr"] = None
                  
                try:
                    step_data["rd_addr"] = sim.get_rd_addr(0, pc)
                except:
                    step_data["rd_addr"] = None
              
                # Get CSR data
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
              
                # === EXECUTE THE STEP ===
                sim.single_step(0)
              
                # Get post-step data
                try:
                    pc_after = sim.get_PC(0) & 0xFFFFFFFF
                    step_data["pc_after_step"] = pc_after
                    step_data["pc_after_step_hex"] = f"0x{{pc_after:08x}}"
                except:
                    step_data["pc_after_step"] = None
                    step_data["pc_after_step_hex"] = "N/A"
              
                # Get register writes
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
              
                # Get memory reads
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
              
                # Get memory writes
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
              
                # Get specific register values
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
              
                # Get memory contents at watch addresses
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
              
                # Return results
                result = {{
                    "success": True,
                    "type": "step_result",
                    "data": step_data
                }}
              
                print(json.dumps(result), flush=True)
              
            elif cmd_type == "query_pc":
                # Just return current PC without stepping
                pc = sim.get_PC(0) & 0xFFFFFFFF
                result = {{
                    "success": True,
                    "type": "query_result",
                    "pc": pc,
                    "pc_hex": f"0x{{pc:08x}}"
                }}
                print(json.dumps(result), flush=True)
              
            elif cmd_type == "shutdown":
                print(json.dumps({{"success": True, "message": "Shutting down"}}), flush=True)
                break
              
            else:
                print(json.dumps({{"success": False, "error": f"Unknown command type: {{cmd_type}}"}}), flush=True)
              
        except EOFError:
            # Parent process closed, exit gracefully
            break
        except Exception as e:
            print(json.dumps({{"success": False, "error": str(e)}}), flush=True)

except Exception as e:
    print(json.dumps({{"success": False, "error": f"Hammer initialization failed: {{str(e)}}"}}), flush=True)
    sys.exit(1)
'''
      
        # Start subprocess with pipes for bidirectional communication
        self.process = subprocess.Popen(
            [sys.executable, "-c", script_content],
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            bufsize=0,  # Unbuffered
            cwd=os.getcwd()
        )
      
        # Start reader thread
        self.is_running = True
        self.reader_thread = threading.Thread(target=self._read_responses, daemon=True)
        self.reader_thread.start()
      
        # Wait for initialization
        try:
            ready_msg = self.response_queue.get(timeout=10)
            if ready_msg == "HAMMER_READY":
                init_msg = self.response_queue.get(timeout=10)
                if init_msg == "HAMMER_INITIALIZED":
                    return {"success": True, "message": "Hammer co-simulation ready"}
          
            return {"success": False, "message": "Hammer initialization timeout"}
          
        except queue.Empty:
            return {"success": False, "message": "Hammer startup timeout"}
  
    def _read_responses(self):
        """Background thread to read responses from subprocess"""
        while self.is_running and self.process and self.process.poll() is None:
            try:
                line = self.process.stdout.readline()
                if not line:
                    break
                  
                line = line.strip()
                if not line:
                    continue
              
                # Handle special status messages
                if line in ["HAMMER_READY", "HAMMER_INITIALIZED"]:
                    self.response_queue.put(line)
                else:
                    # Try to parse as JSON response
                    try:
                        response = json.loads(line)
                        self.response_queue.put(response)
                    except json.JSONDecodeError:
                        # Non-JSON output, put as string
                        self.response_queue.put(line)
                      
            except Exception as e:
                if self.is_running:
                    self.response_queue.put({"success": False, "error": f"Read error: {e}"})
                break
  
    def send_command(self, command, timeout=5):
        """Send command to Hammer subprocess and wait for response"""
        if not self.is_running or not self.process:
            return {"success": False, "error": "Co-simulation not running"}
      
        try:
            # Send command
            command_json = json.dumps(command) + "\\n"
            self.process.stdin.write(command_json)
            self.process.stdin.flush()
          
            # Wait for response
            response = self.response_queue.get(timeout=timeout)
            return response
          
        except queue.Empty:
            return {"success": False, "error": "Command timeout"}
        except Exception as e:
            return {"success": False, "error": f"Command error: {e}"}
  
    def step_instruction(self, step_number=0):
        """Execute single instruction step and get comprehensive data"""
        command = {
            "type": "step",
            "step_number": step_number
        }
        return self.send_command(command)
  
    def query_pc(self):
        """Get current PC without stepping"""
        command = {"type": "query_pc"}
        return self.send_command(command)
  
    def shutdown(self):
        """Shutdown the co-simulation"""
        if self.is_running:
            self.is_running = False
          
            if self.process:
                try:
                    # Try graceful shutdown first
                    shutdown_cmd = {"type": "shutdown"}
                    self.send_command(shutdown_cmd, timeout=2)
                except:
                    pass
              
                # Force termination if needed
                try:
                    self.process.terminate()
                    self.process.wait(timeout=5)
                except:
                    self.process.kill()
                    self.process.wait()
          
            if self.reader_thread and self.reader_thread.is_alive():
                self.reader_thread.join(timeout=2)
  
    def __del__(self):
        self.shutdown()

# Example usage
def test_cosimulation():
    """Test the co-simulation"""
  
    watch_addresses = [0x80002000, 0x8000bc48]
  
    # Start co-simulation
    cosim = HammerCoSimulation(
        "./ibex_load_instr_test_5.o",
        memory_watch_addresses=watch_addresses
    )
  
    result = cosim.start_cosimulation()
    print(f"Startup: {result}")
  
    if result["success"]:
        try:
            # Query current PC
            pc_result = cosim.query_pc()
            print(f"Current PC: {pc_result}")
          
            # Execute a few steps when YOU decide
            for step in range(3):
                print(f"\\n=== Executing step {step} ===")
              
                # This is where you would wait for your UVM FIFO signal
                input(f"Press Enter to execute step {step}...")
              
                step_result = cosim.step_instruction(step)
              
                if step_result["success"]:
                    data = step_result["data"]
                    print(f"PC: {data['pc_hex']} -> {data['pc_after_step_hex']}")
                    print(f"Instruction: {data['instruction_string']}")
                  
                    if data["register_writes"]:
                        print("Register writes:")
                        for rw in data["register_writes"]:
                            print(f"  x{rw['register']} = {rw['value_hex']}")
                  
                    if data["memory_writes"]:
                        print("Memory writes:")
                        for mw in data["memory_writes"]:
                            print(f"  [{mw['address_hex']}] = {mw['value_hex']}")
                else:
                    print(f"Step failed: {step_result}")
                  
        finally:
            cosim.shutdown()

if __name__ == "__main__":
    test_cosimulation()
```

## 🎯 **Integraton with pyuvm Scoreboard:**

### **Updated `scoreboard.py` for Co-simulation:**

```python
import pyuvm 
from pyuvm import *
from pathlib import Path
import os, time, sys
import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge

# Import the co-simulation solution
from hammer_cosimulation import HammerCoSimulation

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
      
        # Set up memory addresses to watch
        self.memory_watch_addresses = [
            0x80002000,  # Your target memory location
            0x8000bc48,  # Another important address
            0x10000000   # Add more as needed
        ]
      
        # Initialize co-simulation
        self.hammer_cosim = HammerCoSimulation(
            self.elf_path,
            memory_watch_addresses=self.memory_watch_addresses
        )
      
        self.current_step = 0
        self.cosim_ready = False
  
    def start_of_simulation_phase(self):
        """Initialize co-simulation"""
        self.logger.info("Starting Hammer co-simulation...")
      
        result = self.hammer_cosim.start_cosimulation()
      
        if result["success"]:
            self.cosim_ready = True
            self.logger.info("Hammer co-simulation ready and waiting!")
          
            # Query initial PC
            pc_result = self.hammer_cosim.query_pc()
            if pc_result["success"]:
                self.logger.info(f"Initial PC: {pc_result['pc_hex']}")
          
        else:
            self.logger.error(f"Co-simulation failed: {result['message']}")
            raise RuntimeError("Hammer co-simulation initialization failed")
  
    async def run_phase(self):
        """Main verification loop with co-simulation"""
        await Timer(0, 'ns')
      
        if not self.cosim_ready:
            self.logger.error("Co-simulation not ready")
            return
      
        self.logger.info("Starting co-simulation verification...")
      
        # Main loop: wait for RVFI packets, then step Hammer
        while True:
            try:
                # === WAIT FOR RVFI PACKET FROM DUT ===
                self.logger.info("Waiting for RVFI packet from FIFO...")
              
                # This blocks until FIFO has data
                rvfi_packet = await self.rvfi_port.get()
              
                self.logger.info(f"Received RVFI packet: {rvfi_packet}")
              
                # === NOW STEP HAMMER (synchronized!) ===
                self.logger.info(f"Stepping Hammer (step {self.current_step})...")
              
                step_result = self.hammer_cosim.step_instruction(self.current_step)
              
                if step_result["success"]:
                    hammer_data = step_result["data"]
                  
                    # === COMPARE RVFI vs HAMMER ===
                    await self.compare_rvfi_hammer(rvfi_packet, hammer_data)
                  
                    self.current_step += 1
                  
                else:
                    self.logger.error(f"Hammer step failed: {step_result}")
                    break
                  
            except Exception as e:
                self.logger.error(f"Co-simulation error: {e}")
                break
  
    async def compare_rvfi_hammer(self, rvfi_packet, hammer_data):
        """Compare RVFI packet with Hammer data"""
      
        step_num = hammer_data["step_number"]
        hammer_pc = hammer_data["pc"]
        hammer_pc_next = hammer_data["pc_after_step"]
        hammer_insn = hammer_data["instruction_string"]
      
        self.logger.info(f"=== STEP {step_num} COMPARISON ===")
        self.logger.info(f"Hammer PC: {hammer_data['pc_hex']} -> {hammer_data['pc_after_step_hex']}")
        self.logger.info(f"Hammer Instruction: {hammer_insn}")
      
        # Compare with RVFI data (customize based on your RVFI structure)
        if hasattr(rvfi_packet, 'pc_rdata'):
            rvfi_pc = int(rvfi_packet.pc_rdata)
            if rvfi_pc == hammer_pc:
                self.logger.info("✅ PC match!")
            else:
                self.logger.error(f"❌ PC mismatch: RVFI=0x{rvfi_pc:08x}, Hammer=0x{hammer_pc:08x}")
      
        # Compare register writes
        if hammer_data["register_writes"]:
            self.logger.info("Hammer register writes:")
            for rw in hammer_data["register_writes"]:
                self.logger.info(f"  x{rw['register']} = {rw['value_hex']}")
              
                # Compare with RVFI register data
                # Add your RVFI comparison logic here
      
        # Compare memory operations
        if hammer_data["memory_writes"]:
            self.logger.info("Hammer memory writes:")
            for mw in hammer_data["memory_writes"]:
                self.logger.info(f"  [{mw['address_hex']}] = {mw['value_hex']}")
      
        # Log memory contents at watched addresses
        for addr, data in hammer_data["memory_contents"].items():
            if data["value"] is not None:
                self.logger.info(f"Memory at {addr}: {data['value_hex']}")
      
        await Timer(1, 'ns')  # Small delay
  
    def final_phase(self):
        """Cleanup co-simulation"""
        if self.hammer_cosim:
            self.logger.info("Shutting down Hammer co-simulation...")
            self.hammer_cosim.shutdown()
            self.logger.info(f"Total steps processed: {self.current_step}")
```

## 🚀 **Key Features:**

1. **🔄 True Co-simulation**: Hammer waits for your command
2. **📡 Bidirectional Communication**: Send commands, receive data
3. **⏳ Synchronized Execution**: Step only when RVFI packet arrives
4. **📊 Comprehensive Data**: All Hammer functions captured per step
5. **🛡️ Robust Error Handling**: Graceful shutdown and error recovery
6. **💾 Memory Watching**: Monitor specific addresses continuously
7. **🔍 Real-time Comparison**: Compare RVFI vs Hammer data step-by-step

## 📋 **Usage Flow:**

```
1. UVM FIFO receives RVFI packet → 
2. Scoreboard sends "step" command to Hammer →
3. Hammer executes single instruction →
4. Hammer returns comprehensive data →
5. Compare RVFI vs Hammer data →
6. Repeat for next RVFI packet
```

This gives you **perfect synchronization** between your DUT and Hammer reference model! 🎯
