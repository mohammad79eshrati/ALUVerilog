`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:20 07/04/2019 
// Design Name: 
// Module Name:    Bigger_Number 
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
module Bigger_Number(  clk , number1 , number2 , balance , output_result );
	
	input clk;
	input [4:0] number1;
	input [4:0] number2;

	output reg [31:0] output_result;
	output reg			balance;
	
	reg [4:0] calculate;// it is 5 bit because the numbers are 5 bit
	
	reg [5:0] count;// one counter for balance 
	reg [4:0] index;// calculate index
	
	always @( posedge clk ) begin
		
			calculate = number1 > number2 ? number1 : number2 ;
	
			for ( count = 0 , index = 0 ; index < 5 ; index = index + 1) 
				begin
					if ( calculate[ index ] == 1'b1 )
						count = count + 1;
				end
				
			// result is balance
			if ( count % 2 == 1'b0 )
				balance = 1'b1;
			
			// result is not balance	
			else 
				balance = 1'b0;
				
		output_result = {{  27{calculate[4]} } , calculate};
	
	end// end of always block
	
endmodule
