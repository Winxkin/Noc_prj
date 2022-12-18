`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:06 12/18/2022 
// Design Name: 
// Module Name:    block_output 
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
module block_output
#(parameter DATA_WIDTH = 8)
(input [DATA_WIDTH-1:0]Data_in, 
 output [DATA_WIDTH-1:0]Data_out, /*outside*/
 input clk,rst,
 input ret, /*if ret = 1 meaning the input buffer of neighbor is full*/
 output val, /*request to neighbor router to sent package*/
 output full
    );
/*define wire*/
wire write_wire, read_wire;
wire empty_wire,full_wire; 
/*connect block module*/
FIFO_Buffer BUFFER(.Data_in(Data_in),.clk(clk),.rst(rst),.write(write_wire),.read(read_wire),
							.empty(empty_wire),.full(full_wire),.Data_out(Data_out));

output_flow_control OFC(.empty(empty_wire),.ret(ret),.val(val),.read(read_wire));

output_controler OC(.full(full_wire),.full_ret(full),.write(write_wire));

endmodule
