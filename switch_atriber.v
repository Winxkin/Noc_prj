`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:26 12/04/2022 
// Design Name: 
// Module Name:    switch_atriber 
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
module switch_atriber
#(parameter N_BIT_SEL = 3,
  parameter N_REGISTER = 3)
( input [N_REGISTER-1:0] request_L, request_N, request_E, request_S, request_W,
  input clk, rst,
  output reg [N_BIT_SEL-1:0] select_L, select_N, select_E, select_S, select_W
);

reg [N_REGISTER-1:0] request[4:0];
reg [2:0] count;

/*localparam */
localparam [N_REGISTER-1:0] OUT_L = 3'b000;
localparam [N_REGISTER-1:0] OUT_E = 3'b001;
localparam [N_REGISTER-1:0] OUT_W = 3'b010;
localparam [N_REGISTER-1:0] OUT_N = 3'b011;
localparam [N_REGISTER-1:0] OUT_S = 3'b100;
localparam [N_BIT_SEL-1:0] IN_NON = 3'd5;
localparam [N_BIT_SEL-1:0] IN_L = 3'd0;
localparam [N_BIT_SEL-1:0] IN_N = 3'd1;
localparam [N_BIT_SEL-1:0] IN_E = 3'd2;
localparam [N_BIT_SEL-1:0] IN_S = 3'd3;
localparam [N_BIT_SEL-1:0] IN_W = 3'd4;

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
				select_L = IN_NON;
				select_N = IN_NON;
				select_E = IN_NON;
				select_W = IN_NON;
				select_S = IN_NON;
				/*reset count*/
				count = 0;
			end
		else
			begin
				if(count < 5)
					begin
					/*Output local control*/
						if(request[count] == OUT_L) //output Local
							begin
								case(count)
									0: select_L = IN_L; //local
									1: select_L = IN_N; //N
									2: select_L = IN_E; //E
									3: select_L = IN_S; //S
									4: select_L = IN_W; //W
								endcase
							end
					/*Output East control*/
						 else if(request[count] == OUT_E) 
							begin
								case(count)
									0: select_E = IN_L; //local
									1: select_E = IN_N; //N
									2: select_E = IN_E; //E
									3: select_E = IN_S; //S
									4: select_E = IN_W; //W
								endcase
							end
					/*Output West control*/
						else if(request[count] == OUT_W) 
							begin
								case(count)
									0: select_W = IN_L; //local
									1: select_W = IN_N; //N
									2: select_W = IN_E; //E
									3: select_W = IN_S; //S
									4: select_W = IN_W; //W
								endcase
							end
					/*Output North control*/
						else if(request[count] == OUT_N) 
							begin
								case(count)
									0: select_N = IN_L; //local
									1: select_N = IN_N; //N
									2: select_N = IN_E; //E
									3: select_N = IN_S; //S
									4: select_N = IN_W; //W
								endcase
							end
					/*Output South control*/
						else if(request[count] == OUT_S) 
							begin
								case(count)
									0: select_S = IN_L; //local
									1: select_S = IN_N; //N
									2: select_S = IN_E; //E
									3: select_S = IN_S; //S
									4: select_S = IN_W; //W
								endcase
							end
					end
					
				/*increase count count 0 -> 4*/
				if(count == 4)
					count = 0;
				else
					count = count + 1;
			end
	end


endmodule
