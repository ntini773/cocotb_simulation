.include "user_define.h"
.globl _start
.section .text
_start:           
                  .include "user_init.s"
                  csrr x5, 0xf14
                  li x6, 0
                  beq x5, x6, 0f

0: la x13, h0_start
jalr x0, x13, 0
h0_start:
                  li x31, 0x40001104
                  csrw 0x301, x31
kernel_sp:        
                  la x15, kernel_stack_end

trap_vec_init:    
                  la x31, mtvec_handler
                  ori x31, x31, 0
                  csrw 0x305, x31 # MTVEC

mepc_setup:       
                  la x31, init
                  csrw 0x341, x31

init_machine_mode:
                  li x31, 0x1a00
                  csrw 0x300, x31 # MSTATUS
                  li x31, 0x0
                  csrw 0x304, x31 # MIE
                  mret
init:             
                  li x0, 0x7
                  li x1, 0xbba37c7f
                  li x2, 0x80000000
                  li x3, 0x0
                  li x4, 0x6
                  li x5, 0xe8bf9646
                  li x6, 0x3
                  li x7, 0xc
                  li x8, 0x3ed4b1d0
                  li x9, 0xf
                  li x10, 0xe
                  li x11, 0x0
                  li x12, 0x80000000
                  li x13, 0x1b3390ae
                  li x14, 0x80000000
                  li x16, 0x616006b4
                  li x17, 0x6d2569a
                  li x18, 0xf0ecad75
                  li x19, 0xf0b79bc6
                  li x20, 0x80000000
                  li x21, 0x42117b22
                  li x22, 0x80000000
                  li x23, 0xf0b61818
                  li x24, 0x80000000
                  li x25, 0xc
                  li x26, 0xb
                  li x28, 0x0
                  li x29, 0x0
                  li x30, 0xf6909199
                  li x31, 0xfd20a422
                  la x27, user_stack_end
