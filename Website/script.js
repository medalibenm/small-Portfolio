document.getElementById('form').addEventListener('submit', function(event) {
    event.preventDefault();
    var number = document.getElementById('number').value;
    var mode = document.getElementById('from').value;
    var obj = document.getElementById('to').value;
    if (mode != "decimal") {
        switch(mode) {
            case "binary" : number = Number.parseInt(number, 2);
            break;
            case "octal" : number = Number.parseInt(number, 8);
            break;
            
            case "hexadecimal" : number = Number.parseInt(number, 16);
            break;
        }
    }
    number = Number(number);
    switch(obj) {
        case "binary" : document.getElementById('output').value = number.toString(2);
        break;
        case "octal" : document.getElementById('output').value = number.toString(8);
        break;
        case "hexadecimal" : document.getElementById('output').value = number.toString(16);
        break;
        case "decimal" : document.getElementById('output').value = number;
        break;
    }
});