`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:07:45 12/03/2022
// Design Name:   round_robin
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/round_robin_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: round_robin
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module round_robin_tb;

	// Inputs
	reg [2:0] request_L;
	reg [2:0] request_N;
	reg [2:0] request_E;
	reg [2:0] request_S;
	reg [2:0] request_W;
	reg clk;
	reg rst;
	reg [2:0] direction;

	// Outputs
	wire [2:0] select;

	// Instantiate the Unit Under Test (UUT)
	round_robin uut (
		.request_L(request_L), 
		.request_N(request_N), 
		.request_E(request_E), 
		.request_S(request_S), 
		.request_W(request_W), 
		.clk(clk), 
		.rst(rst), 
		.direction(direction), 
		.select(select)
	);

	initial begin
		// Initialize Inputs
		request_L = 3'b001;
		request_N = 3'b000;
		request_E = 3'b001;
		request_S = 3'b011;
		request_W = 3'b001;
		clk = 0;
		rst = 0;
		direction = 3'b001;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
        
		// Add stimulus here

	end
	always #10 clk = ~clk;
      
endmodule

