let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let floor = (value) => parseInt(value)
let ceil = (value) => parseInt(value + 1)
let round = (value) => value < parseInt(value) + 0.5 ? floor(value) : ceil(value)


let acao = input();
let num = Number(input());

if(acao == "c") {
    console.log(ceil(num));
} else if(acao == "f") {
    console.log(floor(num));
} else {
    console.log(round(num));
}