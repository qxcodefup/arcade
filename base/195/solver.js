let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let acao = input();
let num = Number(input());

if(acao == "c")
    console.log(Math.ceil(num));
if(acao == "f")
    console.log(Math.floor(num));
