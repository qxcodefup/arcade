#include <stdio.h>

// Agora, sobre recursão, precisamos ter muita calma e cuidado ao implementa-la.
// A recursão permite que uma função se chame novamente dentro de si mesma, com uma condição para interromper o ciclo.
// No exemplo abaixo, a função `fatorial` calcula o fatorial de um número.
// Quando `n` é 0, a função simplesmente retorna 1, pois 0! (fatorial de 0) é 1.
// Caso contrário, a função multiplica `n` pelo resultado de `fatorial(n-1)`,
// chamando a si mesma até que `n` chegue a 0 e comece a voltar com os resultados das multiplicações.

//DEL!
int fatorial(int n) {
    // Condição de parada: quando `n` chega a 0, retornamos 1
    if (n == 0) {
        //Lembre que se cair nesse retorno, a função acaba aqui e o compilador não lê o que tem abaixo.
        return 1;
    }
    // Caso contrário, multiplicamos `n` pelo resultado de `fatorial(n - 1)'
    return n * fatorial(n - 1); // Empilha a chamada de `fatorial(n - 1)` e multiplica o valor de `n` por essa chamada ao desempilhar
}
// A função vai se chamando, empilhando chamadas dela mesmo e incrementando valor na variavel, mas quando o n chegar em 0, ela cai no primeiro caso e retorna 1.
//ACT!
// //TODO: corrija a função recursiva fatorial abaixo:
// int fatorial(int n) {
//     // Condição de parada: quando `n` chega a 0, retornamos 1
//     if (n == ???) {
//         //Lembre que se cair nesse retorno, a função acaba aqui e o compilador não lê o que tem abaixo.
//         return ???;
//     }
//     // Caso contrário, multiplicamos `n` pelo resultado de `fatorial(n - 1)', chamando a função novamente, dentro dela
//     return n * ???(n - 1); // Empilha a chamada de `fatorial(n - 1)` e multiplica o valor de `n` por essa chamada ao desempilhar
// }
// // A função vai se chamando, empilhando chamadas dela mesmo e incrementando valor na variavel, mas quando o n chegar em 0, ela cai no primeiro caso e retorna 1.
//ADD!

int main() {
    int numero = 5;
    // Chamamos a função `fatorial` e armazenamos o resultado
    int resultado = fatorial(numero);
    printf("O fatorial de %d é %d.\n", numero, resultado);

    return 0;
}
