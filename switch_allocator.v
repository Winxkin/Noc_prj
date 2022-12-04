`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:27 12/03/2022 
// Design Name: 
// Module Name:    switch_allocator 
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
module switch_allocator
#(parameter N_REGISTER = 3,
  parameter N_BIT_SEL = 2)
( input wire [N_REGISTER-1:0] request_L, request_N, request_E, request_S, request_W,
  input clk, rst,
  output reg [N_BIT_SEL-1:0] Select_L, Select_N,Select_E, Select_W, Select_S,
  output wire ack_L, ack_N, ack_E, ack_W, ack_S
 );
parameter DEFAULT = 3'd5;
parameter LOCAL = 3'd0;
parameter NORTH = 3'd1;
parameter EAST = 3'd2;
parameter SOUTH = 3'd3;
parameter WEST = 3'd4;

parameter NOT_REG = 3'b111;

assign ack_L = (request_L == 3'b111) ? 1'b0 : 1'b1;
assign ack_N = (request_N == 3'b111) ? 1'b0 : 1'b1;
assign ack_E = (request_E == 3'b111) ? 1'b0 : 1'b1;
assign ack_W = (request_W == 3'b111) ? 1'b0 : 1'b1;
assign ack_S = (request_S == 3'b111) ? 1'b0 : 1'b1;

always@(posedge clk,posedge rst)
	begin
		if(rst)
			begin
				Select_L = DEFAULT;
				Select_N = DEFAULT;
				Select_E = DEFAULT;
				Select_W = DEFAULT;
				Select_S = DEFAULT;
			end
		else
			begin
				
			end
	end

endmodule
