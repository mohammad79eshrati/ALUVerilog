`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:00 07/04/2019 
// Design Name: 
// Module Name:    One_Bit_count 
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
module One_Bit_count(clk , number1 , number2 , balance , output_result );
		input clk;
		input [4:0] number1;
		input [4:0] number2;
		
		output reg [31:0] output_result;
		output reg        balance;
		
		reg [3:0] calculate ; // it is 4 bit because the biggest result is when number1 == number2 == 11111 the result == 10 and it is 4 bit
		
		reg [4:0] count;// one counter for balance
		reg [4:0] index;// calculate index
		
		always @( posedge clk ) begin
		
			calculate = 0;
			
			for ( index = 0 ; index < 5 ; index = index + 1 )
				
				calculate = calculate + number1[ index ] + number2[ index ];
			
				
			for ( count = 0 , index = 0 ; index < 4 ; index = index + 1) 
				
					if ( calculate[ index ] == 1'b1 )
						count = count + 1;
				
			// result is balance
			if ( count % 2 == 1'b0 )
				balance = 1'b1;
			
			// result is not balance	
			else 
				balance = 1'b0;
				
		output_result = {{  28{calculate[3]} } , calculate};
	
	end// end of always block
endmodule
