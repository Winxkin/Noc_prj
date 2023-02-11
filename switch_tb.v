`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:01:39 12/04/2022
// Design Name:   switch
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/switch_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: switch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module switch_tb;

	// Inputs
	reg [7:0] In_L;
	reg [7:0] In_N;
	reg [7:0] In_E;
	reg [7:0] In_W;
	reg [7:0] In_S;
	reg clk;
	reg rst;
	reg [2:0] request_L;
	reg [2:0] request_N;
	reg [2:0] request_E;
	reg [2:0] request_S;
	reg [2:0] request_W;
	reg full_L;
	reg full_N;
	reg full_S;
	reg full_W;
	reg full_E;

	// Outputs
	wire [7:0] Out_L;
	wire [7:0] Out_N;
	wire [7:0] Out_E;
	wire [7:0] Out_W;
	wire [7:0] Out_S;
	wire grant_L;
	wire grant_N;
	wire grant_E;
	wire grant_S;
	wire grant_W;

	// Instantiate the Unit Under Test (UUT)
	switch uut (
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
		.clk(clk), 
		.rst(rst), 
		.request_L(request_L), 
		.request_N(request_N), 
		.request_E(request_E), 
		.request_S(request_S), 
		.request_W(request_W), 
		.grant_L(grant_L), 
		.grant_N(grant_N), 
		.grant_E(grant_E), 
		.grant_S(grant_S), 
		.grant_W(grant_W),
		.full_L(full_L),
		.full_N(full_N),
		.full_E(full_E),
		.full_S(full_S),
		.full_W(full_W)
	);

	initial begin
		// Initialize Inputs
		In_L = 1;
		In_N = 2;
		In_E = 3;
		In_W = 4;
		In_S = 5;
		clk = 0;
		rst = 0;
		request_L = 7;
		request_N = 7;
		request_E = 7;
		request_S = 7;
		request_W = 7;
		full_L = 1;
		full_N = 1;
		full_S = 0;
		full_W = 0;
		full_E = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
      #100;
		request_E = 0;
		request_S = 1;
		request_L = 2;
		request_N = 3;
		request_W = 4;
		#100;
		request_L = 7;
		request_N = 7;
		request_E = 7;
		request_S = 7;
		request_W = 7;
		// Add stimulus here

	end
    
always #10 clk = ~clk;
      
endmodule

