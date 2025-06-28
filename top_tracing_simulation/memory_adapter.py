# memory_adapter.py
import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.handle import SimHandleBase
from memory_model import MemoryModel  # Your earlier model

class IbexMemoryAdapter:
    
    def __init__(self, dut: SimHandleBase):
        self.dut = dut
        self.mem = MemoryModel()
        self.pending_request = None

    async def monitor_and_respond(self):
        cycle = 0
        while True and not self.mem.read(0x20008,4)==1:
            cycle += 1
            print(f"rvfi_va lid: {self.dut.rvfi_valid.value}, cycle: {cycle}")
            await RisingEdge(self.dut.clk_i)
            print(f"Data request signal: {self.dut.data_req_o.value}")
            print(f"Instruction request signal: {self.dut.instr_req_o.value}")
            if bool(self.dut.data_req_o.value):
                print("Data request received")
                
                addr = int(self.dut.data_addr_o.value)
                is_write = bool(self.dut.data_we_o.value)
                be = int(self.dut.data_be_o.value)
                wdata = self.dut.data_wdata_o.value

                self.dut.data_gnt_i.value= 1    
                await RisingEdge(self.dut.clk_i)
                self.dut.data_gnt_i.value= 0

                if is_write:
                    # Apply byte enables
                    # data_bytes = wdata.to_bytes(4, 'little')
                    # for i in range(4):
                    #     if (be >> i) & 1:
                    #         self.mem.write(addr & ~0x3, int.from_bytes(
                    #             data_bytes, 'little'))
                    
                    self.mem.write(addr, wdata)
                else:
                    await Timer(2, units='ns')  # delay to simulate latency
                    read_data = self.mem.read(addr)
                    self.dut.data_rdata_i.value= read_data
                    self.dut.data_err_i.value= 0
                    self.dut.data_rvalid_i.value= 1
                    await RisingEdge(self.dut.clk_i)
                    self.dut.data_rvalid_i.value=0
            
            elif bool(self.dut.instr_req_o.value):
                print("Instruction request received")
                
                addr = int(self.dut.instr_addr_o.value)
                self.dut.instr_gnt_i.value=1
                await RisingEdge(self.dut.clk_i)
                self.dut.instr_gnt_i.value= 0

                await Timer(2, units='ns')
                instruction = self.mem.read(addr)
                self.dut.instr_rdata_i.value= instruction
                self.dut.instr_err_i.value= 0
                self.dut.instr_rvalid_i.value=1        
                


    async def monitor_and_respond(self):
        """Monitor the DUT and respond to memory and instruction fetch requests."""
        await RisingEdge(self.dut.clk_i)
        if self.dut.data_req_o.value:
            addr = int(self.dut.data_addr_o.value)
            is_write =self.dut.data_we_o.value
            self.dut.data_gnt_i.value = 1
            i=0
            for i in range(4):
                if self.dut.data.be_o[i].value:
                    if is_write:
                        #Segregate wdata into 4 bytes
                        # For example, if wdata is 0x12345678, then:
                        # b0 = 0x78 b1 = 0x56 b2 = 0x34 b3 = 0x12
                        # Apply byte enables if necessary
                        # b3b2b1b0 
                      self.mem.write(addr + i, int(self.dut.data_wdata_o[8*i:8*(i+1)].value), 1)
           
                    else:
                        try:
                        #Read certain bytes based on byte enables
                            read_data = self.mem.read(addr + i)
                            self.dut.data_rdata_i[8*i:8*(i+1)].value = read_data

                        except Exception as e:
                            self.dut.data_err_i.value = 1
                            self.dut.data_rdata.i.value = 0
                            self.dut.data_rvalid_i.value = 0

            self.dut.data_rvalid_i.value = 1
            self.dut.data_err_i.value = 0


                

                


