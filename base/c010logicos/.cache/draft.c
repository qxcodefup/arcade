#include <stdio.h>

int main() {
    // E os operadores lógicos do C?
    // Operadores lógicos também são utilizados (também) para fazer comparações e tomar decisões dentro de programas.
    // Operadores lógicos também combinam expressões e retornam verdadeiro (1) ou falso (0), mas a lógica básica muda:
    // && : "E" lógico (retorna verdadeiro se ambas as expressões forem verdadeiras)
    // || : "OU" lógico (retorna verdadeiro se pelo menos uma expressão for verdadeira)
    // !  : "NÃO" lógico (inverte o valor lógico da expressão)

    // Vamos praticar!

    // "E" LÓGICO:
    // TODO: Verifique se 5 é maior que 3 E 9 é menor que 12 e printe o resultado
    //DEL!
    printf("%d\n", (5 > 3) && (9 < 12));
    //ACT!
    // printf("%d\n", (5 ??? 3) && (9 ??? 12)); 
    //ADD!

    // "OU" LÓGICO:
    // TODO: Verifique se 4 é menor que 2 OU 7 é maior que 5 e printe o resultado
    //DEL!
    printf("%d\n", (4 < 2) || (7 > 5));
    //ACT!
    // printf("%d\n", (4 ??? 2) || (7 ??? 5)); 
    //ADD!

    // "NÃO" LÓGICO:
    // TODO: Verifique o inverso da condição 5 maior que 3 e printe o resultado
    //DEL!
    printf("%d\n", !(5 > 3));
    //ACT!
    // printf("%d\n", ??? (5 ??? 3)); 
    //ADD!


    //EXTRA (ORDEM DE IMPORTÂNCIA DOS OPERADORES): 
    //Um ponto muito importante é que os operadores têm uma ordem de importância se não colocarmos parênteses, o que pode atrapalhar sua lógica na hora de codar
    //À título de curiosidade, o "!" é o mais importante, o "&&" é o intermediário e o "||" é o menos importante.

    //Agora que sabemos disso, vamos praticar um pouco:

    // "E" LÓGICO COM PARENTESES:
    // TODO: Verifique se 8 é menor que 10 E 6 é maior que 4, e printe o resultado
    //DEL!
    printf("%d\n", (8 < 10) && (6 > 4));
    //ACT!
    // printf("%d\n", (8 ??? 10) && (6 ??? 4)); 
    //ADD!

    // "OU" LÓGICO COM PARENTESES:
    // TODO: Verifique se 3 é maior que 5 OU 12 é menor que 15, e printe o resultado
    //DEL!
    printf("%d\n", (3 > 5) || (12 < 15));
    //ACT!
    // printf("%d\n", (3 ??? 5) || (12 ??? 15)); 
    //ADD!

    // "NÃO" LÓGICO COM PARENTESES:
    // TODO: Verifique o inverso da condição 7 menor que 10 e printe o resultado
    //DEL!
    printf("%d\n", !(7 < 10));
    //ACT!
    // printf("%d\n", ??? (7 ??? 10)); 
    //ADD!

    return 0;
}
