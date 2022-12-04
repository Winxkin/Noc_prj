`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:54:10 12/04/2022
// Design Name:   switch_atriber
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/switch_atrivber_tb.v
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

module switch_atrivber_tb;

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
		.select_W(select_W)
	);

	initial begin
		// Initialize Inputs
		request_L = 3'b000;
		request_N = 3'b010;
		request_E = 3'b011;
		request_S = 3'b100;
		request_W = 3'b111;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
      #100;
		request_L = 3'b111;
		request_N = 3'b100;
		request_E = 3'b001;
		request_S = 3'b100;
		request_W = 3'b111;
		#100;
		request_L = 3'b111;
		request_N = 3'b111;
		request_E = 3'b111;
		request_S = 3'b111;
		request_W = 3'b111;
		// Add stimulus here

	end
   always #10 clk = ~clk;
endmodule

