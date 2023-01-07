`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:28:24 01/04/2023
// Design Name:   router_5p
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/router_5p_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: router_5p
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module router_5p_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [1:0] X_address;
	reg [1:0] Y_address;
	reg [7:0] Data_in_L;
	reg [7:0] Data_in_N;
	reg [7:0] Data_in_S;
	reg [7:0] Data_in_E;
	reg [7:0] Data_in_W;
	reg val_in_L;
	reg val_in_N;
	reg val_in_S;
	reg val_in_E;
	reg val_in_W;
	reg ret_out_L;
	reg ret_out_N;
	reg ret_out_S;
	reg ret_out_E;
	reg ret_out_W;

	// Outputs
	wire [7:0] Data_out_L;
	wire [7:0] Data_out_N;
	wire [7:0] Data_out_S;
	wire [7:0] Data_out_E;
	wire [7:0] Data_out_W;
	wire ret_in_L;
	wire ret_in_N;
	wire ret_in_S;
	wire ret_in_E;
	wire ret_in_W;
	wire val_out_L;
	wire val_out_N;
	wire val_out_S;
	wire val_out_E;
	wire val_out_W;

	// Instantiate the Unit Under Test (UUT)
	router_5p uut (
		.clk(clk), 
		.rst(rst), 
		.X_address(X_address), 
		.Y_address(Y_address), 
		.Data_in_L(Data_in_L), 
		.Data_in_N(Data_in_N), 
		.Data_in_S(Data_in_S), 
		.Data_in_E(Data_in_E), 
		.Data_in_W(Data_in_W), 
		.Data_out_L(Data_out_L), 
		.Data_out_N(Data_out_N), 
		.Data_out_S(Data_out_S), 
		.Data_out_E(Data_out_E), 
		.Data_out_W(Data_out_W), 
		.val_in_L(val_in_L), 
		.val_in_N(val_in_N), 
		.val_in_S(val_in_S), 
		.val_in_E(val_in_E), 
		.val_in_W(val_in_W), 
		.ret_in_L(ret_in_L), 
		.ret_in_N(ret_in_N), 
		.ret_in_S(ret_in_S), 
		.ret_in_E(ret_in_E), 
		.ret_in_W(ret_in_W), 
		.ret_out_L(ret_out_L), 
		.ret_out_N(ret_out_N), 
		.ret_out_S(ret_out_S), 
		.ret_out_E(ret_out_E), 
		.ret_out_W(ret_out_W), 
		.val_out_L(val_out_L), 
		.val_out_N(val_out_N), 
		.val_out_S(val_out_S), 
		.val_out_E(val_out_E), 
		.val_out_W(val_out_W)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		X_address = 2'b01;
		Y_address = 2'b01;
		Data_in_L = 0; //X = 00 , y = 00
		Data_in_N = 0;
		Data_in_S = 0;
		Data_in_E = 0;
		Data_in_W = 0;
		val_in_L = 0;
		val_in_N = 0;
		val_in_S = 0;
		val_in_E = 0;
		val_in_W = 0;
		ret_out_L = 0;
		ret_out_N = 0;
		ret_out_S = 0;
		ret_out_E = 0;
		ret_out_W = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
		Data_in_L = 8'b11110000; //X = 00 , y = 00
		val_in_L = 1;
		ret_out_L = 0;
		Data_in_S = 8'b10010000; //X = 00 , y = 00
		val_in_S = 1;
		#200;
		Data_in_L = 0;
		val_in_L = 0; 
        
		// Add stimulus here

	end
   
always #10 clk = ~clk;   
endmodule

