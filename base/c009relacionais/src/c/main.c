#include <stdio.h>

int main() {
    // O que são operadores relacionais no C?
    // Operadores relacionais são utilizados para fazer comparações e tomar decisões dentro de programas.

    // Operadores relacionais comparam dois valores e retornam verdadeiro (1) ou falso (0):
    // >  : Maior que (verifica se o valor à esquerda é maior que o à direita)
    // <  : Menor que (verifica se o valor à esquerda é menor que o à direita)
    // >= : Maior ou igual (verifica se o valor à esquerda é maior ou igual ao da direita)
    // <= : Menor ou igual (verifica se o valor à esquerda é menor ou igual ao da direita)
    // == : Igualdade (verifica se dois valores são iguais)
    // != : Diferença (verifica se dois valores são diferentes)

    // Como eles utilizam da relação entre variáveis, vamos ver que eles serão muito importantes em muitas estruturas que a linguagem C oferece. Vamos praticar!

    // WARNING: as saídas serão verdadeiro (1) ou falso (0), pois estamos checando a veracidade da operação feita no printf:
    
    // MAIOR QUE:
    // TODO: Verifique se 15 é maior que 7 e printe o resultado (1 para verdadeiro, 0 para falso)
    //DEL!
    printf("%d\n", 15 > 7);
    //ACT!
    // printf("%d\n", 15 ??? 7); 
    //ADD!

    // MENOR/MAIOR OU IGUAL QUE:
    // TODO: Verifique se 10 é menor ou igual a 20 e printe o resultado
    //DEL!
    printf("%d\n", 10 <= 20);
    //ACT!
    // printf("%d\n", 10 ??? 20); 
    //ADD!

    // IGUALDADE:
    // TODO: Verifique se 8 é igual a 10 e printe o resultado
    //DEL!
    printf("%d\n", 8 == 10);
    //ACT!
    // printf("%d\n", 8 ??? 10); 
    //ADD!

    // DIFERENÇA:
    // TODO: Verifique se 12 é diferente de 12 e printe o resultado
    //DEL!
    printf("%d\n", 12 != 12);
    //ACT!
    // printf("%d\n", 12 ??? 12); 
    //ADD!

    return 0;
}
