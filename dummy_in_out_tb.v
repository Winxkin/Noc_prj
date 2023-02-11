`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:47:55 02/11/2023
// Design Name:   dummy_in_out
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/dummy_in_out_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dummy_in_out
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dummy_in_out_tb;

	// Inputs
	reg [1:0] X_address;
	reg [1:0] Y_address;
	reg clk;
	reg rst;
	reg grant;
	reg [7:0] Data_in;

	// Outputs
	wire [7:0] Data_out;
	wire [7:0] Data_bus;
	wire [2:0] register;
	wire full;
	wire val;
	wire ret;

	// Instantiate the Unit Under Test (UUT)
	dummy_in_out uut (
		.X_address(X_address), 
		.Y_address(Y_address), 
		.clk(clk), 
		.rst(rst), 
		.grant(grant), 
		.Data_in(Data_in), 
		.Data_out(Data_out), 
		.register(register), 
		.full(full),
		.val(val),
		.ret(ret),
		.Data_bus(Data_bus)
	);

	initial begin
		// Initialize Inputs
		X_address = 0;
		Y_address = 0;
		clk = 0;
		rst = 0;
		grant = 0;
		Data_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#20;
		rst = 0;
		#20;
		Data_in = 5;
		grant = 0;
		#20;
		Data_in = 7;
		#20;
		Data_in = 8;
		#20;
		Data_in = 9;
		grant = 1;
		#20;
		Data_in = 10;
		#20;
		Data_in = 11;
		#20;
		Data_in = 12;
		#20;
		Data_in = 0;
		#40;
    
		// Add stimulus here

	end
   
	always #10 clk = ~clk;
endmodule

