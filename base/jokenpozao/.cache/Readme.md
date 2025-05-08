# Jokenpo de 9

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/jokenpozao/cover.jpg)

## Motivação

No jokenpo de nove elementos temos uma lista circular onde cada um vence os quatro elementos a sua frente e perde para quatro elementos atrás dele. A sequência é a seguinte:

Em inglês:

- \[paper, air, water, gun, rock, fire, scissors, human, sponge\], paper, air, water, gun, rock, ...

``` py
ROCK POUNDS OUT FIRE, CRUSHES SCISSORS, HUMAN & SPONGE.
FIRE MELTS SCISSORS, BURNS PAPER, HUMAN & SPONGE.
SCISSORS SWISH THROUGH AIR, CUT PAPER, HUMAN & SPONGE.
HUMAN CLEANS WITH SPONGE, WRITES PAPER, BREATHES AIR, DRINKS WATER.
SPONGE SOAKS PAPER, USES AIR POCKETS, ABSORBS WATER, CLEANS GUN.
PAPER FANS AIR, COVERS ROCK, FLOATS ON WATER, OUTLAWS GUN.
AIR BLOWS OUT FIRE, ERODES ROCK, EVAPORATES WATER, TARNISHES GUN.
WATER ERODES ROCK, PUTS OUT FIRE, RUSTS SCISSORS & GUN.
GUN TARGETS ROCK, FIRES, OUTCLASSES SCISSORS, SHOOTS HUMAN.
```

Em português:

- \[papel, ar, água, arma, pedra, fogo, tesoura, humano, esponja\], papel, ar, água, arma, ...

``` py
ROCHA AMASSA FOGO, ESMAGA TESOURA, HUMANO E ESPONJA.
FOGO DERRETE TESOURA, QUEIMA PAPEL, HUMANO E ESPONJA.
TESOURA CORTA PELO AR, CORTA PAPEL, HUMANO E ESPONJA.
HUMANO LIMPA COM ESPONJA, ESCREVE EM PAPEL, RESPIRA AR, BEBE ÁGUA.
ESPONJA ABSORVE PAPEL, USA BOLSAS DE AR, ABSORVE ÁGUA, LIMPA ARMA.
PAPEL VENTILA AR, COBRE ROCHA, FLOTA NA ÁGUA, PROÍBE ARMA.
AR APAGA FOGO, ERODE ROCHA, EVAPORA ÁGUA, ENFERRUJA ARMA.
ÁGUA ERODE ROCHA, APAGA FOGO, ENFERRUJA TESOURA E ARMA.
ARMA MIRA ROCHA, DISPARA, SUPERA TESOURA, ATIRA NO HUMANO.
```

### Entrada

- Texto em inglês em minúsculo e sem acentos contendo as opções dos dois jogadores.  

## Saída

- empate, jog1 ou jog2.

## Exemplos

``` py
>>>>>>>> INSERT 01
sponge
gun
======== EXPECT
jog1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
air
scissors
======== EXPECT
jog2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
gun
gun
======== EXPECT
empate
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 04
air
gun
======== EXPECT
jog1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 05
fire
air
======== EXPECT
jog2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 06
water
human
======== EXPECT
jog2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 07
scissors
paper
======== EXPECT
jog1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 08
sponge
human
======== EXPECT
jog2
<<<<<<<< FINISH
```
