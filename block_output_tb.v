`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:21:21 12/18/2022
// Design Name:   block_output
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/block_output_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: block_output
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module block_output_tb;

	// Inputs
	reg [7:0] Data_in;
	reg clk;
	reg rst;
	reg ret;

	// Outputs
	wire [7:0] Data_out;
	wire val;
	wire full;

	// Instantiate the Unit Under Test (UUT)
	block_output uut (
		.Data_in(Data_in), 
		.Data_out(Data_out), 
		.clk(clk), 
		.rst(rst), 
		.ret(ret), 
		.val(val), 
		.full(full)
	);

	initial begin
		// Initialize Inputs
		Data_in = 0;
		clk = 0;
		rst = 0;
		ret = 1;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
		#20;
      Data_in = 8'b11111010; 
		#40;
		Data_in = 8'b11111011;
		#30;
		ret = 0;
		// Add stimulus here

	end
	
	always #10 clk = ~clk;
      
endmodule

