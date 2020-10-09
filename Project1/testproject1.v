// Verilog test fixture created from schematic C:\Users\USER\Desktop\S0454012\ha\Pro1.sch - Fri Apr 07 11:51:46 2017

`timescale 1ns / 1ps

module Pro1_Pro1_sch_tb();

// Inputs
   reg [3:0] b;
   reg [3:0] a;
   reg M;

// Output
   wire [4:0] R;
   wire sign;

// Bidirs

// Instantiate the UUT
   Pro1 UUT (
		.b(b), 
		.a(a), 
		.R(R), 
		.sign(sign), 
		.M(M)
   );
// Initialize Inputs
      initial begin		
		b = 0;
		a = 0;
		M = 0;
		#100
		b = 9;
		a = 13;
		M = 0;
		#100
		b = 9;
		a = 13;
		M = 1;
		#100
		b = 13;
		a = 9;
		M = 1;
		end
endmodule
