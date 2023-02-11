`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:39:47 02/11/2023 
// Design Name: 
// Module Name:    dummy_in_out 
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
module dummy_in_out
#(	parameter DATA_WIDTH = 8,
	parameter N_ADD = 2,
	parameter N_REGISTER = 3)
(input [N_ADD-1:0] X_address,Y_address,  /*address of router in networt on chip*/
input clk,rst,
input grant,
input [DATA_WIDTH-1:0]Data_in, /*outside*/
output [DATA_WIDTH-1:0]Data_out,
output [DATA_WIDTH-1:0]Data_bus,
output [N_REGISTER-1:0] register,
output full,
output val,ret
    );

wire [DATA_WIDTH-1:0] data_bus;
wire w_val,w_ret;
block_input INPUT_S(.X_cur(X_address),.Y_cur(Y_address),.clk(clk),.rst(rst),
							.Data_in(data_bus),.Data_out(Data_out),.register(register),
							.grant(grant),.val(w_val),.ret(w_ret));

output_controller OUT(.ret(w_ret),.full_ret(full),.val(w_val),
								.Data_in(Data_in),.Data_out(data_bus)
								);
assign val = w_val;
assign ret = w_ret;
assign Data_bus = data_bus;
endmodule
