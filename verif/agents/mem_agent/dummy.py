import cocotb
import pyuvm
from pyuvm import *
from .mem_seq_item import mem_seq_item
from .mem_sequencer import mem_sequencer
import random
from typing import TYPE_CHECKING

if TYPE_CHECKING:
    # This helps with type checking but avoids circular imports
    pass

class mem_base_seq(uvm_sequence):
    """Base sequence for memory operations"""
    def __init__(self, name="mem_base_seq"):
        super().__init__(name)
        self.mem_model = None

    async def body(self):
        # Get memory model from ConfigDB
        self.mem_model = ConfigDB().get(self, "", "memory_model")
        if self.mem_model is None:
            self.logger.error("Memory model not found in ConfigDB")

    def get_mem_sequencer(self):
        """Helper method to get the properly typed sequencer"""
        if not isinstance(self.sequencer, mem_sequencer):
            self.logger.error(f"Expected mem_sequencer, got {type(self.sequencer)}")
            raise TypeError("Sequence must be started on a mem_sequencer")
        return self.sequencer

class mem_response_seq(mem_base_seq):
    """Sequence that responds to memory requests (instruction and data)"""
    def __init__(self, name="mem_response_seq"):
        super().__init__(name)
        self.response_delay_min = 0
        self.response_delay_max = 3
        self.error_probability = 0.0  # Probability of injecting errors

    async def body(self):
        await super().body()
        # Get the properly typed sequencer
        mem_seqr = self.get_mem_sequencer()
        
        while True:
            # Wait for a request from the monitor via sequencer's analysis fifo
            try:
                # Use the typed mem_sequencer that has addr_ph_port
                req_item = await mem_seqr.addr_ph_port.get()
                
                # Create response item
                rsp_item = mem_seq_item("mem_response")
                
                # Add random delay
                delay = random.randint(self.response_delay_min, self.response_delay_max)
                for _ in range(delay):
                    await self.start_item(rsp_item)
                    rsp_item.instr_req = 0
                    rsp_item.data_req = 0
                    await self.finish_item(rsp_item)
                
                # Process the request
                await self.process_request(req_item, rsp_item)
                
                # Send response
                await self.start_item(rsp_item)
                await self.finish_item(rsp_item)
                
            except Exception as e:
                self.logger.error(f"Error in mem_response_seq: {e}")
                break

    async def process_request(self, req_item, rsp_item):
        """Process memory request and generate appropriate response"""
        
        # Handle instruction request
        if hasattr(req_item, 'instr_req') and req_item.instr_req:
            rsp_item.instr_req = 1
            rsp_item.instr_addr = req_item.instr_addr
            
            if random.random() < self.error_probability:
                rsp_item.instr_err = 1
                rsp_item.instr_rdata = 0
            else:
                rsp_item.instr_err = 0
                try:
                    # Read instruction from memory model (4 bytes)
                    rsp_item.instr_rdata = self.mem_model.read(req_item.instr_addr, 4)
                except:
                    rsp_item.instr_err = 1
                    rsp_item.instr_rdata = 0
            
            rsp_item.instr_rvalid = 1
            rsp_item.instr_rdata_intg = 0  # Add integrity if needed
        
        # Handle data request
        if hasattr(req_item, 'data_req') and req_item.data_req:
            rsp_item.data_req = 1
            rsp_item.data_addr = req_item.data_addr
            rsp_item.data_we = req_item.data_we
            rsp_item.data_be = req_item.data_be
            
            if random.random() < self.error_probability:
                rsp_item.data_err = 1
                if not req_item.data_we:  # Read operation
                    rsp_item.data_rdata = 0
            else:
                rsp_item.data_err = 0
                
                if req_item.data_we:  # Write operation
                    try:
                        # Calculate write size based on byte enable
                        write_size = bin(req_item.data_be).count('1')
                        self.mem_model.write(req_item.data_addr, req_item.data_wdata, write_size)
                    except:
                        rsp_item.data_err = 1
                else:  # Read operation
                    try:
                        # Calculate read size based on byte enable
                        read_size = bin(req_item.data_be).count('1')
                        rsp_item.data_rdata = self.mem_model.read(req_item.data_addr, read_size)
                    except:
                        rsp_item.data_err = 1
                        rsp_item.data_rdata = 0
            
            rsp_item.data_rvalid = 1
            rsp_item.data_rdata_intg = 0  # Add integrity if needed

