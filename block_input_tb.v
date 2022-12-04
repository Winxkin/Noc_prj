`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:53:50 12/01/2022
// Design Name:   block_input
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/block_input_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: block_input
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module block_input_tb;

	// Inputs
	reg [1:0] X_cur;
	reg [1:0] Y_cur;
	reg clk;
	reg rst;
	reg val;
	reg [7:0] Data_in;
	reg grant;
	// Outputs
	wire ret;
	wire [7:0] Data_out;
	wire [2:0] register;

	// Instantiate the Unit Under Test (UUT)
	block_input uut (
		.X_cur(X_cur), 
		.Y_cur(Y_cur), 
		.clk(clk), 
		.rst(rst), 
		.val(val), 
		.ret(ret), 
		.Data_in(Data_in), 
		.Data_out(Data_out), 
		.register(register),
		.grant(grant)
	);

	initial begin
		// Initialize Inputs
		X_cur = 2'b00;
		Y_cur = 2'b00;
		clk = 0;
		rst = 0;
		val = 0;
		Data_in = 0;
		grant = 0;
		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#20
		rst = 0;
		#10
		Data_in = 8'b10101110;
		#50
		val = 1; /*request sent package to router*/
		#20
		Data_in = 8'b11111010;
		#20
		Data_in = 8'b11111000;
		#20
		Data_in = 8'b11110010; /*package correct address*/
      #20
		Data_in = 8'b10111000;
		#20
		val = 0;
		#20;
		grant = 1;
		
		// Add stimulus here

	end
   
	always #10 clk = ~clk;
endmodule

