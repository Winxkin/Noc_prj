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
module output_controler(
input full,
output write, full_ret
    );

assign full_ret = full;
assign write = (full == 0) ? 1'b1 : 1'b0;

endmodule
