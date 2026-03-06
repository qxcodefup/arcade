#include <stdio.h>
#include <stdlib.h>

// Em C, a alocação dinâmica de memória permite que o programa aloque memória em tempo de execução.
// A função `malloc` (Memory Allocation) é usada para alocar um bloco de memória no heap:
// - Ela recebe o tamanho em bytes que queremos alocar (use sizeof para evitar erros).
// - Retorna um ponteiro para o início do bloco alocado ou NULL se falhar.

// O `calloc` (Clear Allocation) funciona de forma semelhante ao `malloc`, mas:
// - Ele inicializa toda a memória alocada com zeros.
// - Requer dois argumentos: o número de elementos e o tamanho de cada elemento.

// Após usar a memória alocada, é necessário liberá-la usando a função `free` para evitar vazamentos de memória.

// TODO: Aloque dinamicamente um array de 5 inteiros usando `malloc`.
// - Inicialize os valores manualmente: 10, 20, 30, 40, 50.
// - Imprima os valores armazenados no array.

// TODO: Libere a memória alocada usando `free`.

int main() {
    // Passo 1: Alocar memória usando malloc
    //DEL!
    int* numeros = (int*)malloc(5 * sizeof(int)); // Alocando memória para 5 inteiros
    if (numeros == NULL) { // Sempre verificar se a alocação foi bem-sucedida
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Passo 2: Inicializar valores manualmente
    for (int i = 0; i < 5; i++) {
        numeros[i] = (i + 1) * 10; // Inicializando com múltiplos de 10
    }

    // Passo 3: Imprimir os valores armazenados
    printf("Valores armazenados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Passo 4: Liberar a memória alocada
    free(numeros);
    //ACT!
    // int* numeros = (int*)???(5 * sizeof(int)); 
    // if (numeros == NULL) {
    //     printf("Erro ao alocar memória.\n");
    //     return 1;
    // }
    // ???; // Inicializar valores
    // ???; // Imprimir valores
    // free(???); // Liberar memória
    //ADD!
    return 0;
}
