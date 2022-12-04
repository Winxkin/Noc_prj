`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:14:08 12/04/2022
// Design Name:   switch_atriber
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/switch_atrber_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: switch_atriber
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module switch_atrber_tb;

	// Inputs
	reg [2:0] request_L;
	reg [2:0] request_N;
	reg [2:0] request_E;
	reg [2:0] request_S;
	reg [2:0] request_W;
	reg clk;
	reg rst;

	// Outputs
	wire grant_L;
	wire grant_N;
	wire grant_E;
	wire grant_S;
	wire grant_W;
	wire [2:0] select_L;
	wire [2:0] select_N;
	wire [2:0] select_E;
	wire [2:0] select_S;
	wire [2:0] select_W;

	// Instantiate the Unit Under Test (UUT)
	switch_atriber uut (
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
		.clk(clk), 
		.rst(rst), 
		.select_L(select_L), 
		.select_N(select_N), 
		.select_E(select_E), 
		.select_S(select_S), 
		.select_W(select_W)
	);

	initial begin
		// Initialize Inputs
		request_L = 7;
		request_N = 7;
		request_E = 7;
		request_S = 7;
		request_W = 7;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
		request_W = 0;
      #100;
		request_E = 0;
		// Add stimulus here

	end
   
	always #10 clk = ~clk;
endmodule

