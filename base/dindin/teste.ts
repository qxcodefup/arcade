



function calcular_media(a: number, b: number): number {
    let media = (a + b) / 2;
    return media;
}

let a = +input();
let b = +input();
let result = calcular_media(a, b); //5
console.log("O resultado eh " + result.toFixed(2));
