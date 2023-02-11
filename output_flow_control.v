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
module output_flow_control
(
input ret, /*if ret = 1 meaning the input buffer of neighbor is full*/
output val,	/*val: request to send package from neighbor router | val = 1 to send*/
input free, /*mapping to val*/
output rettoOC /*mapping to ret*/
);

assign val = free;
assign rettoOC = ret;
	
endmodule
