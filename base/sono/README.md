# Quanto tempo ainda tenho

![_](assets/cover.jpg)

Já colocou o despertador no seu celular e ele lhe informou que você só tinha algumas poucas horas de sono? Faça um código que receba horas minutos e segundos da hora atual e da hora do horário de despertar e retorne quantas horas minutos e segundos você terá de sono.

Se o segundo horário for menor que o primeiro, compreenda como o dia seguinte. Se você dormir 23:00 e acorda às 6:00 então você tem 7:00 horas de sono.

### Entrada

- linha 1: hora minuto segundo (do horário que vai dormir).
- linha 2: hora minuto segundo (do horário que vai acordar).

### Saída

- hora minuto segundo (do tempo de sono que resta).

## Exemplos

<!-- load tests.toml --tests 3 -->
```py
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
<!-- load -->
