`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:34:53 11/28/2022
// Design Name:   input_flow_control
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/input_flow_control_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: input_flow_control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module input_flow_control_tb;

	// Inputs
	reg val;
	reg full;

	// Outputs
	wire ret;
	wire write;

	// Instantiate the Unit Under Test (UUT)
	input_flow_control uut (
		.val(val), 
		.full(full), 
		.ret(ret), 
		.write(write)
	);

	initial begin
		// Initialize Inputs
		val = 0;
		full = 0;

		// Wait 100 ns for global reset to finish
		#100;
		val = 1;
		#100
		full = 1;
		#100
		val = 0;
		
        
		// Add stimulus here

	end
      
endmodule

