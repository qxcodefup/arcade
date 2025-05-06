#include <stdio.h>
#include <stdlib.h>

// A função `realloc` é usada para redimensionar blocos de memória previamente alocados:
// - Preserva os dados existentes na memória (até onde for possível).
// - Pode mudar o endereço do bloco se não houver espaço contínuo disponível.
// - Recebe o ponteiro para o bloco original e o novo tamanho em bytes.

// IMPORTANTE:
// - Sempre verifique se o `realloc` retornou NULL antes de usar o novo ponteiro.
// - Caso falhe, a memória original não será perdida, mas será necessário tratá-la.

// TODO: Aloque memória para armazenar 3 inteiros usando `malloc`.
// - Inicialize os valores: 1, 2, 3.
// - Imprima os valores alocados.

// TODO: Use `realloc` para redimensionar o bloco para armazenar 5 inteiros.
// - Inicialize os novos valores: 4, 5.
// - Imprima todos os valores após o redimensionamento.

int main() {
    // Passo 1: Alocar memória para 3 inteiros usando malloc
    //DEL!
    int* numeros = (int*)malloc(3 * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializando os primeiros valores
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;

    // Imprimindo os valores originais
    printf("Valores originais: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Passo 2: Redimensionar o bloco de memória para 5 inteiros
    numeros = (int*)realloc(numeros, 5 * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao redimensionar memória.\n");
        return 1;
    }

    // Inicializando os novos valores
    numeros[3] = 4;
    numeros[4] = 5;

    // Imprimindo todos os valores após o redimensionamento
    printf("Valores após realloc: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Passo 3: Liberar a memória alocada
    free(numeros);
    //ACT!
    // int* numeros = (int*)malloc(??? * sizeof(int));
    // ???; // Inicializar valores
    // numeros = (int*)realloc(???, ??? * sizeof(int));
    // ???; // Imprimir valores
    // free(???);
    //ADD!
    return 0;
}
