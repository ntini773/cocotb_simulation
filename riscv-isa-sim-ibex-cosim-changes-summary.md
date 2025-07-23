# RISC-V ISA Simulator (Spike) - Ibex Cosimulation Changes Summary

## Overview

This document provides a comprehensive analysis of the changes made in the lowRISC fork of the RISC-V ISA Simulator (Spike) for Ibex cosimulation purposes. The comparison is based on:

**GitHub Comparison URL**: https://github.com/riscv-software-src/riscv-isa-sim/compare/master...lowRISC:riscv-isa-sim:ibex_cosim

**Base Repository**: riscv-software-src/riscv-isa-sim (master branch)  
**Target Repository**: lowRISC/riscv-isa-sim (ibex_cosim branch)

## Purpose and Use Case

The changes in the `ibex_cosim` branch are specifically designed to enable **cosimulation between the Spike RISC-V simulator and the Ibex RISC-V core**. This is used for:

1. **Verification and Validation**: Comparing the behavior of the Ibex hardware implementation against the golden reference model (Spike)
2. **Debug and Development**: Identifying discrepancies between hardware and software models
3. **Compliance Testing**: Ensuring Ibex conforms to RISC-V specification requirements
4. **Hardware-Software Interface Testing**: Validating the interaction between hardware and software components

## Key Changes Summary

The modifications focus on adapting Spike to work as a reference model alongside the Ibex core, addressing timing differences, memory access patterns, and debug functionality.

## Detailed Changes by Commit

### 1. **PMP Debug Module Access Enhancement** (Latest commit)
- **Commit**: `6d5b660` - "PMP should always allow accesses to the debug_module in debug mode"
- **Author**: Harry Callahan (lowRISC)
- **Date**: May 12, 2025

**Changes Made**:
- **File**: `riscv/mmu.cc`
- **Modification**: Added check in `mmu_t::pmp_ok()` to always allow debug module access when in debug mode
- **Code Added**:
  ```cpp
  // If the access is into the debug module in debug_mode, it must
  // always succeed.
  if (addr >= proc->start_debug && addr < proc->end_debug && proc && proc->state.debug_mode)
    return true;
  ```

**Rationale**: Ensures that Physical Memory Protection (PMP) doesn't block debug module accesses when the processor is in debug mode, which is critical for debugging functionality.

### 2. **Configurable Debug Module Address Range**
- **Commit**: `394ce31` - "Add configurable debug_module address range to the processor type"
- **Author**: Harry Callahan (lowRISC)
- **Date**: May 12, 2025

**Changes Made**:
- **Files**: `riscv/processor.h`, `riscv/processor.cc`
- **Modifications**:
  - Added runtime-configurable debug module address range
  - Added `start_debug` and `end_debug` member variables to processor
  - Added `set_debug_module_range()` method

**Rationale**: Replaces hardcoded `DEBUG_START` and `DEBUG_END` macros with runtime configuration, allowing flexible memory layout without requiring recompilation.

### 3. **Debug ROM Vector Address Update**
- **Commit**: `f7c682a` - "DEBUG_ROM_TVEC -> 0x80000008"
- **Author**: Harry Callahan (lowRISC)
- **Date**: May 12, 2025

**Changes Made**:
- Modified debug ROM entry vector address to allow space for two uncompressed instructions
- Enables jump handlers that can target debug modules at distant memory locations using `AUIPC + JALR`

### 4. **MIP Pre-value Concept for Interrupt Handling**
- **Commit**: `39612f9` - "Introduce pre_val MIP concept"
- **Author**: Greg Chadwick (lowRISC)
- **Date**: June 27, 2024

**Changes Made**:
- **Files**: `riscv/csrs.h`, `riscv/csrs.cc`, `riscv/processor.h`
- **Modifications**:
  - Added `pre_val` field to `mip_csr_t` class
  - Added `read_pre_val()` and `write_pre_val()` methods
  - Modified interrupt decision logic to use pre_val instead of current MIP value

**Rationale**: Addresses timing differences between Spike and Ibex. When Ibex stalls an instruction in ID/EX stage, MIP might change, causing mismatches between interrupt decisions and CSR instruction observations.

