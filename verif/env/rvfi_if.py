import cocotb
from cocotb.handle import SimHandleBase
import pyuvm

class RVFI_Interface(metaclass=pyuvm.Singleton):
    def __init__(self, dut:SimHandleBase):
        self.dut = dut
        self.rvfi_ext_debug_mode      = dut.rvfi_ext_debug_mode
        self.rvfi_ext_debug_req       = dut.rvfi_ext_debug_req
        self.rvfi_ext_ic_scr_key_valid= dut.rvfi_ext_ic_scr_key_valid
        self.rvfi_ext_irq_valid       = dut.rvfi_ext_irq_valid
        self.rvfi_ext_mcycle          = dut.rvfi_ext_mcycle
        self.rvfi_ext_mhpmcounters    = dut.rvfi_ext_mhpmcounters
        self.rvfi_ext_mhpmcountersh   = dut.rvfi_ext_mhpmcountersh
        self.rvfi_ext_nmi             = dut.rvfi_ext_nmi
        self.rvfi_ext_nmi_int         = dut.rvfi_ext_nmi_int
        self.rvfi_ext_post_mip        = dut.rvfi_ext_post_mip
        self.rvfi_ext_pre_mip         = dut.rvfi_ext_pre_mip
        self.rvfi_ext_rf_wr_suppress  = dut.rvfi_ext_rf_wr_suppress
        self.rvfi_halt                = dut.rvfi_halt
        self.rvfi_insn                = dut.rvfi_insn
        self.rvfi_intr                = dut.rvfi_intr
        self.rvfi_ixl                 = dut.rvfi_ixl
        self.rvfi_mem_addr            = dut.rvfi_mem_addr
        self.rvfi_mem_rdata           = dut.rvfi_mem_rdata
        self.rvfi_mem_rmask           = dut.rvfi_mem_rmask
        self.rvfi_mem_wdata           = dut.rvfi_mem_wdata
        self.rvfi_mem_wmask           = dut.rvfi_mem_wmask
        self.rvfi_mode                = dut.rvfi_mode
        self.rvfi_order               = dut.rvfi_order
        self.rvfi_pc_rdata            = dut.rvfi_pc_rdata
        self.rvfi_pc_wdata            = dut.rvfi_pc_wdata
        self.rvfi_rd_addr             = dut.rvfi_rd_addr
        self.rvfi_rd_wdata            = dut.rvfi_rd_wdata
        self.rvfi_rs1_addr            = dut.rvfi_rs1_addr
        self.rvfi_rs1_rdata           = dut.rvfi_rs1_rdata
        self.rvfi_rs2_addr            = dut.rvfi_rs2_addr
        self.rvfi_rs2_rdata           = dut.rvfi_rs2_rdata
        self.rvfi_rs3_addr            = dut.rvfi_rs3_addr
        self.rvfi_rs3_rdata           = dut.rvfi_rs3_rdata
        self.rvfi_trap                = dut.rvfi_trap
        self.rvfi_valid               = dut.rvfi_valid


class Dummy():
    def __init__(self):
        print("Dummy class instantiated")