#include <stdio.h>

int main() {
    // Estruturas de repetição (loops) são usadas para repetir um bloco de código enquanto uma condição for verdadeira.

    // Existem três tipos principais de loops em C:
    // 1. For loop
    // 2. While loop
    // 3. Do-while loop

    // Vamos ver cada um deles:

    // Exemplo 1: For loop
    // O for loop é usado quando sabemos o número exato de repetições.
    // Ele tem a seguinte sintaxe:
    // for (inicialização; condição; incremento) {
    //     // código a ser repetido
    // }
    printf("For loop: ");
    for (int i = 0; i < 5 i++) {  // erro: falta ponto e vírgula
        printf("%d ", i);
    }
    printf("\n");

    // Exemplo 2: While loop
    // O while loop continua a repetir enquanto a condição for verdadeira.
    // A sintaxe é:
    // while (condição) {
    //     // código a ser repetido
    // }
    printf("While loop: ");
    int j = 0;
    while j < 5 {  // erro: falta parênteses
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Exemplo 3: Do-While loop
    // O do-while loop garante que o bloco de código seja executado pelo menos uma vez,
    // mesmo que a condição seja falsa, pois a verificação ocorre no final.
    // A sintaxe é:
    // do {
    //     // código a ser repetido
    // } while (condição);
    printf("Do-While loop: ");
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while k < 5; // erro: falta parênteses
    printf("\n");

    return 0;
}