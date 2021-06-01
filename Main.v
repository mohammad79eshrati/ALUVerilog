`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:39 06/29/2019 
// Design Name: 
// Module Name:    Main 
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
module Main( balanceBit , equalityBit , output_num , mode , number1 , number2 , operator_mode , reset , Clk );
		
		
		input  mode;
		input [4:0] number1;
		input [4:0] number2;
		input [5:0] operator_mode;
		input reset;
		input Clk;
		
		output reg 			balanceBit;
		output reg 			equalityBit;
		output reg [31:0] output_num;
		
		
		wire [31:0] out1;// mode A
		wire [31:0] out2;// mode B
		
		wire balance1;// mode A
		wire balance2;// mode B
		
		wire equality1;// mode A
		wire equality2;// mode B
		
			
		logic_calculation mode_A ( 
			.clk(Clk), 
			.num1(number1), 
			.num2(number2),
			.operator(operator_mode),
			.out(out1),
			.odd_balance(balance1), 
			.equality(equality1) 
		);
		
		Floating_Point mode_B ( 
			.clk(Clk), 
			.integer_num(number1), 
			.mantissa_num(number2),
			.equality(equality2),
			.balance(balance2),
			.out(out2) 
			);
				
		always @( posedge Clk ) begin
				
				if ( reset == 1'b1 )
					output_num = 0;
					
				else if ( reset == 1'b0 ) begin
				
					if ( mode == 1'b0  ) begin // mode A
						
						output_num = out1;
						balanceBit = balance1;
						equalityBit = equality1;
						
					end // mode A
					
					else if ( mode == 1'b1 ) begin // mode B
					
						output_num = out2;
						balanceBit = balance2;
						equalityBit = equality2;						
						
					end// mode B
				
				end // end of else ( reset != 0 )
		
		end // end of always block 
	
	

endmodule
