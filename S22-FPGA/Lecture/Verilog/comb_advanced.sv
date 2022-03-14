module mux_chain #(
    parameter WIDTH = 2
) (
    input   [WIDTH-1:0] b,
    input   [WIDTH-1:0] v,
    output logic        x
);

integer i;
always_comb begin
    x = 0; // default value
    for (i = 0; i < WIDTH; i=i+1) begin
        if (b[i]) begin
            x = v[i];
        end
    end
end

endmodule
