`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: HCMUTE
// Engineer: Huan Nguyen Duy
// 
// Create Date:    15:58:12 12/18/2022 
// Design Name: 
// Module Name:    output_controler 
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
module output_controler
#(parameter DATA_WIDTH = 8)
(
input full,
output write, full_ret,
input [DATA_WIDTH-1:0] Data_in
 );

assign full_ret = full;
assign write = (full == 0 && Data_in != 0) ? 1'b1 : 1'b0;

endmodule
