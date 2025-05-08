# Bolada na fuça

![Resultado de imagem para haikyuu](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/bolada/cover.jpg)

## Motivação

Haikyuu é um anime muito show de bola sobre vôlei. Se você já tiver terminado todas as questões de seleção do moodle, você pode ir conferir alguns episódios em [LINK](https://www.animesync.tv/v/V3Eo6xG9Wrjv/).

Alan Brado é um treinador muito competente e determinado. Numa certa manhã, ele reuniu todo o time e decidiu fazer um treino de saque para observar seus jogadores e o desempenho neles no jogo. Depois de alguns cálculos, ele percebeu um padrão e então criou uma fórmula para calcular o índice de poder dos saques. A fórmula é dada por:

P = ((F \* T) - 80) / 10

- P é o poder
- F a força
- T é a força para cada tipo de saque

- Se tipo for
  - b (por baixo), T tem valor 20.
  - c (por cima), T tem valor 18.

Com isso, ele concluiu uma faixa de satisfação dos saques:

- Se o poder for inferior a 150, "Fraco, nem passou".
- Se for maior ou igual a 150 e inferior 180, "Perfeito".
- Se for entre 180 e 210 "Satisfeito".
- Caso seja superior a 210, "Muito forte, bola fora".

Desenvolva o programa que dados os valores de entrada, imprima o resultado de satisfação.

### Entrada

- Tipo de saque (c ou b) do tipo char
- Um inteiro para a força do atleta

## Saída

- A precisão do saque do atleta

## Exemplos

``` py
>>>>>>>> INSERT
c
100
======== EXPECT
Perfeito
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
b
68
======== EXPECT
Fraco, nem passou
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
c
160
======== EXPECT
Muito forte, bola fora
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
b
99
======== EXPECT
Satisfeito
<<<<<<<< FINISH
```

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
