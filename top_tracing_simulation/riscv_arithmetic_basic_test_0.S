.include "user_define.h"
.globl _start
.section .text
_start:           
                  .include "user_init.s"
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x31, h0_start
jalr x0, x31, 0
h0_start:
                  li x12, 0x40001104
                  csrw 0x301, x12
kernel_sp:        
                  la x30, kernel_stack_end

trap_vec_init:    
                  la x12, mtvec_handler
                  ori x12, x12, 0
                  csrw 0x305, x12 # MTVEC

mepc_setup:       
                  la x12, init
                  csrw 0x341, x12

init_machine_mode:
                  li x12, 0x1e00
                  csrw 0x300, x12 # MSTATUS
                  li x12, 0x0
                  csrw 0x304, x12 # MIE
                  mret
init:             
                  li x0, 0xf09ffaac
                  li x1, 0x0
                  li x2, 0x7
                  li x3, 0x1b000b7f
                  li x4, 0x3
                  li x5, 0x80000000
                  li x6, 0xf36fe9ce
                  li x7, 0x0
                  li x8, 0x0
                  li x9, 0x6d30b7aa
                  li x10, 0x80000000
                  li x11, 0x9
                  li x12, 0xf4403314
                  li x13, 0xc
                  li x14, 0x0
                  li x15, 0x302fb0ea
                  li x16, 0x0
                  li x17, 0x80000000
                  li x18, 0x0
                  li x19, 0x0
                  li x20, 0x686e06f3
                  li x21, 0x488301d9
                  li x22, 0x0
                  li x23, 0x80000000
                  li x24, 0x0
                  li x25, 0x7e4a0b40
                  li x26, 0x0
                  li x27, 0x0
                  li x28, 0x0
                  li x31, 0x80000000
                  la x29, user_stack_end
main:             auipc       s2, 991270
                  li         t3, 0x0 #start riscv_int_numeric_corner_stream_0
                  li         s8, 0x52b90efc
                  li         s11, 0x57f30bf3
                  li         s10, 0x269baf8
                  li         s6, 0x0
                  li         a0, 0x6edd8d4
                  li         a4, 0x0
                  li         t0, 0x0
                  li         s0, 0x1ae1d638
                  li         a2, 0x1
                  c.addi16sp  sp, -16
                  divu        s4, a5, ra
                  div         sp, a6, s9
                  mulhu       s2, a4, s2
                  c.li        sp, 4
                  divu        s5, s11, s7
                  nop
                  sub         tp, s6, s4
                  c.add       sp, a3
                  lui         t0, 381975
                  c.li        ra, -1
                  mul         a5, t5, s4
                  lui         s9, 923176
                  mul         tp, s7, a0
                  mul         zero, t1, a1
                  c.addi      a6, 1
                  lui         s6, 955941
                  c.li        gp, -1
                  nop
                  nop
                  c.add       s2, a4
                  c.addi4spn  a3, sp, 656
                  c.nop
                  c.addi      t0, -1
                  sub         s3, tp, s6
                  mulhu       a2, t3, t5
                  c.add       s10, a5
                  mulhu       a5, s7, sp
                  c.nop
                  sub         zero, s1, sp
                  c.addi4spn  a3, sp, 192
                  divu        s7, s9, s6
                  c.lui       t1, 17
                  nop
                  c.addi16sp  sp, 128
                  nop
                  mulhsu      t2, gp, ra
                  slti        s1, t1, 399
                  la x31, test_done
                  jalr x0, x31, 0
test_done:        
                  li gp, 1
                  ecall
write_tohost:     
                  sw gp, tohost, t5

_exit:            
                  j write_tohost

instr_end:        
                  nop

.section .data
.align 6; .global tohost; tohost: .dword 0;
.align 6; .global fromhost; fromhost: .dword 0;
.section .user_stack,"aw",@progbits;
.align 2
user_stack_start:
.rept 4999
.4byte 0x0
.endr
user_stack_end:
.4byte 0x0
.align 2
kernel_instr_start:
.text
.align 2
mtvec_handler:    
                  csrrw x29, 0x340, x29
                  add x29, x30, zero
                  1: addi x29, x29, -124
                  sw x1, 4(x29)
                  sw x2, 8(x29)
                  sw x3, 12(x29)
                  sw x4, 16(x29)
                  sw x5, 20(x29)
                  sw x6, 24(x29)
                  sw x7, 28(x29)
                  sw x8, 32(x29)
                  sw x9, 36(x29)
                  sw x10, 40(x29)
                  sw x11, 44(x29)
                  sw x12, 48(x29)
                  sw x13, 52(x29)
                  sw x14, 56(x29)
                  sw x15, 60(x29)
                  sw x16, 64(x29)
                  sw x17, 68(x29)
                  sw x18, 72(x29)
                  sw x19, 76(x29)
                  sw x20, 80(x29)
                  sw x21, 84(x29)
                  sw x22, 88(x29)
                  sw x23, 92(x29)
                  sw x24, 96(x29)
                  sw x25, 100(x29)
                  sw x26, 104(x29)
                  sw x27, 108(x29)
                  sw x28, 112(x29)
                  sw x29, 116(x29)
                  sw x30, 120(x29)
                  sw x31, 124(x29)
                  csrr x12, 0x300 # MSTATUS
                  csrr x12, 0x342 # MCAUSE
                  srli x12, x12, 31
                  bne x12, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x12, 0x341 # MEPC
                  csrr x12, 0x342 # MCAUSE
                  li x13, 0xb # ECALL_MMODE
                  beq x12, x13, ecall_handler
                  li x13, 0x2 # ILLEGAL_INSTRUCTION
                  beq x12, x13, illegal_instr_handler
                  csrr x13, 0x343 # MTVAL
                  1: la x31, test_done
                  jalr x1, x31, 0

