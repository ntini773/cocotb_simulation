import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.handle import SimHandleBase
from collections import deque
from memory_model import MemoryModel
import random

class IbexMemoryAdapter:
    def __init__(self, dut: SimHandleBase):
        self.dut = dut
        self.mem = MemoryModel()
        self.req_queue = deque()  # Queue to store incoming memory requests
        self.processing = False   # Flag to indicate an ongoing response

    async def monitor_and_respond_data(self):
        """Continuously monitor the DUT and respond to LSU memory accesses."""
        while True:
            await RisingEdge(self.dut.clk_i)

            # Default values for response signals
            self.dut.data_gnt_i.value = 0
            self.dut.data_rvalid_i.value = 0
            self.dut.data_err_i.value = 0

            # Grant phase: Detect and latch new request
            if self.dut.data_req_o.value and len(self.req_queue) < 4:  # Limit queue size
                addr = int(self.dut.data_addr_o.value)
                is_write = int(self.dut.data_we_o.value)
                be = [int(self.dut.data_be_o[i].value) for i in range(4)]
                wdata = int(self.dut.data_wdata_o.value)

                # Store request in queue
                self.req_queue.append({
                    'addr': addr,
                    'is_write': is_write,
                    'be': be,
                    'wdata': wdata
                })

                # Grant this request (1-cycle pulse)
                self.dut.data_gnt_i.value = 1

            # Response phase: If not busy and queue has pending requests
            if not self.processing and self.req_queue:
                self.processing = True
                req = self.req_queue.popleft()
                cocotb.start_soon(self._respond(req))

    async def _respond(self, req):
        """Internal coroutine to simulate delayed memory response."""
        delay_cycles = random.randint(1, 3)  # Simulate stall (Figures 6-8)
        for _ in range(delay_cycles):
            await RisingEdge(self.dut.clk_i)

        if req['is_write']:
            for i in range(4):
                if req['be'][i]:
                    byte = (req['wdata'] >> (8 * i)) & 0xFF
                    self.mem.write(req['addr'] + i, byte, 1)
            # No rvalid for write
        else:
            try:
                rdata = 0
                for i in range(4):
                    if req['be'][i]:
                        byte = self.mem.read(req['addr'] + i)
                        rdata |= (byte << (8 * i))
                self.dut.data_rdata_i.value = rdata
                self.dut.data_rvalid_i.value = 1
                self.dut.data_err_i.value = 0
            except:
                self.dut.data_rdata_i.value = 0
                self.dut.data_rvalid_i.value = 1
                self.dut.data_err_i.value = 1

            await RisingEdge(self.dut.clk_i)
            self.dut.data_rvalid_i.value = 0
            self.dut.data_err_i.value = 0

        self.processing = False

    async def monitor_and_respond_instr(self):
        """Continuously monitor the DUT and respond to instruction fetch requests."""
        while True:
            await RisingEdge(self.dut.clk_i)

            # Default values for response signals
            self.dut.instr_gnt_i.value = 0
            self.dut.instr_rvalid_i.value = 0
            self.dut.instr_err_i.value = 0

            # Grant phase: Detect and latch new request
            if self.dut.instr_req_o.value:
                addr = int(self.dut.instr_addr_o.value)
                self.dut.instr_gnt_i.value = 1

                # Response phase: Simulate instruction fetch
                # await Timer(2, units='ns')
                try:
                    instruction = self.mem.read(addr)
                    self.dut.instr_rdata_i.value = instruction
                    self.dut.instr_rvalid_i.value = 1
                    self.dut.instr_err_i.value = 0
                except:         
                    self.dut.instr_rdata_i.value = 0
                    self.dut.instr_rvalid_i.value = 1
                    self.dut.instr_err_i.value = 1
            await RisingEdge(self.dut.clk_i)
            self.dut.instr_gnt_i.value = 0
            self.dut.instr_rvalid_i.value = 0
            self.dut.instr_err_i.value = 0
