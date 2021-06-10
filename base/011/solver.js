let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();

let hora = Number(input());
let minuto = Number(input());
let dia = Number(input());
let mes = Number(input());
let ano = Number(input());

hora = hora <= 12 ? hora : hora - 12
ano %= 100;

let f2d = (valor) => String(valor).padStart(2, 0)

console.log(f2d(hora) + ":" + f2d(minuto) + " " + f2d(dia) + "/" + 
            f2d(mes) + "/" + f2d(ano))
