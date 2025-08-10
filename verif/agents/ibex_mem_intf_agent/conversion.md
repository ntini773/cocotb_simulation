# IBEX Memory Interface Agent - SystemVerilog to PyUVM Conversion Guide

## Overview

This document outlines the conversion of the IBEX Memory Interface Agent from SystemVerilog UVM to Python PyUVM. The agent handles memory interface transactions for the IBEX RISC-V core verification environment.

## Files Converted

### 1. Monitor (`ibex_mem_intf_monitor.sv` → `ibex_mem_intf_monitor.py`)

**Purpose**: Monitors memory interface transactions and forwards them to the scoreboard.

**Key Conversion Points**:
- SystemVerilog `uvm_monitor` → PyUVM `uvm_monitor`
- Virtual interface access through cocotb signals
- Clock edge detection using `cocotb.triggers.RisingEdge`
- Transaction collection and broadcasting via `uvm_analysis_port`

**SystemVerilog Structure**:
```systemverilog
class ibex_mem_intf_monitor extends uvm_monitor;
  virtual ibex_mem_intf vif;
  uvm_analysis_port #(ibex_mem_intf_seq_item) item_collected_port;
  
  virtual task run_phase(uvm_phase phase);
    // Monitor interface signals
  endtask
endclass
```

**PyUVM Equivalent**:
```python
class ibex_mem_intf_monitor(uvm_monitor):
    def build_phase(self):
        self.item_collected_port = uvm_analysis_port("item_collected_port", self)
        self.vif = ConfigDB().get(self, "", "mem_intf_vif")
    
    async def run_phase(self):
        # Async monitoring with cocotb triggers
```

### 2. Response Agent Configuration (`ibex_mem_intf_response_agent_cfg.sv` → `ibex_mem_intf_response_agent_cfg.py`)

**Purpose**: Configuration object for the response agent containing behavioral settings.

**Key Conversion Points**:
- SystemVerilog `uvm_object` → PyUVM `uvm_object`
- Configuration parameters as Python class attributes
- Randomization using Python's `random` module instead of SystemVerilog `rand`

**Configuration Parameters**:
- `zero_delays_pct`: Percentage of zero delay responses
- `max_delay`: Maximum response delay cycles
- `enable_rdata_mem`: Enable read data from memory model
- Various other timing and behavioral controls

### 3. Response Agent (`ibex_mem_intf_response_agent.sv` → `ibex_mem_intf_response_agent.py`)

**Purpose**: Top-level agent coordinating driver, sequencer, and monitor.

**Key Conversion Points**:
- Agent hierarchy management in PyUVM
- Component creation and connection
- Configuration passing between components
- Analysis port connections

**Structure**:
- Creates and configures sequencer, driver, and monitor
- Handles TLM connections between components
- Manages configuration distribution

### 4. Response Driver (`ibex_mem_intf_response_driver.sv` → `ibex_mem_intf_response_driver.py`)

**Purpose**: Drives response transactions onto the memory interface.

**Key Conversion Points**:
- SystemVerilog `uvm_driver` → PyUVM `uvm_driver`
- Sequence item communication via `seq_item_port`
- Interface driving using cocotb signal assignment
- Clock synchronization with `await RisingEdge(clk)`

**Key Features**:
- Handles memory read/write responses
- Implements configurable delays
- Manages grant/ready handshaking
- Error injection capabilities

### 5. Response Sequencer (`ibex_mem_intf_response_sequencer.sv` → `ibex_mem_intf_response_sequencer.py`)

**Purpose**: Manages sequence execution and item flow to the driver.

**Key Conversion Points**:
- Simple inheritance from PyUVM `uvm_sequencer`
- Parameterized with sequence item type
- No major functional changes needed

### 6. Response Sequence Library (`ibex_mem_intf_response_seq_lib.sv` → `ibex_mem_intf_response_seq_lib.py`)

**Purpose**: Collection of response sequences for different test scenarios.

**Key Sequences Converted**:

#### a) `ibex_mem_intf_response_seq`
- Base response sequence
- Handles basic read/write responses
- Configurable timing and error injection

#### b) `ibex_mem_intf_response_random_seq`
- Randomized response patterns
- Variable delays and data patterns
- Stress testing capabilities

#### c) `ibex_mem_intf_response_grant_seq`
- Grant signal management
- Handshaking protocol implementation
- Flow control testing

#### d) `ibex_mem_intf_response_slow_seq`
- Slow response generation
- Back-pressure testing
- Performance boundary testing

## Conversion Patterns

### 1. Class Inheritance
```systemverilog
// SystemVerilog
class my_class extends uvm_component;
```
```python
# PyUVM
class my_class(uvm_component):
```

### 2. Phase Methods
```systemverilog
// SystemVerilog
virtual function void build_phase(uvm_phase phase);
virtual task run_phase(uvm_phase phase);
```
```python
# PyUVM
def build_phase(self):
async def run_phase(self):
```

