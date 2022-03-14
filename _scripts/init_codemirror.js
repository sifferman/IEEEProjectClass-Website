
/* init_codemirror.js */


const textareas = document.getElementsByTagName("textarea");
for ( let i = 0; i < textareas.length; i++ ) {

    let textarea = textareas[i];

    // skip if there is no src
    if ( !textarea.hasAttribute("src") ) {
        beautify_textarea( textarea );
        continue;
    }

    // get code src
    fetch( textarea.getAttribute("src") )
        .then(response => response.text())
        .then(data => {
            textarea.value = data;
            textarea.setAttribute("readonly","true");
            beautify_textarea( textarea );
        });
}


function beautify_textarea( textarea ) {
    if ( textarea.classList.contains("code") ) {
        // config codemirror
        let c = CodeMirror.fromTextArea(
            textarea, {
                mode: {name: textarea.getAttribute("mode")},
                lineNumbers: !(textarea.hasAttribute("nonumbers")),
                viewportMargin: Infinity,
                readOnly: "true"
            }
        );
    } else {
        // config default textarea
        textarea.style.height = "1px";
        textarea.style.width = "1px";
        textarea.style.whiteSpace = "pre";
        setTimeout(function() {
            textarea.style.height = (textarea.scrollHeight+5)+"px";
            textarea.style.width = (textarea.scrollWidth+5)+"px";
        }, 1);
        textarea.style.opacity = "100%";
    }
}
