#include <stdio.h>

int main() {
    // O que são operadores aritméticos em C?
    // Operadores aritméticos são utilizados para realizar operações matemáticas em variáveis e valores no código, de forma semelhante às operações que fazemos na matemática tradicional.
    // Os operadores aritméticos básicos em C são:
    // +: Operador de adição (soma dois valores)
    // -: Operador de subtração (subtrai um valor do outro)
    // *: Operador de multiplicação (multiplica dois valores)
    // /: Operador de divisão (divide um valor pelo outro)
    // %: Operador de módulo (retorna o resto da divisão entre dois valores)
    // Cada um desses operadores permite realizar cálculos matemáticos específicos dentro do programa. Vamos praticar isso agora!

    // SOMA:
    // TODO: Printe a soma entre os valores 8 e 19
    //DEL!
    printf("%d\n", 8 + 19);
    //ACT!
    // printf("%d\n", 8 ??? 19);
    //ADD!
    
    // SUBTRAÇÃO:
    // TODO: Printe a subtração entre os valores 35 e 12
    //DEL!
    printf("%d\n", 35 - 12);
    //ACT!
    // printf("%d\n", 35 ??? 12);
    //ADD!

    // MULTIPLICAÇÃO:
    // TODO: Printe a multiplicação entre os valores 7 e 14
    //DEL!
    printf("%d\n", 7 * 14);
    //ACT!
    // printf("%d\n", 7 ??? 14);
    //ADD!

    // DIVISÃO:
    // TODO: Printe a divisão entre os valores 36 e 6
    //DEL!
    printf("%d\n", 36 / 6);
    //ACT!
    // printf("%d\n", 36 ??? 6);
    //ADD!

    // MÓDULO:
    // TODO: Printe o módulo (resto da divisão) entre 17 e 5
    //DEL!
    printf("%d\n", 17 % 5);
    //ACT!
    // printf("%d\n", 17 ??? 5);
    //ADD!

    // EXTRA (PARENTESES):
    // Os parênteses funcionam da mesma forma que na matemática, dando prioridade ao resultado da operação que está dentro deles, o que pode alterar o valor de uma operação.
    int resultado1 = 10 + 5 * 2; // Aqui, a multiplicação é feita primeiro, depois a soma
    int resultado2 = (10 + 5) * 2; // Aqui, a soma é feita primeiro por causa dos parênteses

    // Para demonstrar, preencha os campos abaixo seguindo o exemplo anterior (resultado1 e resultado2).
    //DEL!
    printf("%d é diferente de %d por causa dos parênteses\n", resultado1, resultado2);
    //ACT!
    // printf("%d é diferente de %d por causa dos parênteses\n", ???, ???);
    //ADD!

    // Usando tudo o que aprendemos:
    // TODO: Printe o resultado da operação (40 MAIS 10) VEZES (50 DIVIDIDO POR 2 MENOS 5) MODULO DE 2
    //DEL!
    printf("%d\n", (40 + 10) * (50 / 2 - 5) % 2);
    //ACT!
    // printf("%d\n", (40 ??? 10) ??? (50 ??? 2 ??? 5) ??? 2);
    //ADD!
    return 0;
}