main:             xor         s10, a0, t4
                  sltiu       zero, s5, -313
                  srai        t0, tp, 17
                  mulh        t0, a7, s9
                  andi        s9, sp, 484
                  c.and       a4, a2
                  c.li        s10, -1
                  slli        a6, s3, 1
                  auipc       sp, 560146
                  sra         t1, s2, s11
                  srl         a0, a2, zero
                  c.addi4spn  a4, sp, 176
                  srl         s4, s4, t3
                  addi        tp, gp, 1154
                  sub         t1, a2, s11
                  c.or        a2, a3
                  slli        zero, t4, 27
                  sltu        s7, a7, s5
                  sll         s2, a7, s9
                  srl         s6, sp, a3
                  srl         sp, s9, a3
                  c.add       a2, t6
                  lui         a4, 279599
                  c.lui       t0, 2
                  lui         zero, 32606
                  nop
                  c.andi      a4, -1
                  c.slli      a7, 2
                  c.or        a0, a3
                  li         t6, 0x0 #start riscv_int_numeric_corner_stream_0
                  li         t5, 0x1
                  li         t0, 0x0
                  li         s10, 0x7688212f
                  li         s6, 0x0
                  li         t4, 0x0
                  li         t3, 0x1
                  li         sp, 0x0
                  li         s9, 0x1
                  li         s4, 0x1
                  sub         zero, tp, a4
                  div         s1, s11, a5
                  sub         tp, s2, s3
                  c.nop
                  c.mv        t2, a1
                  c.lui       s0, 8
                  mulhsu      gp, a5, s11
                  lui         t0, 1031270
                  c.mv        t0, a5
                  add         s2, a4, t3
                  c.li        s8, 9
                  c.nop
                  divu        t3, s2, sp
                  sub         a4, a3, a6
                  nop
                  auipc       t0, 469225
                  mulhsu      s9, t1, t1
                  mul         a7, s1, s2
                  auipc       a2, 712933
                  rem         t6, sp, t0
                  nop
                  auipc       s6, 103552 #end riscv_int_numeric_corner_stream_0
                  ori         gp, s6, 1259
                  and         ra, t4, t0
                  mul         ra, t1, s11
                  sub         t2, t3, t1
                  rem         s6, s0, s10
                  lui         zero, 868684
                  slt         t1, s7, t3
                  mulh        t0, t5, ra
                  xor         ra, sp, t0
                  c.addi4spn  a4, sp, 432
                  srai        ra, a2, 30
                  c.lui       a7, 12
                  nop
                  div         ra, t6, sp
                  c.nop
                  slti        a4, gp, 1724
                  auipc       a4, 72632
                  c.slli      t4, 14
                  c.add       a4, a7
                  xor         a0, a5, t6
                  lui         s10, 979153
                  c.addi      s2, -1
                  sub         zero, t2, a7
                  c.xor       a4, a3
                  and         t3, s2, s0
                  sll         t4, a4, s6
                  srai        s8, s2, 30
                  c.sub       a1, a3
                  srli        ra, a7, 8
                  divu        t5, a7, sp
                  c.and       a4, a3
                  nop
                  andi        s2, ra, 1179
                  c.andi      a4, 6
                  and         s3, a1, t5
                  mulhsu      s1, sp, s7
                  sub         t6, t6, a1
                  c.sub       a4, a3
                  auipc       t3, 351932
                  sltiu       s4, s11, 1903
                  c.addi16sp  sp, 128
                  ori         gp, s2, -283
                  and         a2, t2, s9
                  srl         s9, s6, t4
                  div         s9, zero, a3
                  auipc       ra, 982219
                  c.andi      a4, -1
                  sltiu       ra, s9, -134
                  auipc       s10, 588752
                  c.sub       a4, a3
                  c.addi      t2, 30
                  mulhu       a6, a4, s4
                  srli        s2, s10, 6
                  xori        t6, a5, -420
                  c.and       a4, a2
                  c.and       a4, a3
                  c.nop
                  slt         s9, tp, s2
                  divu        gp, s1, s5
                  la x13, test_done
                  jalr x0, x13, 0
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
                  csrrw x27, 0x340, x27
                  add x27, x15, zero
                  1: addi x27, x27, -124
                  sw x1, 4(x27)
                  sw x2, 8(x27)
                  sw x3, 12(x27)
                  sw x4, 16(x27)
                  sw x5, 20(x27)
                  sw x6, 24(x27)
                  sw x7, 28(x27)
                  sw x8, 32(x27)
                  sw x9, 36(x27)
                  sw x10, 40(x27)
                  sw x11, 44(x27)
                  sw x12, 48(x27)
                  sw x13, 52(x27)
                  sw x14, 56(x27)
                  sw x15, 60(x27)
                  sw x16, 64(x27)
                  sw x17, 68(x27)
                  sw x18, 72(x27)
                  sw x19, 76(x27)
                  sw x20, 80(x27)
                  sw x21, 84(x27)
                  sw x22, 88(x27)
                  sw x23, 92(x27)
                  sw x24, 96(x27)
                  sw x25, 100(x27)
                  sw x26, 104(x27)
                  sw x27, 108(x27)
                  sw x28, 112(x27)
                  sw x29, 116(x27)
                  sw x30, 120(x27)
                  sw x31, 124(x27)
                  csrr x31, 0x300 # MSTATUS
                  csrr x31, 0x342 # MCAUSE
                  srli x31, x31, 31
                  bne x31, x0, mmode_intr_handler

mmode_exception_handler:
                  csrr x31, 0x341 # MEPC
                  csrr x31, 0x342 # MCAUSE
                  li x30, 0xb # ECALL_MMODE
                  beq x31, x30, ecall_handler
                  li x30, 0x2 # ILLEGAL_INSTRUCTION
                  beq x31, x30, illegal_instr_handler
                  csrr x30, 0x343 # MTVAL
                  1: la x13, test_done
                  jalr x1, x13, 0

