
module tangnano (
    input               clk_24,
    input               An, Bn,
    output logic        hsync, vsync,
    output logic  [3:0] r, g, b
);


wire rst = ~An;
logic clk_25_175;


assign clk_25_175 = clk_24; // close enough


top t (.*);


endmodule
