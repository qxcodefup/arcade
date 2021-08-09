let lines = require("fs").readFileSync(0).toString().split("\n");
let input = () => lines.shift();
let write = (text) => process.stdout.write("" + text);

function existe(vet, value) {
    for(let i = 0; i < vet.length; i++)
        if(vet[i] == value)
            return true;
    return false;
}

function show_vet(vet) {
    if(vet.length === 0) {
        write("N\n");
        return;
    }
    for(let i = 0; i < vet.length; i++) {
        if(i !== 0)
            write(" ");
        write(String(vet[i]));
    }
    write("\n");
}

function main() {
    let numero_maximo = Number(input());
    let _vet_size = Number(input());
    let vet = input().split(" ").map(Number);

    let unicos = [];
    let repetidos = [];
    let faltantes = [];
    
    for(let value of vet) {
        if(! existe(unicos, value))
            unicos.push(value);
        else
            repetidos.push(value);
    }
    for(let i = 1; i <= numero_maximo; i++)
        if(! existe(unicos, i))
            faltantes.push(i);
            
    show_vet(repetidos);
    show_vet(faltantes);
}

main();