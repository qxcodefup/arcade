## #04_vetores L2 - Queda de dominós

  
![](__capa.jpg)

## Motivação

Deoclécio tem o passatempo de montar filas de dominós para derruba-las depois.Para fazer um efeito mais interessante, ele usa peças de dominó com tamanhos variados,  
sempre colocando as menores peças no começo da fila.  
Para ajudar nessa importante tarefa, Deo pediu sua ajuda para verificar se uma fila de dominós está dentro do padrão, ou seja, se os tamanhos dos dominós estão ordenados de forma crescente.

## Ação

Leia um vetor de tamanho n (quantidade de dominós) , e diga se ele está ordenado de forma crescente.  
  
### Entrada

*   O número **n** ( 0 < **n **<= 50) de dominós.  
*   A altura (inteira) de cada dominó.  

### Saída

*   "ok" caso  caso vetor esteja ordenado.
*   "precisa de ajuste" caso vetor esteja desordenado.

## Exemplos

```
>>>>>>>>
5
1 2 3 4 4
========
ok
<<<<<<<<

>>>>>>>>
6
2 4 2 6 8 10
========
precisa de ajuste
<<<<<<<<

>>>>>>>>
1
2
========
ok
<<<<<<<<
```

## Ajuda

#### Dica

Um vetor ![](__vetor.jpg) está ordenado de forma crescente se ![](__condicao.jpg).
Para todo elemento na posição **\[** **i \] **temos que ele é menor que o elemento na posição posterior** \[** **i +1\]** . Ou seja, caso um elemento na posição **\[ i \]** seja maior que seu vizinho da frente ( posição **\[** **i +1\]** ) o vetor não é ordenado.

#### Pseudocódigo
```
crie bool Ordenado = true
Leia N
Crie um vetor Dominós de tamanho N
Laço que leia e guarde no vetor todos elementos
Laço que inicia i = 1 e adiciona 1 enquanto i menor que N{
  Se Dominós na posição i menor que Dominós na posição i - 1
    ordenado = false
}
Se (Ordenado) 
  Mostre "ok"
Se não
  Mostre "precisa de ajuste"
```

#
