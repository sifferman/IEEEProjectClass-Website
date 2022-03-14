module dff (
    input           clk, rst,
    input           d,
    output logic    q
);

    always_ff @ (posedge clk) begin
        if (rst) begin
            q <= 0;
        end else begin
            q <= d;
        end
    end

endmodule
