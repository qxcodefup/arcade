# Derrubando dominós

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/dominos/cover.jpg)

## Motivação

Deoclécio tem o passatempo de montar filas de dominós para derruba-las depois. Para fazer um efeito mais interessante, ele usa peças de dominó com tamanhos variados, sempre colocando as menores peças no começo da fila.

Para ajudar nessa importante tarefa, Deo pediu sua ajuda para verificar se uma fila de dominós está dentro do padrão, ou seja, se os tamanhos dos dominós estão ordenados de forma crescente.

## Ação

Leia um vetor de tamanho n (quantidade de dominós) , e diga se ele está ordenado de forma crescente.  
  
### Entrada

* O número **n** ( 0 < n <= 50) de dominós.  
* A altura (inteira) de cada dominó.  

## Saída

* "ok" caso  caso vetor esteja ordenado.
* "precisa de ajuste" caso vetor esteja desordenado.

## Exemplos

``` py
>>>>>>>> INSERT
5
1 2 3 4 4
======== EXPECT
ok
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
2 4 2 6 8 10
======== EXPECT
precisa de ajuste
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
2
======== EXPECT
ok
<<<<<<<< FINISH
```
