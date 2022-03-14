module latch (
    input     [1:0] in,
    output logic    out
);

// bad
always_comb begin
    if      (in==2'b00) out = 0;
    else if (in==2'b01) out = 1;
end

// good
always_comb begin
    if      (in==2'b00) out = 0;
    else if (in==2'b01) out = 1;
    else                out = 0;
end

endmodule
