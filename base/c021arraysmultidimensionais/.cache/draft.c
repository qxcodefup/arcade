#include <stdio.h>

// Em C, podemos usar arrays multidimensionais (ou matrizes) para armazenar dados em formato de tabela.
// Vamos declarar e inicializar uma matriz 3x3 (3 linhas e 3 colunas) e exibir os seus elementos.
// OBS 1: Perceba que pra matrizes, sempre vamos usar dois iteradores 'for', um para as linhas, e outro para colunas.
// OBS 2: vamos esquematizar da mesma forma da questão anterior uma matriz (que é um detor de vetores no final das contas):
//Assim como arrays comuns, os índices em uma matriz começam em `0`.

//Imagine uma matriz de inteiros com 3 linhas e 3 colunas:

// Matriz 3x3 de inteiros:
//                     [ 1,  2,  3 ]
//                     [ 4,  5,  6 ]
//                     [ 7,  8,  9 ]
// Em relação aos índices (linhas e colunas):
//                    {matriz[0][0], matriz[0][1], matriz[0][2]}
//                    {matriz[1][0], matriz[1][1], matriz[1][2]}
//                    {matriz[2][0], matriz[2][1], matriz[2][2]}
// Para o caso do numero 7, se lê matriz linha 2, coluna 0.



// TODO: Declare uma matriz chamada `matriz` que:
// - Tenha 3 linhas e 3 colunas.
// - Seja inicializada com os seguintes valores:
//   1 2 3
//   4 5 6
//   7 8 9

// TODO: Crie uma função `imprimirMatriz` que:
// - Receba como parâmetros uma matriz 3x3 de inteiros.
// - Não retorne nada (`void`).
// - Dentro da função, use loops `for` aninhados para exibir cada elemento da matriz em formato de tabela.

// TODO: No `main`, chame a função `imprimirMatriz` para exibir os valores da matriz `matriz`.

void imprimirMatriz(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m[???][???]);
        }
        printf("\n");
    }
}

int main() {
    //Também podemos inicializar a matriz com valores pré-definidos, basta atribuirmos os valores entre chaves "{}" para cada linha da matriz.
    // Inicialize a matriz `matriz` com os valores fornecidos.
    int matriz[???][???] = {
        {???, ???, ???},
        {???, ???, ???},
        {???, ???, ???}
    };
    
    // Chame a função `imprimirMatriz` para exibir os valores da matriz.
    imprimirMatriz();
    
    return 0;
}