ecall_handler:    
                  la x31, _start
                  sw x0, 0(x31)
                  sw x1, 4(x31)
                  sw x2, 8(x31)
                  sw x3, 12(x31)
                  sw x4, 16(x31)
                  sw x5, 20(x31)
                  sw x6, 24(x31)
                  sw x7, 28(x31)
                  sw x8, 32(x31)
                  sw x9, 36(x31)
                  sw x10, 40(x31)
                  sw x11, 44(x31)
                  sw x12, 48(x31)
                  sw x13, 52(x31)
                  sw x14, 56(x31)
                  sw x15, 60(x31)
                  sw x16, 64(x31)
                  sw x17, 68(x31)
                  sw x18, 72(x31)
                  sw x19, 76(x31)
                  sw x20, 80(x31)
                  sw x21, 84(x31)
                  sw x22, 88(x31)
                  sw x23, 92(x31)
                  sw x24, 96(x31)
                  sw x25, 100(x31)
                  sw x26, 104(x31)
                  sw x27, 108(x31)
                  sw x28, 112(x31)
                  sw x29, 116(x31)
                  sw x30, 120(x31)
                  sw x31, 124(x31)
                  la x13, write_tohost
                  jalr x0, x13, 0

illegal_instr_handler:
                  csrr  x31, 0x341
                  addi  x31, x31, 4
                  csrw  0x341, x31
                  lw x1, 4(x27)
                  lw x2, 8(x27)
                  lw x3, 12(x27)
                  lw x4, 16(x27)
                  lw x5, 20(x27)
                  lw x6, 24(x27)
                  lw x7, 28(x27)
                  lw x8, 32(x27)
                  lw x9, 36(x27)
                  lw x10, 40(x27)
                  lw x11, 44(x27)
                  lw x12, 48(x27)
                  lw x13, 52(x27)
                  lw x14, 56(x27)
                  lw x15, 60(x27)
                  lw x16, 64(x27)
                  lw x17, 68(x27)
                  lw x18, 72(x27)
                  lw x19, 76(x27)
                  lw x20, 80(x27)
                  lw x21, 84(x27)
                  lw x22, 88(x27)
                  lw x23, 92(x27)
                  lw x24, 96(x27)
                  lw x25, 100(x27)
                  lw x26, 104(x27)
                  lw x27, 108(x27)
                  lw x28, 112(x27)
                  lw x29, 116(x27)
                  lw x30, 120(x27)
                  lw x31, 124(x27)
                  addi x27, x27, 124
                  add x15, x27, zero
                  csrrw x27, 0x340, x27
                  mret

pt_fault_handler: 

.align 2
mmode_intr_handler:
                  csrr  x31, 0x300 # MSTATUS;
                  csrr  x31, 0x304 # MIE;
                  csrr  x31, 0x344 # MIP;
                  csrrc x31, 0x344, x31 # MIP;
                  lw x1, 4(x27)
                  lw x2, 8(x27)
                  lw x3, 12(x27)
                  lw x4, 16(x27)
                  lw x5, 20(x27)
                  lw x6, 24(x27)
                  lw x7, 28(x27)
                  lw x8, 32(x27)
                  lw x9, 36(x27)
                  lw x10, 40(x27)
                  lw x11, 44(x27)
                  lw x12, 48(x27)
                  lw x13, 52(x27)
                  lw x14, 56(x27)
                  lw x15, 60(x27)
                  lw x16, 64(x27)
                  lw x17, 68(x27)
                  lw x18, 72(x27)
                  lw x19, 76(x27)
                  lw x20, 80(x27)
                  lw x21, 84(x27)
                  lw x22, 88(x27)
                  lw x23, 92(x27)
                  lw x24, 96(x27)
                  lw x25, 100(x27)
                  lw x26, 104(x27)
                  lw x27, 108(x27)
                  lw x28, 112(x27)
                  lw x29, 116(x27)
                  lw x30, 120(x27)
                  lw x31, 124(x27)
                  addi x27, x27, 124
                  add x15, x27, zero
                  csrrw x27, 0x340, x27
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
