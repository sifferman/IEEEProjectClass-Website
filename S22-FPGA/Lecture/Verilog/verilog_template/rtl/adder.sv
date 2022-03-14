
module adder (
    input           a, b, cin,
    output logic    sum, cout
);

always_comb begin
    sum     = a ^ b ^ cin;
    cout    = a&b | cin&(a^b);
end

// // also valid
// assign sum  = a ^ b ^ cin;
// assign cout = a&b | cin&(a^b);

endmodule
