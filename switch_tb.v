`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:25:37 12/04/2022
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
	reg [2:0] request_L;
	reg [2:0] request_N;
	reg [2:0] request_E;
	reg [2:0] request_S;
	reg [2:0] request_W;
	reg clk;
	reg rst;

	// Outputs
	wire [7:0] Out_L;
	wire [7:0] Out_N;
	wire [7:0] Out_E;
	wire [7:0] Out_W;
	wire [7:0] Out_S;
	// Instantiate the Unit Under Test (UUT)
	switch uut (
		.In_L(In_L), 
		.In_N(In_N), 
		.In_E(In_E), 
		.In_W(In_W), 
		.In_S(In_S), 
		.request_L(request_L), 
		.request_N(request_N), 
		.request_E(request_E), 
		.request_S(request_S), 
		.request_W(request_W), 
		.clk(clk), 
		.rst(rst), 
		.Out_L(Out_L), 
		.Out_N(Out_N), 
		.Out_E(Out_E), 
		.Out_W(Out_W), 
		.Out_S(Out_S)
	);

	initial begin
		// Initialize Inputs
		In_L = 0;
		In_N = 0;
		In_E = 0;
		In_W = 0;
		In_S = 0;
		request_L = 3'b111;
		request_N = 3'b111;
		request_E = 3'b111;
		request_S = 3'b111;
		request_W = 3'b111;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
	   rst = 1;
		#25;
		rst = 0;
		#10;
		In_L = 2;
		request_L = 3'b000;
		#100;
		In_N = 3;
		In_L = 0;
      request_N = 3'b010;
		request_L = 3'b111;
		#30;
		
		// Add stimulus here

	end
   
	always #10 clk = ~clk;   
endmodule

