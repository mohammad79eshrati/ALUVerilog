`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:22:44 07/05/2019
// Design Name:   Main
// Module Name:   D:/verilog/LogicCalculation_floatingPoint/ALUTest.v
// Project Name:  LogicCalculation_floatingPoint
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUTest;

	// Inputs
	reg mode;
	reg [4:0] number1;
	reg [4:0] number2;
	reg [5:0] operator_mode;
	reg reset;
	reg Clk;

	// Outputs
	wire balanceBit;
	wire equalityBit;
	wire [31:0] output_num;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.balanceBit(balanceBit), 
		.equalityBit(equalityBit), 
		.output_num(output_num), 
		.mode(mode), 
		.number1(number1), 
		.number2(number2), 
		.operator_mode(operator_mode), 
		.reset(reset), 
		.Clk(Clk)
	);

	initial begin
		// Initialize Inputs
		mode = 0;
		number1 = 0;
		number2 = 0;
		operator_mode = 0;
		reset = 0;
		Clk = 0;

		// Wait 100 ns for global reset to finish
		
		#300;
		mode = 1;
		number1 =8;
		number2 = 7;
       
		// Add stimulus here
		/*
		
		#300;
		mode = 0;
		number1 = 7;
		number2 = 6;
		operator_mode = 6'b000001;
		reset = 0;
		
		#300;
		mode = 0;
		number1 = 7;
		number2 = 6;
		operator_mode = 6'b000010;
		reset = 0;
		
		#300;
		mode = 0;
		number1 = 7;
		number2 = 6;
		operator_mode = 6'b000100;
		reset = 0;
		
		#300;
		mode = 0;
		number1 = 7;
		number2 = 6;
		operator_mode = 6'b001000;
		reset = 0;
		
		#300;
		mode = 0;
		number1 = 7;
		number2 = 6;
		operator_mode = 6'b010000;
		reset = 0;

		#300;
		mode = 0;
		number1 = 7;
		number2 = 6;
		operator_mode = 6'b100000;
		reset = 0;
*/
	end
	
	initial forever #50 Clk = ~Clk;
      
endmodule

