# Cocotb Simulation Environment for Ibex RISC-V Core

This repository contains a cocotb-based simulation environment for the Ibex RISC-V core with various testing and analysis capabilities.

## Repository Structure

- **`sim/`** - Basic Ibex simulation environment
- **`top_tracing_simulation/`** - Advanced Ibex top-level tracing simulation (see [README](top_tracing_simulation/README.md))
- **`ibex/`** - Ibex core submodule
- **`requirements.txt`** - Python dependencies for the simulation environment

## Documentation

### RISC-V ISA Simulator Analysis

- **[`riscv-isa-sim-ibex-cosim-changes-summary.md`](riscv-isa-sim-ibex-cosim-changes-summary.md)** - Comprehensive analysis of the lowRISC fork changes to the RISC-V ISA Simulator (Spike) for Ibex cosimulation

This document provides detailed analysis of the GitHub comparison: https://github.com/riscv-software-src/riscv-isa-sim/compare/master...lowRISC:riscv-isa-sim:ibex_cosim

Key topics covered:
- Purpose and use case of the modifications
- Detailed commit-by-commit analysis
- Technical impact on memory management, interrupt handling, and debug functionality
- Files modified and rationale for each change

## Getting Started

1. Install dependencies:
   ```bash
   pip install -r requirements.txt
   ```

2. Navigate to the desired simulation environment:
   - For basic simulation: `cd sim/`
   - For tracing simulation: `cd top_tracing_simulation/`

3. Follow the specific README instructions in each directory.

## Related Projects

This simulation environment is designed to work with the [lowRISC Ibex RISC-V core](https://github.com/lowRISC/ibex) and uses a modified version of the [RISC-V ISA Simulator (Spike)](https://github.com/lowRISC/riscv-isa-sim) for cosimulation and verification purposes.