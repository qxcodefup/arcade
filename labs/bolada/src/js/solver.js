let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let tipo = input();
let forca = Number(input());

let forca_tipo = tipo == "b" ? 20 : 18;

let poder = (forca * forca_tipo - 80) / 10.0

if(poder < 150) {
    console.log("Fraco, nem passou");
} else if(poder < 180) {
    console.log("Perfeito");
} else if(poder < 210) {
    console.log("Satisfeito");
} else {
    console.log("Muito forte, bola fora");
}
