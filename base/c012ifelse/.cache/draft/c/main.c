//ADD!
#include <stdio.h>

int main() {
    // Estruturas condicionais são usadas para tomar decisões com base em condições.
    // Se a condição dentro do if for verdadeira, o código no bloco será executado.

    // Exemplo 1: Avaliando se um número é positivo, negativo ou zero.

    // TODO: Corrija a sintaxe abaixo
    //ACT!
    // int x == 10;  // erro: o operador de atribuição deve ser usado
    //DEL!
    int x = 10;
    //ADD!

    if (x > 0) {
        printf("A variável x é positiva.\n");
    // } else if x < 0)  // erro: faltam parênteses e chaves na condição //ACT!
    } else if (x < 0) { //DEL!
        printf("A variável x é negativa.\n");
    } else {  // erro: fechamento incorreto da estrutura else if
        printf("A variável x é zero.\n");
    } //DEL!

    // Exemplo 2: Comparando dois números

    // TODO: Corrija a sintaxe abaixo
    int a = 10;
    int b = 5;

    if (a > b) {
        printf("O número %d é maior que %d.\n", a, b);
    // else  // erro: falta o fechamento correto do if anterior //ACT!
    } else { //DEL!
        printf("O número %d é maior que %d.\n", b, a);
    } //DEL!

    return 0;
}
//ADD!
