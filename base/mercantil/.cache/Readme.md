# L3 - @mercantil V3 - Muitas rodadas

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/mercantil/cover.jpg)

## Motivação

## Descrição

- Pedro e João foram no Sílvio Santos. Esse problema é diferente da versão V1 do Mercantil.
- Nesse, cada produto tem um valor real que nenhum dos competidores conhece.
- O jogo funciona assim:
  - O primeiro competidor chuta um valor.
  - O segundo competidor chuta se acha que o valor real é maior ou menor que o valor chutado pelo primeiro competidor.
  - O primeiro jogador ganha se ele acertar o chute no valor exato ou se o segundo jogador chutar na direção errada.
  - O segundo jogador caso contrário.
- O jogo acontecerá em várias rodadas. Ganhará o jogo quem vencer mais rodadas. Acontecerá empate se ambos ganharem a mesma quantidade de rodadas.

### Entrada

- 1ª linha: a quantidade de rodadas.  
- 2ª linha: o valor dos produtos de todas as rodadas.
- 3ª linha: os chutes do primeiro (float) para todas as rodadas.
- 4ª linha: as escolhas do segundo (m para menor, M para maior) para todas as rodadas.  

## Saída

- Resultado do jogo ("primeiro" ou "segundo" ou "empate").

## Exemplos  

``` py
#INPUT
1  
1.0  
1.0  
M  
#OUTPUT
primeiro
#END
```

```py
#INPUT
2  
1.0 2.0  
1.0 2.1  
m m  
#OUTPUT
empate
#END
```

```py
#INPUT  
2
1.0 2.0
1.0 2.1
m M
#OUTPUT
primeiro
#END
```

```py
#INPUT
2
1.0 2.0
1.1 2.1
m M
#OUTPUT
empate
#END
```

```py
#INPUT
3
1.0 2.0 4.0
1.1 2.1 4.0
m M m
#OUTPUT
primeiro
#END
```

```py
#INPUT
3
1.0 2.0 4.02
1.1 2.1 4.1
M m m
#OUTPUT
segundo
#END
```