### 3. Configuration Database
```systemverilog
// SystemVerilog
uvm_config_db#(virtual ibex_mem_intf)::get(this, "", "vif", vif);
uvm_config_db#(cfg_type)::set(null, "*", "cfg", cfg);
```
```python
# PyUVM
self.vif = ConfigDB().get(self, "", "vif")
ConfigDB().set(None, "*", "cfg", cfg)
```

### 4. Clock and Timing
```systemverilog
// SystemVerilog
@(posedge clk);
#10ns;
```
```python
# PyUVM/Cocotb
await RisingEdge(clk)
await Timer(10, units='ns')
```

### 5. Interface Access
```systemverilog
// SystemVerilog
vif.signal <= value;
data = vif.other_signal;
```
```python
# PyUVM/Cocotb
vif.signal.value = value
data = vif.other_signal.value
```

## Dependencies

### Required Python Packages
- `cocotb`: For HDL simulation interface
- `pyuvm`: For UVM methodology in Python
- `random`: For randomization (built-in)
- `logging`: For debug/info messages (built-in)

### Interface Requirements
- Memory interface signals accessible through cocotb
- Clock signal for synchronization
- Reset handling mechanism

## Usage Instructions

### 1. Environment Setup
```python
# In your testbench configuration
mem_cfg = ibex_mem_intf_response_agent_cfg()
mem_cfg.configure_for_performance_test()  # or other configuration

ConfigDB().set(None, "*", "mem_response_cfg", mem_cfg)
```

### 2. Agent Instantiation
```python
# In your environment
self.mem_response_agent = ibex_mem_intf_response_agent.create("mem_response_agent", self)
```

### 3. Sequence Execution
```python
# In your test
mem_seq = ibex_mem_intf_response_random_seq("mem_seq")
await mem_seq.start(env.mem_response_agent.sequencer)
```

## Key Differences from SystemVerilog

### 1. Asynchronous Nature
- All blocking operations must use `await`
- Clock edges and delays are coroutines
- No automatic clock synchronization

### 2. Signal Access
- Signals accessed through `.value` attribute
- Type conversion may be needed for complex data
- Binary/hex representations handled differently

### 3. Randomization
- Use Python `random` module instead of SystemVerilog `rand`
- Constraints implemented as Python logic
- Distribution functions available in `random` module

### 4. Memory Management
- Python garbage collection vs SystemVerilog manual management
- Object lifecycle managed by Python runtime
- No explicit cleanup typically needed

## Testing and Validation

### 1. Unit Testing
- Each component should be unit tested independently
- Mock interfaces for isolated testing
- Verify configuration propagation

### 2. Integration Testing
- Full agent testing with real interfaces
- Cross-check with SystemVerilog golden reference
- Performance and timing validation

### 3. Regression Testing
- Automated test suite for all sequences
- Comparison with SystemVerilog results
- Coverage analysis and reporting

## Troubleshooting Common Issues

### 1. Configuration Not Found
```python
# Ensure ConfigDB is set before component creation
ConfigDB().set(None, "*", "cfg_name", cfg_object)
```

### 2. Signal Access Errors
```python
# Check signal exists and is properly connected
if hasattr(vif, 'signal_name'):
    value = vif.signal_name.value
```

### 3. Timing Issues
```python
# Ensure proper clock synchronization
await RisingEdge(self.vif.clk)
await ReadOnly()  # For reading signals after clock edge
```

## Future Enhancements

1. **Advanced Error Injection**: More sophisticated error patterns
2. **Performance Monitoring**: Built-in performance metrics
3. **Protocol Checkers**: Automated protocol compliance checking
4. **Coverage Collection**: Functional coverage integration
5. **Debug Features**: Enhanced logging and introspection

## References

- [PyUVM Documentation](https://pyuvm.github.io/pyuvm/)
- [Cocotb Documentation](https://docs.cocotb.org/)
- [IBEX Core Documentation](https://github.com/lowRISC/ibex)
- SystemVerilog UVM Reference Manual

## File Structure

```
verif/agents/ibex_mem_intf_agent/
├── conversion.md                           # This file
├── ibex_mem_intf_seq_item.py              # Sequence item definition
├── ibex_mem_intf_monitor.py               # Monitor implementation
├── ibex_mem_intf_response_agent_cfg.py    # Configuration object
├── ibex_mem_intf_response_agent.py        # Agent implementation
├── ibex_mem_intf_response_driver.py       # Driver implementation
├── ibex_mem_intf_response_sequencer.py    # Sequencer implementation
└── ibex_mem_intf_response_seq_lib.py      # Sequence library
```

This conversion maintains the functionality and structure of the original SystemVerilog implementation while leveraging Python's strengths and the PyUVM framework's capabilities.
