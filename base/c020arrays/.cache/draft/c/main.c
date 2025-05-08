#include <stdio.h>

//Em C, um array é uma sequência de elementos do mesmo tipo, que podem ser acessados por índices. Os índices começam em 0 e vão até o tamanho do array menos 1.

//Imagine um array de inteiros com 5 posições, como no exemplo abaixo:

// Imagine um array com 5 inteiros: [1, 2, 3, 4, 5]
// Em relação aos índices (posições): [arr[0], arr[1], arr[2], arr[3], arr[4]]
// se lê arr posição 4, que no caso é igual a 5

// TODO: Declare um array chamado `numeros` que:
// - Tenha capacidade para armazenar 5 inteiros.
// - Inicialize o array com os valores: 1, 2, 3, 4, 5.

// TODO: Crie uma função `imprimirArray` que:
// - Receba como parâmetro um array de inteiros e o tamanho do array.
// - Não retorne nada (`void`).
// - Dentro da função, use um loop `for` para imprimir cada elemento do array, separado por espaços.

// TODO: Chame a função `imprimirArray` no `main` para exibir os elementos do array `numeros`.
// Dica: ao passar um array para uma função, você também deve passar o tamanho do array, pois o array em C não guarda essa informação.

void imprimirArray(int arr[], int tamanho) {
    //DEL!
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    //ACT!
    // for (int i = 0; i < tamanho; i++) {
        //printf("%d ", ???);
    //}
    //ADD!
    
}

int main() {
    // Também podemos incializar o array com valores pré definidos, bastar atribuirmos ele os valores entre chaves "{}" 
    // Inicialize o array `numeros` com os valores: 1, 2, 3, 4, 5.

    //DEL!
    int numeros[] = {1, 2, 3, 4, 5};
    //ACT!
    // int numeros[] = {???};
    //ADD!
    
    // Chame a função `imprimirArray` para exibir os valores do array.
    //DEL!
    imprimirArray(numeros, 5);
    //ACT!
    // imprimirArray(???, ???);
    //ADD!
    
    return 0;
}
