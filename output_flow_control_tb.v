`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:49:36 12/18/2022
// Design Name:   ouput_flow_control
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/output_flow_control_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ouput_flow_control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module output_flow_control_tb;

	// Inputs
	reg empty;
	reg ret;

	// Outputs
	wire val;
	wire read;

	// Instantiate the Unit Under Test (UUT)
	ouput_flow_control uut (
		.empty(empty), 
		.ret(ret), 
		.val(val), 
		.read(read)
	);

	initial begin
		// Initialize Inputs
		empty = 0;
		ret = 0;

		// Wait 100 ns for global reset to finish
		#100;
      empty = 1;  
		#100;
		ret = 1;
		#100;
		empty = 0;
		ret = 0;
		
		// Add stimulus here

	end
      
endmodule

