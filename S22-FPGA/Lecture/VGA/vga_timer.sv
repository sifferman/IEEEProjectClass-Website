
// http://tinyvga.com/vga-timing
module vga_timer #(
    parameter H_VISIBLE = 640,
    parameter H_FRONT   = 16,
    parameter H_SYNC    = 96,
    parameter H_BACK    = 48,
    parameter V_VISIBLE = 480,
    parameter V_FRONT   = 10,
    parameter V_SYNC    = 2,
    parameter V_BACK    = 33
) (
    input                                   clk, rst,
    output logic                            hsync, vsync,
    output logic                            visible,
    output logic    [$clog2(H_VISIBLE)-1:0] position_x, position_x_NEXT,
    output logic    [$clog2(V_VISIBLE)-1:0] position_y, position_y_NEXT,
    output logic                     [31:0] frame
);

    // TODO

endmodule
