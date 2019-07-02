## @0043 #02_sel L4 - Dorme Tarde Acordar Cedo!
## @qxcode

### Motivação

![](capa.jpg)
Já colocou o despertador no seu celular e ele lhe informou que você só tinha algumas poucas horas de sono?
Quem mandou dormir às 2 da manhã e ter que acordar às 5:30!

### Ação

Faça um código que receba horas minutos e segundos tanto da hora atual e da hora do despertador e retorne quantas horas minutos e segundos você tem de sono.
Se o segundo horário for menor que o primeiro, compreenda que é no outro dia.
Se você dormir 23:00 e acorda às 6:00 então você tem 7:00 horas de sono.
\[DS\]

### I/O

### Entrada:

linha 1: hora minuto segundo (do horário que vai dormir).
linha 2: hora minuto segundo (do horário que vai acordar).

### Saída:

hora minuto segundo (do tempo de sono que resta).


### Exemplos

```

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

Ajuda Em python2 você pode pegar as strings assim:
```
h1, m1, s1 = raw\_input().split(" ")
h2, m2, s2 = raw\_input().split(" ")
```
Em python3 você pode pegar as strings assim:
```
h1, m1, s1 = input().split(" ")
h2, m2, s2 = input().split(" ")
```
As variáveis serão string.Para converter para int use: 
```
h1 = int(h1) h2 = int(h2) 
```
etc.

<!---

>>>>>>>>
0 0 0
1 1 1
========
01 01 01
<<<<<<<<


>>>>>>>>
10 0 0
11 12 13
========
01 12 13
<<<<<<<<


>>>>>>>>
04 05 00
03 05 00
========
23 00 00
<<<<<<<<


>>>>>>>>
03 15 32
21 34 07
========
18 18 35
<<<<<<<<


>>>>>>>>
21 15 32
06 34 09
========
09 18 37
<<<<<<<<

--->