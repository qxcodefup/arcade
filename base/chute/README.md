# Quem chega mais perto

![_](assets/cover.jpg)

Pedro e João foram no Sílvio Santos. O programa era aquele que o Sílvio mostrava um produto do mercantil, ambos os participantes chutavam o preço e a pessoa que chegasse mais próximo do preço real ganhava.

O objetivo do seu programa é informar quem ganhou a disputa. Você receberá o valor do produto e o valor do chute de cada jogador. O jogador que chegar mais perto ganha.

Se ambos ficarem à mesma distancia do valor real, então houve empate.

### Entrada

* linha 1: o valor do produto.(valor inteiro entre 1 e 100)
* linha 2: o chute do Primeiro
* linha 3: o chute de Segundo

### Saída

* "primeiro" se o chute do Primeiro for o mais próximo do valor do produto
* "segundo" se o chute do Segundo for o mais próximo do valor do produto
* "empate" caso ambos ficarem à mesma distancia

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
1
2
3
======== EXPECT
primeiro
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
5
4
======== EXPECT
segundo
<<<<<<<< FINISH
```
<!-- load -->
