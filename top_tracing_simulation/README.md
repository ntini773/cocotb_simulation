# Ibex Top Tracing Simulation

This directory provides a cocotb-based simulation environment for the Ibex RISC-V core, using the `ibex_top_tracing.sv` module as the top-level. The environment supports protocol-level memory modeling, RVFI signal logging, and flexible testbench scripting.

---

## Directory Structure

```
top_tracing_simulation/
├── testbench.py
├── lsu_protocol.py
├── memory_model.py
├── *.o                      # RISC-V binary test programs
├── logs_testbench/
│   ├── ibex_test.log
│   └── rvfi_trace.log
├── Makefile
├── README.md
```

---

## Main Components

### `testbench.py`

- Main cocotb testbench for driving the simulation.
- Initializes and resets the Ibex core.
- Instantiates the memory adapter (`IbexMemoryAdapter` from `lsu_protocol_self.py`).
- Loads test programs (e.g., `.o` files) into the memory model.
- Starts clock and simulation, monitors execution for a configurable number of cycles.
- Logs general simulation events and RVFI signals to files in `logs_testbench/`.

### `lsu_protocol.py`

- Implements the LSU (Load/Store Unit) protocol adapter for Ibex.
- Defines the `IbexMemoryAdapter` class.
- Handles instruction and data memory requests from the DUT.
- Applies byte enables and simulates realistic memory delays.
- Interfaces with the `MemoryModel` for actual memory reads/writes.

### `memory_model.py`

- Provides a Python-side memory model for simulation.
- Implements a simple addressable memory space.
- Supports loading binary test programs (e.g., ELF or `.o` files).
- Methods for reading, writing, and dumping memory contents for debugging.

### `.o` Files

- Compiled RISC-V test programs.
- Loaded into the memory model by the testbench to provide executable code for the Ibex core during simulation.

### `logs_testbench/`

- Stores simulation logs.
  - `ibex_test.log`: General simulation and protocol events.
  - `rvfi_trace.log`: Detailed per-instruction RVFI signal traces for formal verification and debugging.

---

## Running the Simulation

1. **Compile the design** using the provided `Makefile`.
2. **Run the testbench** with cocotb:

   ```bash
   make
   ```
3. **Check logs** in `logs_testbench/` for simulation results and RVFI traces.
4. **View waveforms:**
   After running `make`, open the generated `dump.vcd` file with GTKWave to inspect signal activity:

   ```bash
   gtkwave dump.vcd
   ```

   Alternatively, open the protocol-specific waveform setup:

   ```bash
   gtkwave ibex_simulation_protocol7.gtkw
   ```

   This will show which signals are being simulated and help with debugging and analysis.

---

## Customization

- **Test Programs:** Replace or add `.o` files to test different RISC-V programs.
- **Memory Adapter:** Modify `lsu_protocol.py` to change memory protocol behavior.
- **Logging:** Adjust logging levels and formats in `testbench.py` as needed.

---

## Notes

- The simulation expects the Ibex core to be wrapped in `ibex_top_tracing`.
- All memory accesses and protocol handling are done in Python, allowing for flexible debugging and extension.
- RVFI logging is enabled for formal traceability.

---

**For more details, see comments in each Python file.**
