# memory_adapter.py
import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.handle import SimHandleBase
from memory_model import SystemMemory  # Your earlier model

class IbexMemoryAdapter:
    def __init__(self, dut: SimHandleBase):
        self.dut = dut
        self.mem = SystemMemory()
        self.pending_request = None

    async def monitor_and_respond(self):
        while True:
            await RisingEdge(self.dut.clk_i)

            if self.dut.data_req_o.value:
                addr = int(self.dut.data_addr_o.value)
                is_write = bool(self.dut.data_we_o.value)
                be = int(self.dut.data_be_o.value)
                wdata = int(self.dut.data_wdata_o.value)

                self.dut.data_gnt_i <= 1
                await RisingEdge(self.dut.clk_i)
                self.dut.data_gnt_i <= 0

                if is_write:
                    # Apply byte enables
                    data_bytes = wdata.to_bytes(4, 'little')
                    for i in range(4):
                        if (be >> i) & 1:
                            self.mem.write_word(addr & ~0x3, int.from_bytes(
                                data_bytes, 'little'))
                else:
                    await Timer(20, units='ns')  # delay to simulate latency
                    read_data = self.mem.read_word(addr)
                    self.dut.data_rdata_i <= read_data
                    self.dut.data_err_i <= 0
                    self.dut.data_rvalid_i <= 1
                    await RisingEdge(self.dut.clk_i)
                    self.dut.data_rvalid_i <= 0
