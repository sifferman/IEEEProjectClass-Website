
module counter #(
    parameter WIDTH = 8,
    parameter MAX   = 100
) (
    input                       clk, rst,
    output logic    [WIDTH-1:0] count
);

    logic [WIDTH-1:0] count_next;

    always_comb begin
        count_next = (count==MAX) ? 0 : count+1;
    end

    always_ff @ (posedge clk) begin
        count <= rst ? 0 : count_next;
    end

endmodule
