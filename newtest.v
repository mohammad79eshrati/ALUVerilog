`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:20:08 07/06/2019
// Design Name:   Floating_Point
// Module Name:   D:/verilog/ALU/LogicCalculation_floatingPoint/newtest.v
// Project Name:  LogicCalculation_floatingPoint
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Floating_Point
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module newtest;

	// Inputs
	reg clk;
	reg [4:0] integer_num;
	reg [4:0] mantissa_num;

	// Outputs
	wire equality;
	wire balance;
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	Floating_Point uut (
		.clk(clk), 
		.integer_num(integer_num), 
		.mantissa_num(mantissa_num), 
		.equality(equality), 
		.balance(balance), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		integer_num = 0;
		mantissa_num = 0;

		// Wait 100 ns for global reset to finish
		#100;
      integer_num = 13;
		mantissa_num = 2;  
		// Add stimulus here

	end
      
		initial forever #40 clk = ~clk;
		
endmodule

