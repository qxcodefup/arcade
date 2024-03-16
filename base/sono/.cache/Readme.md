# L3 - Horas de @sono

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/sono/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup sono`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sono/cover.jpg)

## Motivação

Já colocou o despertador no seu celular e ele lhe informou que você só tinha algumas poucas horas de sono?
Quem mandou dormir às 2 da manhã e ter que acordar às 5:30!

## Ação

Faça um código que receba horas minutos e segundos tanto da hora atual e da hora do despertador e retorne quantas horas minutos e segundos você tem de sono.
Se o segundo horário for menor que o primeiro, compreenda que é no outro dia.
Se você dormir 23:00 e acorda às 6:00 então você tem 7:00 horas de sono.
\[DS\]

## Entrada

- linha 1: hora minuto segundo (do horário que vai dormir).
- linha 2: hora minuto segundo (do horário que vai acordar).

## Saída

- hora minuto segundo (do tempo de sono que resta).

## Exemplos

``` txt
>>>>>>>>
01 00 00
03 00 00
========
02 00 00
<<<<<<<<

>>>>>>>>
02 11 00
03 10 10
========
00 59 10
<<<<<<<<

>>>>>>>>
04 10 00
03 10 10
========
23 00 10
<<<<<<<<

>>>>>>>>
04 00 01
03 00 00
========
22 59 59
<<<<<<<<
```

## Ajuda

Em python2 você pode pegar as strings assim:

```txt
h1, m1, s1 = raw\_input().split(" ")
h2, m2, s2 = raw\_input().split(" ")
```

Em python3 você pode pegar as strings assim:

```py
h1, m1, s1 = input().split(" ")
h2, m2, s2 = input().split(" ")
```

As variáveis serão string.Para converter para int use:

```py
h1 = int(h1) h2 = int(h2) 
```

etc.

### Observação

Note que você deve imprimir sempre 2 dígitos. Exemplo ele duma 1 hora, 2 minutos e 3 segundos deverá ser impresso: "01 02 03". Em C você pode usar o seguinte código para imprimir o 0 a esquerda:

```c
printf("%02d\n", hora);
```
