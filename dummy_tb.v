`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:32:54 01/08/2023
// Design Name:   dummy
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/dummy_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dummy
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dummy_tb;

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
	reg full_L;
	reg full_N;
	reg full_E;
	reg full_S;
	reg full_W;

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
	wire [2:0] r_L;
	wire [2:0] r_N;
	wire [2:0] r_E;
	wire [2:0] r_S;
	wire [2:0] r_W;

	// Instantiate the Unit Under Test (UUT)
	dummy uut (
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
		.val_out_W(val_out_W), 
		.full_L(full_L), 
		.full_N(full_N), 
		.full_E(full_E), 
		.full_S(full_S), 
		.full_W(full_W), 
		.r_L(r_L), 
		.r_N(r_N), 
		.r_E(r_E), 
		.r_S(r_S), 
		.r_W(r_W)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		X_address = 0;
		Y_address = 0;
		Data_in_L = 0;
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
		full_L = 0;
		full_N = 0;
		full_E = 0;
		full_S = 0;
		full_W = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#25;
		rst = 0;
      #15;
		Data_in_L = 8'b00001111;
		val_in_L = 1;
		Data_in_N = 8'b00011100;
		val_in_N = 1;
		Data_in_S = 8'b00111111;
		val_in_S = 1;
		Data_in_W = 8'b01001111;
		val_in_W = 1;
		Data_in_E = 8'b01011111;
		val_in_E = 1;
		#20;
      //Data_in_L = 8'b10001111;
	
		val_in_L = 0;
		val_in_N = 0;
		val_in_S = 0;
		val_in_E = 0;
		val_in_W = 0;
		Data_in_L = 0;
		Data_in_N = 0;
		Data_in_S = 0;
		Data_in_E = 0;
		Data_in_W = 0;
		// Add stimulus here

	end
     
	always #10 clk = ~clk;
      
endmodule

