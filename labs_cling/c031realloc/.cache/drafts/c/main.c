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
    int* numeros = (int*)malloc(??? * sizeof(int));
    ???; // Inicializar valores
    numeros = (int*)realloc(???, ??? * sizeof(int));
    ???; // Imprimir valores
    free(???);
    return 0;
}
