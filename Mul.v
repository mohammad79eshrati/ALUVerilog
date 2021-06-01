`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:12 07/04/2019 
// Design Name: 
// Module Name:    Mul 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Mul( clk  , number1 , number2 , balance, output_result );
		input clk;
		input [4:0] number1;
		input [4:0] number2;
		
		output reg [31:0] output_result;
		output reg        balance;
		
		reg [9:0] calculate ;//it is 10 bit because the biggest result is 31 * 31 = 961, that is 10 bit
		
		reg [4:0] count;// one counter for balance
		reg [4:0] index;// calculate index
		
		always @( posedge clk ) begin
		
			calculate = number1 * number2;
	
			for ( count = 0 , index = 0 ; index < 10 ; index = index + 1) 
				if ( calculate[ index ] == 1'b1 )
					count = count + 1;
		
			// result is balance
			if ( count % 2 == 1'b0 )
				balance = 1'b1;
			
			// result is not balance	
			else 
				balance = 1'b0;
				
		output_result = {{  22{calculate[9]} } , calculate};
	
	end// end of always block
		
		

endmodule
