# L0 - @vet_iii - impressão formatada

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/vet_iii/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup vet_iii`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

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

```txt
>>>>>>>>
3
1 2 3
========
[1, 2, 3]
<<<<<<<<

>>>>>>>>
0
========
[]
<<<<<<<<

>>>>>>>>
1
6
========
[6]
<<<<<<<<

>>>>>>>>
5
1 2 3 4 5
========
[1, 2, 3, 4, 5]
<<<<<<<<

>>>>>>>>
4
4 2 3 1
========
[4, 2, 3, 1]
```
