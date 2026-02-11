module memory #(
    parameter WORDS = 64,
    parameter mem_init = ""
) (
    input logic clk,
    input logic [31:0] address,
    input logic [31:0] write_data,
    input logic write_enable,
    input logic rst_n,

    output logic [31:0] read_data
);

reg [31:0] mem [0:WORDS-1];  // Memory array of words (32-bits)

initial begin
    if (mem_init != "") begin
        $readmemh(mem_init, mem);
    end  // Load memory for simulation
end

always @(posedge clk) begin
    // reset logic
    if (rst_n == 1'b0) begin
        for (int i = 0; i < WORDS; i++) begin
            mem[i] <= 32'b0;  
        end
    end
    else if (write_enable) begin
        // Ensure the address is aligned to a word boundary
        // If not, we ignore the write
        // if (address[1:0] == 2'b00) begin 
            //here, address[31:2] is the word index
            // mem[address[31:0]] <= write_data;
        // end
        $display("DEBUG: Memory Write Enable is HIGH. Attempting to write to index %d", address);
        mem[address[31:0]] <= write_data;
    end
end

// Read logic
always_comb begin
    //here, address[31:2] is the word index
    read_data = mem[address[31:0]]; 
end

endmodule