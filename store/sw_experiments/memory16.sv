module memory #(
    parameter WORDS = 65535
) (
    input logic clk,
    input logic [15:0] address,
    input logic [15:0] write_data,
    input logic write_enable,
    input logic rst_n,

    output logic [15:0] read_data
);

/*
* This memory is byte addressed
* But have no support for mis-aligned write nor reads.
*/

reg [15:0] mem [0:WORDS-1];  // Memory array of words (16-bits)

always @(posedge clk) begin
    // reset logic
    if (rst_n == 1'b0) begin
        for (int i = 0; i < WORDS; i++) begin
            mem[i] <= 16'b0;  
        end
    end
    else if (write_enable) begin
        // Ensure the address is aligned to a word boundary
        // If not, we ignore the write
        if (address[1:0] == 2'b00) begin 
            //here, address[15:2] is the word index
            mem[address[15:0]] <= write_data;
        end
    end
end

// Read logic
always_comb begin
    //here, address[15:2] is the word index
    read_data = mem[address[15:0]]; 
end

endmodule