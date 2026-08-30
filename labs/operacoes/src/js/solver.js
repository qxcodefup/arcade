let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let a = Number(input())
let b = Number(input())
console.log(a + b)
console.log(a - b)
console.log(a * b)
console.log((a / b).toFixed(2))
console.log(a % b)