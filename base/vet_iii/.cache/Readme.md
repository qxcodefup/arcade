# impressão formatada

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/vet_iii/cover.jpg)

## Contexto

Ao trabalhar com vetores, muitas vezes é necessário formatar a saída de forma mais legível. Neste exercício, o objetivo é imprimir um vetor em um formato específico, utilizando uma função que realiza a formatação correta, separando os elementos por vírgulas e espaços.

Você deve implementar um programa que leia um vetor, armazene os valores e depois os exiba com uma formatação específica. O vetor deve ser impresso entre colchetes e os elementos separados por **"`,` "**. Se o vetor estiver vazio, deve ser exibido como `[]`.

### Entrada

- A primeira linha contém um número inteiro **N** representando a quantidade de elementos do vetor.
- A segunda linha contém **N** inteiros, separados por espaços, que devem ser inseridos no vetor.

### Saída

- Imprima o vetor carregado entre colchetes, com os elementos separados por espaços.

### Restrições

- **0 ≤ N ≤ 1000** (O vetor pode ter de 0 a 1000 elementos)
- Cada elemento será um número inteiro.

## Desafio

Implemente uma função que receba o vetor e o imprima formatado conforme as especificações:

### Programando em C

```c
void imprime_vetor(int vet[], int n) {
}
```

### Programando em Python

```py
def imprime_vetor(vet: List[int]) -> None:
```

### Programando em TS

```ts
function imprimeVetor(vet: number[]): void {
}
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
