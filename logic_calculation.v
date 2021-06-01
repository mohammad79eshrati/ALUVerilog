`timescale 1ns / 1ps

module logic_calculation(  clk , num1 , num2 , operator , out , odd_balance , equality );
		input clk;
		input [4:0]     num1;
		input [4:0]     num2;
		input [5:0] 	 operator;//one hot encoding
		
		output reg 		 odd_balance ;
		output reg 		 equality ;
		output reg 		 [31:0] out;
		
	
		
		parameter [5:0] Add = 6'b000001;
		parameter [5:0] Sub = 6'b000010;
		parameter [5:0] Mul = 6'b000100;
		parameter [5:0] One_Bits_Number = 6'b001000;
		parameter [5:0] XOR = 6'b010000;
		parameter [5:0] Bigger_number = 6'b100000;
		
		wire [31:0] out1;// add
		wire [31:0] out2;// sub
		wire [31:0] out3;// mul
		wire [31:0] out4;// one bit counter
		wire [31:0] out5;// xor
		wire [31:0] out6;// bigger number
		
		wire balance1;// add
		wire balance2;// sub
		wire balance3;// mul
		wire balance4;// one bit counter
		wire balance5;// xor
		wire balance6;// bigger number
		
		
		Add add ( .number1(num1), .number2(num2), .balance(balance1), .output_result(out1) ,  .clk(clk) );
		Sub sub ( .clk(clk) , .number1(num1), .number2(num2), .balance(balance2), .output_result(out2) );
		Mul mul ( .clk(clk), .number1(num1), .number2(num2), .balance(balance3), .output_result(out3) );
	   One_Bit_count oneBitCount ( .clk(clk), .number1(num1), .number2(num2), .balance(balance4), .output_result(out4) );
		XOR xor_calculator ( .clk(clk), .number1(num1), .number2(num2), .balance(balance5), .output_result(out5));
		Bigger_Number biggerNumber (.clk(clk), .number1(num1), .number2(num2), .balance(balance6), .output_result(out6));


		
		always @( posedge  clk ) begin
			if ( num1 == num2 )
				equality = 1'b1;
				
			else
				equality = 1'b0;
		
			 case( operator )
			 
				Add :
					begin
						
						out = out1;
						odd_balance = balance1;
						
					end

				Sub :
					begin 
					
						out = out2;
						odd_balance = balance2;
					
					end

				Mul : 
					begin
					
						out = out3;
						odd_balance = balance3;
					
					end 

				One_Bits_Number :
					begin
					
						out = out4;
						odd_balance = balance4;
					
					end
					
				XOR :
					begin
						
						out = out5;
						odd_balance = balance5;
					
					end
					
				Bigger_number :
					begin
						out = out6;
						odd_balance = balance6;
					end
			 
			 endcase
	
		
			end //end of always blocks
		
		
		
		
		
endmodule
