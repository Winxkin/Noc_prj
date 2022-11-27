`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:57:09 11/27/2022
// Design Name:   FIFO_Buffer
// Module Name:   D:/LuanVan/Xlinx/Noc_prj/Noc_prj/FIFO_buffer_tb.v
// Project Name:  Noc_prj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FIFO_Buffer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FIFO_buffer_tb;

	// Inputs
	reg [7:0] Data_in;
	reg clk;
	reg rst;
	reg write;
	reg read;

	// Outputs
	wire [7:0] Data_out;
	wire empty;
	wire full;

	// Instantiate the Unit Under Test (UUT)
	FIFO_Buffer uut (
		.Data_in(Data_in), 
		.clk(clk), 
		.rst(rst), 
		.write(write), 
		.read(read), 
		.Data_out(Data_out), 
		.empty(empty), 
		.full(full)
	);

	initial begin
		// Initialize Inputs
		Data_in = 0;
		clk = 0;
		rst = 0;
		write = 0;
		read = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rst = 1;
		#15
		rst = 0;
		#20
		write = 1;
		Data_in = 1;
		#20
		Data_in = 2;
		#20
		Data_in = 3;
		#20
		Data_in = 4;
		#20
		Data_in = 5;
		#20
		Data_in = 6;
		#20
		Data_in = 7;
		#20
		Data_in = 8;
		#20
		Data_in = 9;
		#20
		Data_in = 10;
		#20
		Data_in = 11;
		//#30
		//write = 0;
		//#20
		//read = 1;
		
	end
	
	always #10 clk = ~clk;
      
endmodule

