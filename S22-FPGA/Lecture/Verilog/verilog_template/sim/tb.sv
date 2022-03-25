
module tb ();

// test bench contents
logic a, b, cin;
logic sum, cout;

adder add (
    a, b, cin,
    sum, cout
);
//

initial begin : sim
$dumpfile( "dump.fst" );
$dumpvars;
$display( "Begin simulation." );
//\\ =========================== \\//

// test every value
for (integer i = 0; i < 8; i=i+1) begin
    {a,b,cin} = i;
    #1;
    if ( {cout,sum} != (a + b + cin) )
        $error("%b%b != %b + %b + %b", sum, cout, a, b, cin);
end

//\\ =========================== \\//
$display( "End simulation.");
$finish;
end

endmodule
