`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: HCMUTE
// Engineer: Huan Nguyen Duy
// 
// Create Date:    15:38:47 12/18/2022 
// Design Name: 
// Module Name:    ouput_flow_control 
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
module ouput_flow_control(
input empty, ret, /*if ret = 1 meaning the input buffer of neighbor is full*/
output val, read
    );

assign val = (empty == 0 && ret == 0) ? 1'b1 : 1'b0;
assign read = val;

endmodule
