# @vet_iii - impressão formatada

- Leia o número de elementos na primeira linha.
- Leia todos os elementos do vetor na segunda linha.
- Carregue um vetor com os elementos lidos.
- Imprima o vetor carregado na mesma linha entre colchetes, separando os elementos com ", ".
- Utilize um laço para imprimir os elementos do vetor com a seguinte técnica:
  - Se o índice for diferente de zero, imprima ", " antes do elemento.
  - Imprima o elemento.

## Desafio

- Crie uma função que recebe o vetor e o imprime formatado.

```c
//c
void imprime_vetor(int vet[], int n) {
}

//js ou ts
function imprimeVetor(vet: number[]): void {
}

//py
def imprime_vetor(vet: List[int]) -> None:

```

## Testes

```py
>>>>>>>> INSERT
3
1 2 3
======== EXPECT
[1, 2, 3]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
======== EXPECT
[]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
6
======== EXPECT
[6]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1 2 3 4 5
======== EXPECT
[1, 2, 3, 4, 5]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
4 2 3 1
======== EXPECT
[4, 2, 3, 1]
```
