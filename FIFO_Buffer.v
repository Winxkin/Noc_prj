`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:28:15 11/27/2022 
// Design Name: 
// Module Name:    FIFO_Buffer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FIFO_Buffer
#(parameter DATA_WIDTH = 8)
(input [DATA_WIDTH-1:0] Data_in,
 input clk, rst, en, write, read,
 output reg [DATA_WIDTH-1:0] Data_out,
 output empty, full
 );
 
 reg [2:0] count = 0;
 reg [2:0] read_couter = 0;
 reg [2:0] write_couter = 0;
 reg [DATA_WIDTH-1:0] fifo [7:0];
 
 assign empty = (count==0)? 1'b1 : 1'b0;
 assign full = (count==8)? 1'b1 : 1'b0;
 
 always @(posedge clk)
	begin
		if(en==0);
		else
			begin
			//check rst
				if(rst)
					begin
						read_couter = 0;
						write_couter = 0;
					end
			//read buffer
				else if( read == 1'b1 && count!=0)
					begin
						Data_out = fifo[read_couter];
						read_couter = read_couter + 1;
					end
			//write buffer
				else if(write == 1'b1 && count<8)
					begin
						fifo[write_couter] = Data_in;
						write_couter = write_couter + 1;
					end
			end
			
			//check read_couter and write_couter
			if(write_couter == 8)
				write_couter = 0;
				
		   if(read_couter == 8)
				read_couter = 0;
				
			if(read_couter > write_couter)
				count = read_couter - write_couter;
			else if(write_couter > read_couter)
				count = write_couter - read_couter;
	end


endmodule
