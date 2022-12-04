`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:32:17 12/03/2022 
// Design Name: 
// Module Name:    round_robin 
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
// Check: ok
//////////////////////////////////////////////////////////////////////////////////
module round_robin
#(parameter N_BIT_SEL = 3,
  parameter N_REGISTER = 3)
( input [N_REGISTER-1:0] request_L, request_N, request_E, request_S, request_W,
  input clk, rst,
  input [N_REGISTER-1:0] direction,
  output reg [N_BIT_SEL-1:0] select
);

reg [N_REGISTER-1:0] request[4:0];
reg [2:0] count;

always@*
	begin
		request[0] <= request_L;
		request[1] <= request_N;
		request[2] <= request_E;
		request[3] <= request_S;
		request[4] <= request_W;
	end
	
always@(posedge clk, posedge rst)
	begin
		if(rst)
			begin
				select = 3'd5; //default
				count =0;
			end
		else
			begin
				if(count < 5)
					begin
						if(request[count] == direction)
							begin
								case(count)
									0: select = 3'd0; //local
									1: select = 3'd1; //N
									2: select = 3'd2; //E
									3: select = 3'd3; //S
									4: select = 3'd4; //W
								endcase
							end
						else
							select = 3'd5;
					end
					
				//increase count count 0 -> 4
				if(count == 4)
					count = 0;
				else
					count = count + 1;
			end
	end


endmodule
