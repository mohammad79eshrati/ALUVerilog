`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:09:43 06/29/2019 
// Design Name: 
// Module Name:    Floating_Point 
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
module Floating_Point(   clk ,integer_num , mantissa_num , equality , balance ,  out);
	input clk;
	input [4:0] integer_num;
	input [4:0] mantissa_num;
	
	output reg 			balance;
	output reg			equality;
	output reg [31:0] out;

	integer i;// index 
	integer j;//another index 
	integer k;
	integer shift;
	
	reg [4:0] a;// a copy of integer_number for calculate 
	reg temp[22:0];
	
	reg 	 	  sign;
	reg [7:0]  exponent;
	reg [22:0] mantissa;
	
	initial begin
		
		shift = 0;
		i = 0;
		j = 0;
		
		end


	always @( posedge clk ) begin
			
			sign = 1'b0 ; // sign == 0  because in this project the numbers are always positive
			
			//  checking equality
			if ( integer_num == mantissa_num )
				equality = 1'b1;
			else 
				equality = 1'b0;
				
			
			// find index of last 1 bit for shift
			for ( i = 0 ; i < 5 ; i = i + 1 ) begin
				 if ( integer_num[i] == 1'b1 ) begin
					shift = i;
					
					end
					
				end
				
			// calculate exponent part of float	
			exponent = shift + 127;
		
		
			
		
		i = 22 ;
		// calculate decimal part of mantissa
		
		
			
			// add shifting part of integer_num to mantissa
			i = 22 ;
			j = shift - 1;
			while ( j > -1 && i > -1 )
				begin 
				
					mantissa[ i ] = integer_num[ j ];
					i = i - 1 ;
					j = j - 1;
				
				end
			
			
		
			
			
		a = mantissa_num;
		//evaluate mantissa
		for ( k = 22 ;  k >= 0   ; k = k - 1 ) begin
				
				a = a * 2;
				
				if ( a >= 10 ) begin
					a = a - 10;
					mantissa[  k ] = 1'b1;
					
				
				end
				
				else if ( a < 10 )
					mantissa[  k  ] = 1'b0;
					
				
			end

			// calculate output 
			out = { sign ,  exponent ,  mantissa  };
			
			// check balancing
			for ( i = 0 , j = 0 ; i < 31 ; i = i + 1 )
					if ( out[i] == 1'b1 )
						j = j + 1;
			
			// check balance 
			if ( j % 2 == 1'b0 )
				balance = 1'b1;
				
			else 
				balance = 1'b0;
	end


endmodule
