`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:49:12 11/28/2022 
// Design Name: 
// Module Name:    input_controler 
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
// check : not yet
//////////////////////////////////////////////////////////////////////////////////
module input_controler
#(parameter DATA_WIDTH = 8,
  parameter N_REQ = 4)
(input [DATA_WIDTH-1:0] Data_in,
 output reg [DATA_WIDTH-1:0] Data_out,
 input empty,grant,
 output read,
 output [N_REQ-1:0] req
 );


endmodule
