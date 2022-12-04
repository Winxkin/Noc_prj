`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:09:06 12/04/2022
// Design Name:   switch_atriber
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/switch_atriber_tb.v
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

module switch_atriber_tb;

	// Inputs
	reg [2:0] request_L;
	reg [2:0] request_N;
	reg [2:0] request_E;
	reg [2:0] request_S;
	reg [2:0] request_W;
	reg clk;
	reg rst;

	// Outputs
	wire [2:0] select_L;
	wire [2:0] select_N;
	wire [2:0] select_E;
	wire [2:0] select_S;
	wire [2:0] select_W;
	wire ack_L;
	wire ack_N;
	wire ack_E;
	wire ack_S;
	wire ack_W;

	// Instantiate the Unit Under Test (UUT)
	switch_atriber uut (
		.request_L(request_L), 
		.request_N(request_N), 
		.request_E(request_E), 
		.request_S(request_S), 
		.request_W(request_W), 
		.clk(clk), 
		.rst(rst), 
		.select_L(select_L), 
		.select_N(select_N), 
		.select_E(select_E), 
		.select_S(select_S), 
		.select_W(select_W), 
		.ack_L(ack_L), 
		.ack_N(ack_N), 
		.ack_E(ack_E), 
		.ack_S(ack_S), 
		.ack_W(ack_W)
	);

	initial begin
		// Initialize Inputs
		request_L = 0;
		request_N = 0;
		request_E = 0;
		request_S = 0;
		request_W = 0;
		clk = 0;
		rst = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
      rst = 1;
		#25;
		rst = 0;
		#20;
		request_E = 1;
		// Add stimulus here

	end
     
	always #10 clk = ~clk;
endmodule

