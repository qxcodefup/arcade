#include <stdio.h>

// Em C, podemos declarar funções que retornam valores com a mesma estrutura que vimos anteriormente, mas definimos o tipo do valor de retorno (por isso que funçoes void não retornavam nada) antes do nome da função.

//TODO: corrija a função abaixo para ela retornar para a função principal o dobro da variável (int) 'numero'

//DEL!
int dobro(int numero) {
    // Declaramos uma variável para armazenar o resultado e calculamos o dobro do número
    int resultado = numero * 2;
    return resultado; // Retorna o valor calculado
}
//ACT!
// ??? dobro(??? numero) {
//     //Declaramos uma variável para armazenar o resultado e calculamos o dobro do número
//     int resultado = numero * 2;
//     return ???; // Retorna o valor calculado
// }
//ADD!


int main() {
    int numero = 76;
    
    // Chamamos a função `dobro` e usamos o valor retornado para mostrar o resultado na tela
    int resultado = dobro(numero);
    //TODO: Corrija o printf para ele printar o número passado para a função e o que essa 

    //DEL!
    printf("O dobro de %d é %d.\n", numero, resultado);
    //ACT!
    //printf("O dobro de %d é %d.\n", ???, ???);
    //ADD!

    return 0;
}