### 5. **Debug Memory Access Check Removal**
- **Commit**: `1f89c52` - "Remove debug memory access check"
- **Author**: Greg Chadwick (lowRISC)
- **Date**: June 27, 2024

**Changes Made**:
- **File**: `riscv/mmu.cc`
- **Modification**: Removed check that prevented access to debug memory region when not in debug mode

**Rationale**: The Spike debug module isn't used in cosimulation environment, and this check caused false failures when randomly generated programs accessed the debug memory address range.

### 6. **PMP Function Visibility Change**
- **Commit**: `c0926fc` - "Move mmu_t::pmp_ok to public"
- **Author**: Greg Chadwick (lowRISC)
- **Date**: June 27, 2024

**Changes Made**:
- **File**: `riscv/mmu.h`
- **Modification**: Moved `pmp_ok()` method from private to public section

**Rationale**: Enables cosimulation environment to directly check if memory accesses would be allowable under Physical Memory Protection rules.

### 7. **GCC 13 Compilation Fix**
- **Commit**: `ef10d39` - "fesvr: fix compilation with gcc 13"
- **Author**: Paul Kim
- **Date**: June 30, 2024

**Changes Made**:
- **File**: `fesvr/device.h` (implied)
- **Modification**: Added missing `<cstdint>` header inclusion

**Rationale**: Fixes compilation issues with GCC 13 due to header dependency changes.

### 8. **Hardware Trigger Improvements**
- **Commit**: `0e306ce` - "Allow hardware triggers to go off without using the mmu tlb"
- **Author**: Harry Callahan (lowRISC)
- **Date**: October 19, 2022

**Changes Made**:
- Removed TLB dependency for hardware trigger checks
- Moved trigger checking to after complete instruction fetch

**Rationale**: Spike's MMU TLB functionality isn't used in cosimulation, and hardware triggers would never fire without this change.

### 9. **TDATA1 Ibex-specific Configuration**
- **Commit**: `ce7a9be` - "Hardcode TDATA1 fields to match implemented ibex features"
- **Author**: Harry Callahan (lowRISC)
- **Date**: October 18, 2022

**Changes Made**:
- Configured TDATA1 trigger fields to match Ibex's implemented features

**Rationale**: Ensures trigger functionality matches Ibex's specific implementation details.

## Files Modified

### Core MMU and Memory Management
- **`riscv/mmu.cc`**: PMP debug access logic, removed debug memory checks
- **`riscv/mmu.h`**: Made PMP functions publicly accessible

### Processor Core
- **`riscv/processor.h`**: Added configurable debug ranges, MIP pre-value handling
- **`riscv/processor.cc`**: Implemented debug range configuration methods

### CSR (Control and Status Registers)
- **`riscv/csrs.h`**: MIP pre-value interface definitions
- **`riscv/csrs.cc`**: MIP pre-value implementation

### Build System and Headers
- **`fesvr/device.h`**: GCC 13 compatibility fixes

## Technical Impact

### Memory Management
- Enhanced PMP handling for debug scenarios
- Flexible debug module addressing
- Removed unnecessary access restrictions

### Interrupt Handling
- Improved timing accuracy for interrupt decisions
- Better modeling of pipeline stall effects
- Separation of interrupt logic from CSR observation

### Debug and Verification
- Configurable debug module placement
- Enhanced trigger functionality
- Better hardware-software interface modeling

### Cosimulation Benefits
- Reduced false positives in verification
- More accurate timing model
- Better alignment with Ibex hardware behavior

## Conclusion

These changes transform Spike from a standalone simulator into a cosimulation-ready reference model specifically tailored for Ibex verification. The modifications address key differences between software simulation and hardware implementation, particularly around timing, memory protection, and debug functionality.

The primary benefits include:
- **Improved Accuracy**: Better modeling of Ibex-specific behaviors
- **Flexible Configuration**: Runtime-configurable memory layouts
- **Enhanced Debugging**: Better debug module support
- **Reduced False Positives**: Elimination of spurious verification failures
- **Better Integration**: Improved interface for cosimulation environments

This customized version of Spike serves as a critical component in the Ibex verification ecosystem, enabling comprehensive testing and validation of the Ibex RISC-V core implementation.