ecall_handler:    
                  la x12, _start
                  sw x0, 0(x12)
                  sw x1, 4(x12)
                  sw x2, 8(x12)
                  sw x3, 12(x12)
                  sw x4, 16(x12)
                  sw x5, 20(x12)
                  sw x6, 24(x12)
                  sw x7, 28(x12)
                  sw x8, 32(x12)
                  sw x9, 36(x12)
                  sw x10, 40(x12)
                  sw x11, 44(x12)
                  sw x12, 48(x12)
                  sw x13, 52(x12)
                  sw x14, 56(x12)
                  sw x15, 60(x12)
                  sw x16, 64(x12)
                  sw x17, 68(x12)
                  sw x18, 72(x12)
                  sw x19, 76(x12)
                  sw x20, 80(x12)
                  sw x21, 84(x12)
                  sw x22, 88(x12)
                  sw x23, 92(x12)
                  sw x24, 96(x12)
                  sw x25, 100(x12)
                  sw x26, 104(x12)
                  sw x27, 108(x12)
                  sw x28, 112(x12)
                  sw x29, 116(x12)
                  sw x30, 120(x12)
                  sw x31, 124(x12)
                  la x31, write_tohost
                  jalr x0, x31, 0

illegal_instr_handler:
                  csrr  x12, 0x341
                  addi  x12, x12, 4
                  csrw  0x341, x12
                  lw x1, 4(x29)
                  lw x2, 8(x29)
                  lw x3, 12(x29)
                  lw x4, 16(x29)
                  lw x5, 20(x29)
                  lw x6, 24(x29)
                  lw x7, 28(x29)
                  lw x8, 32(x29)
                  lw x9, 36(x29)
                  lw x10, 40(x29)
                  lw x11, 44(x29)
                  lw x12, 48(x29)
                  lw x13, 52(x29)
                  lw x14, 56(x29)
                  lw x15, 60(x29)
                  lw x16, 64(x29)
                  lw x17, 68(x29)
                  lw x18, 72(x29)
                  lw x19, 76(x29)
                  lw x20, 80(x29)
                  lw x21, 84(x29)
                  lw x22, 88(x29)
                  lw x23, 92(x29)
                  lw x24, 96(x29)
                  lw x25, 100(x29)
                  lw x26, 104(x29)
                  lw x27, 108(x29)
                  lw x28, 112(x29)
                  lw x29, 116(x29)
                  lw x30, 120(x29)
                  lw x31, 124(x29)
                  addi x29, x29, 124
                  add x30, x29, zero
                  csrrw x29, 0x340, x29
                  mret

pt_fault_handler: 

.align 2
mmode_intr_handler:
                  csrr  x12, 0x300 # MSTATUS;
                  csrr  x12, 0x304 # MIE;
                  csrr  x12, 0x344 # MIP;
                  csrrc x12, 0x344, x12 # MIP;
                  lw x1, 4(x29)
                  lw x2, 8(x29)
                  lw x3, 12(x29)
                  lw x4, 16(x29)
                  lw x5, 20(x29)
                  lw x6, 24(x29)
                  lw x7, 28(x29)
                  lw x8, 32(x29)
                  lw x9, 36(x29)
                  lw x10, 40(x29)
                  lw x11, 44(x29)
                  lw x12, 48(x29)
                  lw x13, 52(x29)
                  lw x14, 56(x29)
                  lw x15, 60(x29)
                  lw x16, 64(x29)
                  lw x17, 68(x29)
                  lw x18, 72(x29)
                  lw x19, 76(x29)
                  lw x20, 80(x29)
                  lw x21, 84(x29)
                  lw x22, 88(x29)
                  lw x23, 92(x29)
                  lw x24, 96(x29)
                  lw x25, 100(x29)
                  lw x26, 104(x29)
                  lw x27, 108(x29)
                  lw x28, 112(x29)
                  lw x29, 116(x29)
                  lw x30, 120(x29)
                  lw x31, 124(x29)
                  addi x29, x29, 124
                  add x30, x29, zero
                  csrrw x29, 0x340, x29
                  mret;

kernel_instr_end: nop
.align 2
kernel_data_start:
.section .kernel_stack,"aw",@progbits;
.align 2
kernel_stack_start:
.rept 4999
.4byte 0x0
.endr
kernel_stack_end:
.4byte 0x0
