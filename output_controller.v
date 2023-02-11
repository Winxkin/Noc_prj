`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:26:29 02/11/2023 
// Design Name: 
// Module Name:    output_controller 
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
module output_controller
#(parameter DATA_WIDTH = 8)
(
input clk,rst,
input ret, /*mapping with full signal from neghbour router*/
output full_ret, /*passing the ret signal from block input to SW*/ 
input [DATA_WIDTH-1:0] Data_in,
output reg [DATA_WIDTH-1:0] Data_out,
output val /*notify for OFC that are not data at input | free = 1 => Having not data*/
 );

always@(posedge clk, posedge rst)
begin
	if(rst)
		begin
			Data_out = 0;
		end
	else
		begin
			if(ret == 0 && Data_in!= 0)
				Data_out = Data_in;
			else
				Data_out = 0;
		end

end