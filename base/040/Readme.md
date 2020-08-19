## #seleção L3 - Está Trabalhand ou Não!


![](__capa.jpg)

## Motivação
Um funcionário trabalha de segunda a sexta, de 8 até 11:59 e de
14 até 17:59. Às 17:59 é pra ele ainda estar trabalhando!
No sábado ele trabalha apenas de 8 até 11:59.

O chefe cansou de tentar decorar isso tudo e deu 15 contos pra você
fazer um código que lê o dia da semana, a hora e o minuto e informa ao chefe se ainda é pro funcionário estar trabalhando!

[DS]

### Entrada
- É formada por um dia inteiro representando o dia (1 = DOM, 2 = SEG, 3 = TER, 4 = QUA, 5 =QUI, 6 = SEX, 7 = SAB) e mais dois inteiros representando hora e minuto, um por linha.

### Saída
- Deve ser SIM se ele deve estar trabalhando ou NAO se ele não deve estar trabalhando.

## Exemplos

```
>>>>>>>>
2
12
20
========
NAO
<<<<<<<<

>>>>>>>>
1
05
02
========
NAO
<<<<<<<<

>>>>>>>>
3
19
19
========
NAO
<<<<<<<<
```

## Dicas 


Você pode separar em 3 if's principais, pois os casos diferentes são domingo onde é o dia de folga, segunda a sexta onde ele trabalha em 2 horários, e no sábado, onde ele trabalha só pela manhã. Caso a primeira linha seja 1, você já deve imprimir NAO, pois é domingo. Caso esteja entre 2 e 6, você tera duas opções, se o valor da hora estiver entre 8 e 11(incluindo 11) OU estiver entre 14 e 17(incluindo 17) ele estará no trabalho. Por último, se o dia for 7, você deverá verificar se o horário está entre 8 e 11, pois ele só estará no trabalho pela manhã. 


