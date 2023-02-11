`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:22:19 02/11/2023
// Design Name:   output_controler
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/output_controller_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: output_controler
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module output_controller_tb;

	// Inputs
	reg clk;
	reg rst;
	reg ret;
	reg [7:0] Data_in;

	// Outputs
	wire full_ret;
	wire [7:0] Data_out;
	wire val;

	// Instantiate the Unit Under Test (UUT)
	output_controler uut (
		.clk(clk), 
		.rst(rst), 
		.ret(ret), 
		.full_ret(full_ret), 
		.Data_in(Data_in), 
		.Data_out(Data_out), 
		.val(val)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		ret = 0;
		Data_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#20;
		rst = 0;
		#20;
		Data_in = 5;
		#20;
		Data_in = 0;
        
		// Add stimulus here

	end
   
always #10 clk = ~clk;   
endmodule

