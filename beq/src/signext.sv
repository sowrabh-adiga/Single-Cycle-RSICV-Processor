// signext.sv

module signext (
    // IN
    input logic [24:0] raw_src,
    input logic [1:0] imm_source,

    // OUT (immediate)
    output logic [31:0] immediate
);

logic [11:0] gathered_imm;

always_comb begin
    case (imm_source)
        // For I-Types
        2'b00 : gathered_imm = raw_src[24:13];
        // For S-types
        2'b01 : gathered_imm = {raw_src[24:18],raw_src[4:0]};
	// For B-types
        2'b10 : gathered_imm = {raw_src[0],raw_src[23:18],raw_src[4:1],1'b0};
        default: gathered_imm = 12'b0;
    endcase
end

// assign immediate = {{20{gathered_imm[11]}}, gathered_imm};
assign immediate = (imm_source == 2'b10) ? 
                   {{20{raw_src[24]}}, gathered_imm} : 
                   {{20{gathered_imm[11]}}, gathered_imm};    
endmodule


// https://fraserinnovations.com/risc-v/risc-v-instruction-set-explanation/
// above link has the best explanations on each type of riscv instructions



// Instruction guide for b type
// Map of index

// raw_src       = [0, 1, 2, 3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24]
// instruction   = [7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31]
// 


// Instruction[6:0] = opcode
// Instruction[7] = immediate[11]
// Instruction[11:8] = immediate[4:1]
// Instruction[12:14] = func3
// Instruction[15:19] = RS1
// Instruction[24:20] = RS2
// Instruction[30:25] = immediate[10:5]
// Instruction[31] = immediate[12]

// immediate represenst memory offset, so having immedite[0] = 0, is the only choice.
// The memory is multiples of 2, immediate[0] ensures that the number is always even and mutiple of 2

