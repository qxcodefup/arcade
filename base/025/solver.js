let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let a = Number(input());
let b = Number(input());

if((a % 3 == 0 && b % 3 == 0) || (a % 5 == 0 && b % 5 == 0))
    console.log("sim");
else
    console.log("nao");
