# Torres de Hanoi

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/hanoi/cover.jpg)

## Motivação

O objetivo do jogo das torres de hanoi é mover todos os discos da torre inicial para a torre final, sem colocar disco maior sobre disco menor. Inicialmente, a torre final e a torre auxiliar estão vazias. Você pode usar a torre auxiliar para lhe ajudar a mover os discos.

## Exemplo

```py
      ++                  ++                 ++
      ||                  ||                 ||
      ||                  ||                 ||
      ||                  ||                 ||
      ||                  ||                 ||
    +-++-+                ||                 ||
    |    |                ||                 ||
  +-+----+-+              ||                 ||
  |        |              ||                 ||
+-+--------+-+            ||                 ||
|            |            ||                 ||
+------------+            ++                 ++
Torre inicial        Torre auxiliar      Torre final
      A                   B                  C

Solução:
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C

```

Simule as jogadas em [JOGO](http://www.dynamicdrive.com/dynamicindex12/towerhanoi.htm)

Este problema parece difícil de resolver para o caso geral com _n_ discos. Porém, como acontece em vários problemas, utilizando recursão chegamos em um algoritmo simples e elegante. Mova recursivamente os \\(n-1\\) primeiros discos para a torre auxiliar, depois mova o último disco da torre inicial para a torre final, e então mova recursivamente os \\(n-1\\) discos da torre auxiliar para a torre final.

### Entrada

- Número de discos para mover da torre 'A' para a torre 'C'.

## Saída

- Sequência de movimentos para mover todos os discos (um movimento por linha).
- Notação do movimento do disco no topo da torre
  - torre de origem -> torre de destino.

## Exemplos

``` py
>>>>>>>> INSERT
3
======== EXPECT
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
<<<<<<<< FINISH
```
