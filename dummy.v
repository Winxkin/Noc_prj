`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:58:10 01/07/2023 
// Design Name: 
// Module Name:    dummy 
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
module dummy
#(	parameter DATA_WIDTH = 8,
	parameter N_ADD = 2,
	parameter N_REGISTER = 3)
(input clk,rst,
 input [N_ADD-1:0] X_address , Y_address,
 input [DATA_WIDTH-1:0]Data_in_L, Data_in_N, Data_in_S, Data_in_E, Data_in_W,
 output [DATA_WIDTH-1:0]Data_out_L, Data_out_N, Data_out_S, Data_out_E, Data_out_W,
 input val_in_L, val_in_N, val_in_S, val_in_E, val_in_W,    /*signal request sent package from neighbor router*/
 output ret_in_L, ret_in_N, ret_in_S, ret_in_E, ret_in_W,   /*ack for neighbor router know that buffer is full or not*/
 input ret_out_L, ret_out_N, ret_out_S, ret_out_E, ret_out_W,  /*if ret = 1 meaning the input buffer of neighbor is full*/
 output val_out_L, val_out_N, val_out_S, val_out_E, val_out_W,	/*request to neighbor router to sent package*/
 input full_L, full_N, full_E, full_S, full_W, /*connect to OCM*/
 output [N_REGISTER-1:0] r_L, r_N, r_E, r_S, r_W
	 );
/*define data wire*/
wire [DATA_WIDTH-1:0] In_L, In_N, In_E, In_W, In_S;
//wire [DATA_WIDTH-1:0] Out_L, Out_N, Out_E, Out_W, Out_S;
wire [N_REGISTER-1:0] request_L, request_N, request_E, request_S, request_W;
wire grant_L,grant_N,grant_E,grant_S,grant_W;
//wire full_L, full_N, full_E, full_S, full_W;

switch SW(.clk(clk),.rst(rst),
				.In_L(In_L),.In_N(In_N),.In_E(In_E),.In_W(In_W),.In_S(In_S),
				.Out_L(Data_out_L),.Out_N(Data_out_N),.Out_E(Data_out_E),.Out_W(Data_out_W),.Out_S(Data_out_S),
				.request_L(request_L),.request_N(request_N),.request_E(request_E),.request_S(request_S),.request_W(request_W),
				.grant_L(grant_L),.grant_N(grant_N),.grant_E(grant_E),.grant_S(grant_S),.grant_W(grant_W),
				.full_L(full_L),.full_N(full_N),.full_E(full_E),.full_S(full_S),.full_W(full_W));

/*5 port IN*/

block_input INPUT_L(.X_cur(X_address),.Y_cur(Y_address),.clk(clk),.rst(rst),
							.Data_in(Data_in_L),.Data_out(In_L),.register(request_L),
							.grant(grant_L),.val(val_in_L),.ret(ret_in_L));

block_input INPUT_N(.X_cur(X_address),.Y_cur(Y_address),.clk(clk),.rst(rst),
							.Data_in(Data_in_N),.Data_out(In_N),.register(request_N),
							.grant(grant_N),.val(val_in_N),.ret(ret_in_N));

block_input INPUT_E(.X_cur(X_address),.Y_cur(Y_address),.clk(clk),.rst(rst),
							.Data_in(Data_in_E),.Data_out(In_E),.register(request_E),
							.grant(grant_E),.val(val_in_E),.ret(ret_in_E));

block_input INPUT_W(.X_cur(X_address),.Y_cur(Y_address),.clk(clk),.rst(rst),
							.Data_in(Data_in_W),.Data_out(In_W),.register(request_W),
							.grant(grant_W),.val(val_in_W),.ret(ret_in_W));

block_input INPUT_S(.X_cur(X_address),.Y_cur(Y_address),.clk(clk),.rst(rst),
							.Data_in(Data_in_S),.Data_out(In_S),.register(request_S),
							.grant(grant_S),.val(val_in_S),.ret(ret_in_S));
						

endmodule
