`timescale 1ns/1ps


module control (
    // IN
    input logic [6:0] op,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic alu_zero,

    // OUT
    output logic [2:0] alu_control,
    output logic [1:0] imm_source,
    output logic mem_write,
    output logic reg_write,
    output logic alu_source,
    output logic [1:0] write_back_source,
    output logic pc_source
);

/**
* MAIN DECODER
*/

logic [1:0] alu_op;
logic branch;
logic jump;

always_comb begin
    reg_write         = 1'b0; // Required to aviod latchup warnings
    imm_source        = 2'b00;// varaibales assinged in one case and not assigned in anaother case, get treated as memory/reg
    mem_write         = 1'b0;  // for example varaible set in I type, but not in B type, carry the same assignment in  Btype
    alu_op            = 2'b00; // simulator sees this as an latch (its a latch by defination)
    alu_source        = 1'b0; // So we assign a initial value to all the varaibles, see EOF for explanation
    write_back_source = 2'b00;
    branch            = 1'b0;
    jump              = 1'b0;
    case (op)
        // I-type
        7'b0000011 : begin
            reg_write = 1'b1;
            imm_source = 2'b00;
            mem_write = 1'b0;
            alu_op = 2'b00;
            alu_source = 1'b1; //imm
            write_back_source = 2'b01; //memory_read
	        branch = 1'b0;
	        jump = 1'b0;
        end
        // ALU I Type
        7'b0010011 : begin
            reg_write = 1'b1;
            imm_source = 2'b00;
            alu_source = 1'b1; //imm
            mem_write = 1'b0;
            alu_op = 2'b10;
            write_back_source = 2'b00; //alu_result
            branch = 1'b0;
            jump = 1'b0;
         end
        // S-Type
        7'b0100011 : begin
            reg_write = 1'b0;
            imm_source = 2'b01;
            mem_write = 1'b1;
            alu_op = 2'b00;
            alu_source = 1'b1; //imm
	        branch = 1'b0;
	        jump = 1'b0;
        end
        // R-Type
        7'b0110011 : begin
            reg_write = 1'b1;
            mem_write = 1'b0;
            alu_op = 2'b10;
            alu_source = 1'b0; //reg2
            write_back_source = 2'b00; //alu_result
	        branch = 1'b0;
	        jump = 1'b0;
        end
	   // B-Type
	   7'b1100011 : begin
            reg_write = 1'b0;
            imm_source = 2'b10;
            alu_source = 1'b0;
            mem_write = 1'b0;
            alu_op = 2'b01;
            branch = 1'b1;
	        jump = 1'b0;
        end
        // J-Type
        7'b1101111 : begin
            reg_write = 1'b1;
            imm_source = 2'b11;
            mem_write = 1'b0;
            write_back_source = 2'b10; 
            branch = 1'b0;
            jump = 1'b1;
        end
        // EVERYTHING ELSE
        default: begin
            reg_write = 1'b0;
            imm_source = 2'b00;
            mem_write = 1'b0;
            alu_op = 2'b00;
	        reg_write = 1'b0;
            mem_write = 1'b0;
	    jump = 1'b0;
        end
    endcase
end

/**
* ALU DECODER
*/

always_comb begin
    case (alu_op)
        // LW, SW
        2'b00 : alu_control = 3'b000;
        // R-Types
        2'b10 : begin
            case (func3)
                // ADD (and later SUB with a different F7)
                3'b000 : alu_control = 3'b000;
		        // AND
		        3'b111 : alu_control = 3'b010; 
		        //OR
		        3'b110 : alu_control = 3'b011;
                // ALL THE OTHERS
                default: alu_control = 3'b111;
            endcase
        end
	// BEQ
        2'b01 : alu_control = 3'b001;
        default: alu_control = 3'b111;
    endcase
end

//logic assert_branch;
//
//always_comb begin : branch_logic_decode
//    case (func3)
//        // BEQ
//        3'b000 : assert_branch = alu_zero & branch;
//        // BLT, BLTU
//        F3_BLT, F3_BLTU : assert_branch = alu_last_bit & branch;
//        // BNE
//        F3_BNE : assert_branch = ~alu_zero & branch;
//        // BGE, BGEU
//        F3_BGE, F3_BGEU : assert_branch = ~alu_last_bit & branch;
//        default : assert_branch = 1'b0;
//    endcase
//end
//
//assign pc_source = (assert_branch & (op == 7'b1100011)) | jump;
    
assign pc_source = (alu_zero & branch) | jump;


endmodule

///// EXPLANATION BELOW///////////////////

//1. How is a Latch formed?In Verilog, an always_comb block is a set of instructions for building combinational gates (AND, OR, NOT).If you write a case statement but don't cover a specific signal in a specific branch, you are effectively telling the hardware:"If the Opcode is BEQ, change the branch signal to 1. If the Opcode is LW, I'm not going to mention the branch signal at all."The hardware logic then asks: "If it's LW, what should I do with the branch wire? Should it be 0? Should it be 1?"Because you didn't give an instruction for the LW case, the hardware assumes you want the signal to stay exactly what it was before. To "stay what it was," the hardware must create a physical loop or a storage element to remember the old state. That storage element is a Latch.
//
//2. Why Latches are Bad for CPUsIn a CPU, you want your control signals to be "clean."If you run a BEQ instruction, branch becomes 1.If the next instruction is a LW, and you didn't explicitly set branch to 0, the Latch will keep branch at 1.The Result: Your LW instruction will accidentally try to branch!
//
//3. How Default Values Solve the LatchWhen you assign values at the very beginning of the always_comb block, you are creating a "Default Path" for every single wire.Think of it like a waterfall of logic:Verilogalways_comb begin
//    branch = 1'b0; // <--- This is the "Floor". Every signal starts here.
//
//    case (op)
//        7'b1100011: begin // BEQ
//            branch = 1'b1; // This "overwrites" the 0.
//        end
//        7'b0000011: begin // LW
//            // We don't mention 'branch' here.
//            // Since we set it to 0 at the top, it STAYS 0.
//        end
//    endcase
//end
//By setting the value at the top, you have covered every possible path. Even if your case statement doesn't mention a signal, the signal already has a value (the default).The hardware result: Instead of a Latch (storage), the compiler builds a simple piece of combinational logic that defaults to 0 unless the specific BEQ condition is met.Summary Table: Latch vs. CombinationalScenarioLogic InterpretationHardware ResultNo Default + Missing Case"Keep the old value if not specified."Latch (Memory element)With Default + Missing Case"Use the default value if not specified."Gates (Pure logic)
//
//Pro-Tip for Verilator is extra strict. It checks every single logic variable inside an always_comb. If there is even a $0.00001\%$ chance a signal doesn't get assigned a value, it will throw that Warning-LATCH. Using the "Default at Top" method is the industry-standard way to keep your code clean and your warnings at zero.
