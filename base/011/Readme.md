## ©01_ope L1 - Formatando data
#### Imprimindo inteiros com duas casas e arredondando com operador de módulo

![](__capa.jpg)

## Motivação

Os formatos de data e hora são diversos. Leia hora, minuto, dia, mês e ano e imprima no formato hh:mm dd/mm/aa. Você deve certificar-se de imprimir um 0 à esquerda para garantir que todas as informações tenham 2 dígitos. A hora de entrada poderá aparecer no formato 24 horas, mas apresente-a na saída no formato 12h.

### Entrada:
- hora, minuto, dia, mês e ano, um por linha.

### Saída:
- hh:mm dd/mm/aa, sendo hora de 0 a 11.

## Exemplos

```
>>>>>>>> 01
4
12
12
3
1988
========
04:12 12/03/88
<<<<<<<<

>>>>>>>> 02
14
7
7
9
2005
========
02:07 07/09/05
<<<<<<<<

>>>>>>>> 03
24
1
1
1
2076
========
00:01 01/01/76
<<<<<<<<
```

## Ajuda

Em C você pode imprimir zeros à esquerda informando quantas casas decimais você deseja obter na parte inteira.

O comando printf("%03d", value) imprime a variável value e se ela menos de 3 dígitos, completa com zeros à esquerda.

Você pode usar o operador de módulo para quebrar a parte da informação de você precisa para pegar apenas a hora ou a dezena e unidade do ano.

---

