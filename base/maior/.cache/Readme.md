# Hora do chute 2

![Silvio Santos](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/maior/cover.jpg)

## Descrição

- Pedro e João foram no Silvio Santos. Esse problema é diferente da versão V1 do Mercantil.
- Nesse, cada produto tem um valor real que nenhum dos competidores conhece.
- O jogo funciona assim:
  - O primeiro competidor chuta um valor.
  - O segundo competidor chuta se acha que o valor real é maior ou menor que o valor chutado pelo primeiro competidor.
  - O primeiro jogador ganha se ele acertar o chute no valor exato ou se o segundo jogador chutar na direção errada.
  - O segundo jogador caso contrário.

O objetivo do seu programa é informar quem ganhou a disputa. Você receberá o chute do primeiro jogador, a escolha do segundo jogador(maior ou menor) e o valor real do produto.

### Entrada

- linha 1: o chute do Primeiro Jogador(float)
- linha 2: a escolha do Segundo Jogador(m para menor e M para maior)
- linha 3: o valor real do produto(0.01 até 1000.0)

### Saida

- imprima quem foi o vencedor: "primeiro" ou "segundo"

## Exemplos

``` py
>>>>>>>> INSERT
1.1
m
1.0
======== EXPECT
segundo
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1.1
M
1.0
======== EXPECT
primeiro
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0.9
M
1.0
======== EXPECT
segundo
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1.3
m
2.0
======== EXPECT
primeiro
<<<<<<<< FINISH
```
