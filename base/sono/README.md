# Quanto tempo ainda tenho

![_](assets/cover.jpg)

## Motivação

Já colocou o despertador no seu celular e ele lhe informou que você só tinha algumas poucas horas de sono?
Quem mandou dormir às 2 da manhã e ter que acordar às 5:30!

## Ação

Faça um código que receba horas minutos e segundos tanto da hora atual e da hora do despertador e retorne quantas horas minutos e segundos você tem de sono.

Se o segundo horário for menor que o primeiro, compreenda que é no outro dia.

Se você dormir 23:00 e acorda às 6:00 então você tem 7:00 horas de sono.

### Entrada

- linha 1: hora minuto segundo (do horário que vai dormir).
- linha 2: hora minuto segundo (do horário que vai acordar).

## Saída

- hora minuto segundo (do tempo de sono que resta).

## Testes

``` py
>>>>>>>> INSERT
01 00 00
03 00 00
======== EXPECT
02 00 00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
02 11 00
03 10 10
======== EXPECT
00 59 10
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
04 10 00
03 10 10
======== EXPECT
23 00 10
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
04 00 01
03 00 00
======== EXPECT
22 59 59
<<<<<<<< FINISH
```

## Ajuda

Em python3 você pode pegar as strings assim:

```py
h1, m1, s1 = map(int, input().split(" "))
h2, m2, s2 = map(int, input().split(" "))
```

### Observação

Note que você deve imprimir sempre 2 dígitos. Exemplo ele duma 1 hora, 2 minutos e 3 segundos deverá ser impresso: "01 02 03". Em C você pode usar o seguinte código para imprimir o 0 a esquerda:

```c
printf("%02d\n", hora);
```
