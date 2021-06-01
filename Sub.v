`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:10 07/04/2019 
// Design Name: 
// Module Name:    Sub 
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
module Sub( clk , number1 , number2 , balance , output_result );
	input clk;
	input [4:0] number1;
	input [4:0] number2;

	output reg 			balance;
	output reg [31:0] output_result;
	
	reg [4:0] calculate;// it is 5 bit because biggest result is 31 - 0 = 31 that is 5 bit
	
	reg [4:0] count;// 1 counter for balance
	reg [4:0] index;// calculate index
	
	always @( posedge clk ) begin
		
			calculate = number1 - number2;
	
			for ( count = 0 , index = 0 ; index < 5 ; index = index + 1) 
				if ( calculate[ index ] == 1'b1 )
					count = count + 1;
		
			// result is balance
			if ( count % 2 == 1'b0 )
				balance = 1'b1;
			
			// result is not balance	
			else 
				balance = 1'b0;
				
		output_result = {{  27{calculate[4]} } , calculate};
	
	end// end of always block

endmodule
