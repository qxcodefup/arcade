#include <stdio.h>

int main() {
    // O que são constantes?
    // Em C, constantes são valores que não podem ser alterados durante a execução do programa.
    // Elas são úteis para representar valores fixos que não devem ser modificados, como pi, gravidade, etc.

    // Como definir constantes?
    // Existem duas maneiras principais de definir constantes em C:
    //
    // 1. Usando #define:
    //    O #define é uma diretiva do pré-processador que cria um "apelido" para um valor fixo.
    //    Ele não possui tipo e é substituído diretamente pelo valor em tempo de compilação.
    //
    //    Exemplo:
    //    #define NOME_CONSTANTE valor
    //
    // 2. Usando const:
    //    A palavra-chave const define uma constante com um tipo específico.
    //    Ao contrário do #define, as constantes com const respeitam os tipos de dados.
    //
    //    Exemplo:
    //    const tipo nome_constante = valor;

    // Agora é sua vez!

    // TODO: Defina uma constante chamada GRAVIDADE usando #define e atribua o valor 9.8.
    
    // TODO: Defina uma constante chamada PI usando const e atribua o valor 3.14159.

    // Como imprimir constantes?
    // Assim como variáveis, você pode imprimir o valor de constantes usando printf.
    // No caso de GRAVIDADE e PI, use %f para números decimais (float ou double).
    //
    // Exemplo:
    // printf("Valor: %f\n", NOME_CONSTANTE);

    // TODO: Imprima o valor da constante GRAVIDADE.
    printf("Gravidade: ???\n", ???);  // Substitua ??? pelo nome da constante correta.

    // TODO: Imprima o valor da constante PI.
    printf("Valor de PI: ???\n", ???);  // Substitua ??? pelo nome da constante correta.

    return 0;
}
