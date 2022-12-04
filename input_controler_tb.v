`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:56:18 12/01/2022
// Design Name:   input_controler
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/input_controler_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: input_controler
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module input_controler_tb;

	// Inputs
	reg [1:0] X_cur;
	reg [1:0] Y_cur;
	reg [7:0] Data_in;
	reg empty;
	reg clk;
	reg rst;
	reg grant;

	// Outputs
	wire [7:0] Data_out;
	wire read;
	wire [2:0] register;

	// Instantiate the Unit Under Test (UUT)
	input_controler uut (
		.X_cur(X_cur), 
		.Y_cur(Y_cur), 
		.Data_in(Data_in), 
		.Data_out(Data_out), 
		.empty(empty), 
		.clk(clk), 
		.rst(rst), 
		.read(read), 
		.register(register),
		.grant(grant)
	);

	initial begin
		// Initialize Inputs
		X_cur = 2'b10;
		Y_cur = 2'b10;
		Data_in = 8'b00000110; /*data,y_des,x_des*/
		empty = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#30
		rst = 0;
		#10
		Data_in = 8'b00000111; /*data,y_des,x_des*/
		#20
		Data_in = 8'b00001110; /*data,y_des,x_des*/
		empty = 1;
        
		// Add stimulus here

	end
	
	always #10 clk = ~clk;
      
endmodule

