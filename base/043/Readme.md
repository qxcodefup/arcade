## ©02_seleção L3 - Dorme Tarde Acordar Cedo!


![](__capa.jpg)

## Motivação

Já colocou o despertador no seu celular e ele lhe informou que você só tinha algumas poucas horas de sono?
Quem mandou dormir às 2 da manhã e ter que acordar às 5:30!

## Ação

Faça um código que receba horas minutos e segundos tanto da hora atual e da hora do despertador e retorne quantas horas minutos e segundos você tem de sono.
Se o segundo horário for menor que o primeiro, compreenda que é no outro dia.
Se você dormir 23:00 e acorda às 6:00 então você tem 7:00 horas de sono.
\[DS\]

### Entrada

- linha 1: hora minuto segundo (do horário que vai dormir).
- linha 2: hora minuto segundo (do horário que vai acordar).

### Saída

- hora minuto segundo (do tempo de sono que resta).

## Exemplos

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

## Ajuda
Em python2 você pode pegar as strings assim:
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


### Pseudocódigo

```c
LEIA H1, M1, S1;
LEIA H2, M2, S2;

SEG3 = S2 - S1;
SE SEG3 < 0 
	M1++;
	SEG = SEG + 60;

MIN3 = M2 - M1;
SE MIN3 < 0
	H1++;
	MIN3 = MIN3 + 60;

HOR3 = H2 - H1;
SE HOR3 < 0 
	HOR3 = HOR3 +  24;

IMPRIMIR "HOR3 MIN3 SEG3"; 
```

### Observação

Note que você deve imprimir sempre 2 dígitos. Exemplo ele duma 1 hora, 2 minutos e 3 segundos deverá ser impresso: "01 02 03". Em C você pode usar o seguinte código para imprimir o 0 a esquerda:
```c
printf("%02d\n", hora);
```


