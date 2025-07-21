# Ibex Privilege Mode Issue Analysis

## Problem Description

The Ibex RISC-V core is starting in **User mode (0x0)** instead of **Machine mode (0x3)** after reset, which violates the RISC-V specification.

## Evidence

### 1. Reset Behavior Analysis
- **Expected**: Core should start in Machine mode (0x3) after reset
- **Observed**: Core starts in User mode (0x0) after reset
- **Log Evidence**: `Privilege mode immediately after reset: 0x0`

### 2. Exception Behavior
When the core executes the first CSR instruction while in User mode:

```
=== RVFI Instruction 6 (Cycle 8) ===
Insn:       0x305d9073    # csrw mtvec,s11 
Trap:       1             # Traps because CSR access in User mode is illegal
Mode:       0x0           # Executed in User mode
PC:         0x80000094    # Address where trap occurred
```

After the trap, the core switches to Machine mode:
```
=== RVFI Instruction 7 (Cycle 12) ===
Mode:       0x3           # Now in Machine mode
PC:         0x80000000    # Jumped to exception handler (trap vector)
Intr:       1             # Interrupt/exception occurred
```

### 3. RISC-V Specification Violation

According to RISC-V Privileged ISA Specification:
- **Section 1.2**: "When a processor is reset, it enters the highest available privilege mode"
- **Section 3.1**: "M-mode is the highest privilege mode and the only mode that is required to be implemented"
- **Expected behavior**: Ibex should start in M-mode (0x3) after reset

## Impact

1. **CSR Instructions Fail**: Any CSR instruction executed early in the program will trap
2. **Software Compatibility**: Programs expecting to start in M-mode will behave incorrectly
3. **Boot Sequence Issues**: Proper machine mode initialization cannot occur

## Root Cause Analysis

### Ibex Core Reset Logic
From `ibex_cs_registers.sv`:
```systemverilog
// Update current priv level
always_ff @(posedge clk_i or negedge rst_ni) begin
  if (!rst_ni) begin
    priv_lvl_q <= PRIV_LVL_M;  // Should set to Machine mode (0x3)
  end else begin
    priv_lvl_q <= priv_lvl_d;
  end
end
```

The hardware logic appears correct, but the RVFI interface is reporting User mode.

### Possible Causes
1. **RVFI Interface Bug**: The RVFI signals may not be properly initialized
2. **Timing Issue**: There might be a delay between reset release and privilege mode update
3. **Configuration Issue**: Some parameter or configuration might be forcing User mode
4. **Core Version Bug**: This might be a known issue in this version of Ibex

## Workarounds

### 1. Software Workaround (Recommended)
Modify the boot code to handle the initial User mode:

```assembly
_start:
    # Expect that we might be in User mode initially
    # The first CSR instruction will trap and put us in Machine mode
    # So structure the code to handle this gracefully
    
    # This instruction will trap if we're in User mode
    csrw mtvec, t0    # Will trap and switch to M-mode
    
    # After the trap handler, we'll be in M-mode
    # Continue with normal M-mode initialization
```

### 2. Hardware Configuration Check
Investigate Ibex build parameters that might affect initial privilege mode:
- Check if there's a parameter for initial privilege level
- Verify PMP (Physical Memory Protection) settings
- Review debug mode settings

### 3. RVFI Interface Investigation
The issue might be in the RVFI interface rather than the core itself:
- Check if `rvfi_mode` is properly connected
- Verify timing of RVFI signals vs. internal privilege state
- Consider using internal privilege signals instead of RVFI for debugging

## Testing Status

### Current Test Results
- ✅ Core boots and runs programs
- ✅ Eventually reaches Machine mode after first CSR trap
- ❌ Does not start in Machine mode as required by spec
- ✅ RVFI logging captures the issue clearly

### Verification Commands
```bash
cd /home/nitin/cocotb_simulation/top_tracing_simulation
make  # Run simulation
grep "Privilege mode immediately after reset" logs_testbench/ibex_test.log
grep "Trap.*1" logs_testbench/rvfi_trace.log  # Find first trap
```

## Recommendations

1. **Immediate**: Use the enhanced logging to document the issue
2. **Short-term**: Adapt software to handle the incorrect initial mode
3. **Long-term**: 
   - Report this issue to the Ibex team
   - Investigate if this is a known issue
   - Consider updating to a newer version of Ibex
   - Implement a proper fix if the issue is confirmed

## Related Files

- `testbench.py`: Enhanced with privilege mode logging and warnings
- `logs_testbench/ibex_test.log`: Contains privilege mode analysis
- `logs_testbench/rvfi_trace.log`: Contains detailed RVFI instruction traces
- `dump_ibex_3_added_ecall.txt`: Disassembly showing the failing CSR instruction

## Next Steps

1. Run the enhanced testbench to confirm the issue consistently occurs
2. Research if this is a known Ibex issue
3. Consider implementing a fix or workaround based on findings
4. Document any solution for future reference
