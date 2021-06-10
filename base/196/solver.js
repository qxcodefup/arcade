let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let valor = Number(input())
let parcelas = Number(input())
let taxa = (parcelas - 1) * 5;
let total = (1 + taxa/100.0) * valor;
let vparcela = total / parcelas;
console.log(vparcela.toFixed(2));
console.log(total.toFixed(2));