class mem_random_seq(mem_base_seq):
    """Sequence for generating random memory responses (for testing)"""
    def __init__(self, name="mem_random_seq", num_items=10):
        super().__init__(name)
        self.num_items = num_items

    async def body(self):
        await super().body()
        
        for i in range(self.num_items):
            req = mem_seq_item(f"mem_item_{i}")
            
            await self.start_item(req)
            
            # Randomize the request
            req.instr_req = random.randint(0, 1)
            req.data_req = random.randint(0, 1)
            
            if req.instr_req:
                req.instr_addr = random.randint(0x80000000, 0x80100000) & 0xFFFFFFFC  # Word aligned
                req.instr_rdata = random.randint(0, 0xFFFFFFFF)
                req.instr_err = 0
                req.instr_rvalid = 1
            
            if req.data_req:
                req.data_addr = random.randint(0x80000000, 0x80100000) & 0xFFFFFFFC  # Word aligned
                req.data_we = random.randint(0, 1)
                req.data_be = random.randint(1, 15)  # Byte enable mask
                if req.data_we:
                    req.data_wdata = random.randint(0, 0xFFFFFFFF)
                else:
                    req.data_rdata = random.randint(0, 0xFFFFFFFF)
                req.data_err = 0
                req.data_rvalid = 1
            
            await self.finish_item(req)

class mem_directed_seq(mem_base_seq):
    """Sequence for directed memory tests"""
    def __init__(self, name="mem_directed_seq", addr_list=None, data_list=None):
        super().__init__(name)
        self.addr_list = addr_list or [0x80000080, 0x80000084, 0x80000088]
        self.data_list = data_list or [0x12345678, 0xABCDEF00, 0xDEADBEEF]

    async def body(self):
        await super().body()
        
        for addr, data in zip(self.addr_list, self.data_list):
            # Write operation
            write_req = mem_seq_item("write_req")
            await self.start_item(write_req)
            write_req.data_req = 1
            write_req.data_addr = addr
            write_req.data_we = 1
            write_req.data_be = 0xF  # Full word write
            write_req.data_wdata = data
            write_req.data_rvalid = 1
            write_req.data_err = 0
            await self.finish_item(write_req)
            
            # Read operation
            read_req = mem_seq_item("read_req")
            await self.start_item(read_req)
            read_req.data_req = 1
            read_req.data_addr = addr
            read_req.data_we = 0
            read_req.data_be = 0xF  # Full word read
            read_req.data_rvalid = 1
            read_req.data_err = 0
            if self.mem_model:
                read_req.data_rdata = self.mem_model.read(addr, 4)
            await self.finish_item(read_req)

# Test sequences that control other sequences
class mem_test_all_seq(uvm_sequence):
    """Main test sequence that runs multiple sub-sequences"""
    async def body(self):
        # Get sequencer from ConfigDB (like TinyALU example)
        seqr = ConfigDB().get(None, "", "mem_sequencer")
        
        # Run different sequences
        random_seq = mem_random_seq("random_seq", num_items=10)
        directed_seq = mem_directed_seq("directed_seq")
        
        await random_seq.start(seqr)
        await directed_seq.start(seqr)

class mem_response_handler_seq(uvm_sequence):
    """Long-running sequence that handles memory responses"""
    def __init__(self, name="mem_response_handler_seq"):
        super().__init__(name)
        self.mem_sequencer = None
    
    async def body(self):
        # This sequence runs on the sequencer and handles incoming requests
        mem_model = ConfigDB().get(self, "", "memory_model")
        # Get the typed sequencer
        self.mem_sequencer = self.sequencer
        
        while True:
            try:
                # Wait for request from monitor via sequencer's analysis fifo
                req_item = await self.mem_sequencer.addr_ph_port.get()
                
                # Create and send response
                rsp_item = mem_seq_item("mem_response")
                await self.start_item(rsp_item)
                
                # Process request and generate response
                if hasattr(req_item, 'instr_req') and req_item.instr_req:
                    rsp_item.instr_req = 1
                    rsp_item.instr_rvalid = 1
                    rsp_item.instr_rdata = mem_model.read(req_item.instr_addr, 4) if mem_model else 0
                    rsp_item.instr_err = 0
                
                if hasattr(req_item, 'data_req') and req_item.data_req:
                    rsp_item.data_req = 1
                    rsp_item.data_rvalid = 1
                    if req_item.data_we:  # Write
                        if mem_model:
                            mem_model.write(req_item.data_addr, req_item.data_wdata, 4)
                    else:  # Read
                        rsp_item.data_rdata = mem_model.read(req_item.data_addr, 4) if mem_model else 0
                    rsp_item.data_err = 0
                
                await self.finish_item(rsp_item)
                
            except Exception as e:
                self.logger.error(f"Error in mem_response_handler_seq: {e}")
                break