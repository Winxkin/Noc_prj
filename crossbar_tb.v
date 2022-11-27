`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:45:19 11/27/2022
// Design Name:   crossbar
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/crossbar_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: crossbar
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module crossbar_tb;

	// Inputs
	reg [7:0] In_L;
	reg [7:0] In_N;
	reg [7:0] In_E;
	reg [7:0] In_W;
	reg [7:0] In_S;
	reg [2:0] Select_L;
	reg [2:0] Select_N;
	reg [2:0] Select_E;
	reg [2:0] Select_W;
	reg [2:0] Select_S;

	// Outputs
	wire [7:0] Out_L;
	wire [7:0] Out_N;
	wire [7:0] Out_E;
	wire [7:0] Out_W;
	wire [7:0] Out_S;

	// Instantiate the Unit Under Test (UUT)
	crossbar uut (
		.In_L(In_L), 
		.In_N(In_N), 
		.In_E(In_E), 
		.In_W(In_W), 
		.In_S(In_S), 
		.Out_L(Out_L), 
		.Out_N(Out_N), 
		.Out_E(Out_E), 
		.Out_W(Out_W), 
		.Out_S(Out_S), 
		.Select_L(Select_L), 
		.Select_N(Select_N), 
		.Select_E(Select_E), 
		.Select_W(Select_W), 
		.Select_S(Select_S)
	);

	initial begin
		// Initialize Inputs
		In_L = 0;
		In_N = 0;
		In_E = 0;
		In_W = 0;
		In_S = 0;
		Select_L = 0;
		Select_N = 0;
		Select_E = 0;
		Select_W = 0;
		Select_S = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
        
		// Add stimulus here
		In_L = 1;
		In_N = 2;
		In_E = 3;
		In_W = 4;
		In_S = 5;
		Select_L = 0;
		Select_N = 0;
		Select_E = 0;
		Select_W = 0;
		Select_S = 0;
		#100
		Select_L = 1;
		Select_N = 1;
		Select_E = 1;
		Select_W = 1;
		Select_S = 1;
		#100
		Select_L = 2;
		Select_N = 2;
		Select_E = 2;
		Select_W = 2;
		Select_S = 2;
		#100
		Select_L = 3;
		Select_N = 3;
		Select_E = 3;
		Select_W = 3;
		Select_S = 3;
		#100
		Select_L = 4;
		Select_N = 4;
		Select_E = 4;
		Select_W = 4;
		Select_S = 4;
		#100
		Select_L = 5;
		Select_N = 5;
		Select_E = 5;
		Select_W = 5;
		Select_S = 5;
		
	end
	
	
      
endmodule

