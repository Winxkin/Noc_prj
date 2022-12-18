`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:24 12/18/2022 
// Design Name: 
// Module Name:    output_flow_control 
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
module output_flow_control(
   input empty, ret, /*if ret = 1 meaning the input buffer of neighbor is full*/
	output val, read
    );

assign val = (empty == 0 && ret == 0) ? 1'b1 : 1'b0;
assign read = val;
endmodule
