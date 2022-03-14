
/*  script.js */


/*  Global Variables */

var addInput1;
var addInput2;
var addOutput;


/*  Run inside body onload  */

function initialize() {

    addInput1 = document.getElementById( "Addition-Input__1" );
    addInput2 = document.getElementById( "Addition-Input__2" );
    addOutput = document.getElementById( "Addition-Output" );
    handleAdditionInput();

}



/*  Addition Calculator */

function handleAdditionInput() {
    addOutput.innerHTML = parseInt( addInput1.value )
                        + parseInt( addInput2.value );
}
