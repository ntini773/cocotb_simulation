import subprocess
import sys
import os
import json
import time
from pathlib import Path

class HammerCoSim:
    """Simplified Hammer co-simulation without threading - synchronous communication"""
    
    def __init__(self, elf_path, memory_watch_addresses=None):
        self.elf_path = str(Path(elf_path).expanduser().resolve())
        self.memory_watch_addresses = memory_watch_addresses or []
        self.process = None
        self.is_running = False
        
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

# Add Hammer to path and ensure we import the right module
hammer_path = '/home/nitin/hammer-deps/hammer/builddir'
if hammer_path not in sys.path:
    sys.path.insert(0, hammer_path)

# Remove any conflicting paths that might have hammer.py
sys.path = [p for p in sys.path if not p.endswith('/verif')]

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
    # TO ENSURE SPIKE MOVES TO THE START ADDRESS
    for i in range(5):
        sim.single_step(0)
    
    print("HAMMER_INITIALIZED", flush=True)
    
    # Main command loop - wait for commands from parent
    while True:
        try:
            # Wait for command from parent process
            command_line = sys.stdin.readline()
            
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
        
        self.is_running = True
        
        # Wait for initialization synchronously
        try:
            # Read HAMMER_READY
            ready_line = self.process.stdout.readline().strip()
            if ready_line != "HAMMER_READY":
                stderr_output = self.process.stderr.read()
                return {"success": False, "message": f"Expected HAMMER_READY, got: {ready_line}. Stderr: {stderr_output}"}
            
            # Read HAMMER_INITIALIZED
            init_line = self.process.stdout.readline().strip()
            if init_line != "HAMMER_INITIALIZED":
                stderr_output = self.process.stderr.read()
                return {"success": False, "message": f"Expected HAMMER_INITIALIZED, got: {init_line}. Stderr: {stderr_output}"}
            
            return {"success": True, "message": "Hammer co-simulation ready"}
            
        except Exception as e:
            stderr_output = self.process.stderr.read() if self.process.stderr else "No stderr"
            return {"success": False, "message": f"Hammer startup error: {e}. Stderr: {stderr_output}"}
    
    def send_command(self, command, timeout=5):
        """Send command to Hammer subprocess and wait for response synchronously"""
        if not self.is_running or not self.process:
            return {"success": False, "error": "Co-simulation not running"}
        
        try:
            # Send command
            command_json = json.dumps(command) + "\n"
            self.process.stdin.write(command_json)
            self.process.stdin.flush()
            
            # Read response synchronously
            response_line = self.process.stdout.readline().strip()
            if not response_line:
                return {"success": False, "error": "No response from subprocess"}
            
            # Parse JSON response
            try:
                response = json.loads(response_line)
                return response
            except json.JSONDecodeError:
                return {"success": False, "error": f"Invalid JSON response: {response_line}"}
            
        except Exception as e:
            return {"success": False, "error": f"Command error: {e}"}
    
    def step_instruction(self, hart_id=0):
        """Execute single instruction step and get comprehensive data"""
        command = {
            "type": "step",
            "hart_id": hart_id
        }
        return self.send_command(command)
    
    def query_pc(self):
        """Get current PC to be executed without stepping"""
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
                    self.send_command(shutdown_cmd)
                except:
                    pass
                
                # Force termination if needed
                try:
                    self.process.terminate()
                    self.process.wait(timeout=5)
                except:
                    self.process.kill()
                    self.process.wait()
    
    def __del__(self):
        self.shutdown()

# Example usage
def test_cosimulation():
    """Test the co-simulation"""
    
    watch_addresses = [0x80002000, 0x8000bc48]
    
    # Start co-simulation
    cosim = HammerCoSim(
        "../ibex_load_instr_test_0.o",
        memory_watch_addresses=watch_addresses
    )
    
    result = cosim.start_cosimulation()
    print(f"Startup: {result}")
    
    if result["success"]:
        try:
            # Query current PC
            pc_result = cosim.query_pc()
            print(f"Current PC: {pc_result}")
            
            # Execute a few steps
            for step in range(3):
                print(f"\n=== Executing step {step} ===")
                
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
