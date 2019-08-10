## @032 #02_sel L2 - Bolada na fuça
## @qxcode

![Resultado de imagem para haikyuu](__capa.jpg)

## Motivação

Haikyuu é um anime muito show de bola sobre vôlei. Se você já tiver terminado todas as questões de seleção do moodle, você pode ir conferir alguns episódios em [LINK](https://www.animesync.tv/v/V3Eo6xG9Wrjv/).

Alan Brado é um treinador muito competente e determinado. Numa certa manhã, ele reuniu todo time e decidiu fazer um treino de saque para observar seus jogadores e o desempenho neles no jogo. Depois de alguns cálculos, ele percebeu um padrão e então criou uma fórmula para calcular o índice de poder dos saques. A fórmula é dada por:

P = ((F \* T) - 80) / 10

* P é o poder
* F a força
* T é o tipo de saque

* b (por baixo), com valor 20.
* c (por cima), com valor 18.

Com isso, ele concluiu uma faixa de satisfação dos saques:

* Se o poder for inferior a 150, "Fraco, nem passou".
* Se for maior ou igual a 150 e inferior 180, "Perfeito".
* Se for entre 180 e 210 "Satisfeito".
* Caso seja superior a 210, "Muito forte, bola fora".

Desenvolva o programa que dados os valores de entrada, imprima o resultado de satisfação.

### Entrada

* Tipo de saque (c ou b) do tipo char
 
* Um inteiro para a força do atleta

### Saída

* A precisão do saque do atleta

## Exemplos:

```
>>>>>>>>
c
100
========
Perfeito
<<<<<<<<

>>>>>>>>
b
68
========
Fraco, nem passou
<<<<<<<<

>>>>>>>>
c
160
========
Muito forte, bola fora
<<<<<<<<

>>>>>>>>
b
99
========
Satisfeito
<<<<<<<<
```

#

<!---
>>>>>>>>
c
90
========
Perfeito
<<<<<<<<


>>>>>>>>
c
87
========
Fraco, nem passou
<<<<<<<<


>>>>>>>>
b
120
========
Muito forte, bola fora
<<<<<<<<


>>>>>>>>
c
127
========
Muito forte, bola fora
<<<<<<<<


>>>>>>>>
c
115
========
Satisfeito
<<<<<<<<


>>>>>>>>
c
50
========
Fraco, nem passou
<<<<<<<<

--->

## Dicas

Quando for fazer os if elses, lembre que pode fazer os if elses apenas utilizando o intervalo superior.

```C
if(valor < 150)
 fazer algo
else if(valor < 180)
 fazer algo
else if(valor < 210)
 fazer algo
else
 fazer algo
```
---