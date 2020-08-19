## #vetores L3 - Zoo quantas especies!


![](__capa.jpg)

## Motivação

O dono do zoológico quer a lista de todas as especies de animais  
que existem no zoológico. Para isso, ele te deu uma lista de todos os animais.

Ele quer que você faça um programa que retorne a quantidade de espécies diferentes.  
Considere que um número representa uma especie.

## Ação

Faça um programa para calcular a quantidade de numero diferentes inseridos dado um vetor e seu tamanho como entrada.

Obs.: Não use uma função de ordenar pronta.  

### Entrada

*   Inteiro com a quantidade de elementos do vetor (1 até 50).
*   Elementos inteiros do vetor.  

### Saída

*   Quantidade de espécies.

## Exemplos

```
>>>>>>>>
3
1 1 2
========
2
<<<<<<<<

>>>>>>>>
5
1 3 2 2 3
========
3
<<<<<<<<

>>>>>>>>
8
1 9 3 3 3 2 1 4
========
5
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
leia o TamanhoDoVator
laço iniciando i = 0 que adiciona 1 enquanto i menor que TamanhoDoVator{
  leia o vetor na posição i
}
laço iniciando i = 0 que adiciona 1 enquanto i menor que TamanhoDoVator{
  laço iniciando j = i+1 que adiciona 1 enquanto j menor que TamanhoDoVator{
    se(vetor na posição i igual vetor na posição j){
      vetor na posição j = 0
    }
  }
}
laço iniciando i = 0 que adiciona 1 enquanto i menor que TamanhoDoVator{
  se(vetor na posição i diferente de 0)  
    cont++
}
mostre cont
```
