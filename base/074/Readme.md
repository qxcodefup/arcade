## @074 #04_vet L3 - OBI 2017 - Fase 1 - Botas Trocadas
## @qxcode

![](__capa.jpg)

## Motivação

A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de pares de botas de vários tamanhos para seus soldados. No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada pé. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembalá-las, desta vez corretamente.

Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um programa que, dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão ser formados no total.

### Entrada

- A primeira linha da entrada contém um inteiro N indicando o número de botas individuais entregues. Cada uma das N linhas seguintes descreve uma bota, contendo um número inteiro M e uma letra L, separados por um espaço em branco. M indica o número do tamanho da bota e L indica o pé da bota: L= 'D' indica que a bota é para o pé direito, L= 'E' indica que a bota é para o pé esquerdo.

### Saída

- Seu programa deve imprimir uma única linha contendo um único número inteiro indicando o número total de pares corretos de botas que podem ser formados.

## Restrições

*   2 ≤ N ≤ 104
*   N é par
*   30 ≤ M ≤ 60
*   L é o caractere 'D' ou o caractere 'E'

## Exemplos

```
>>>>>>>>
4
40 D
41 E
41 D
40 E
========
2
<<<<<<<<

>>>>>>>>
6
38 E
39 E
40 D
38 D
40 D
37 E
========
1
<<<<<<<<
```

<!---
>>>>>>>> 01
10
30 E
31 E
31 D
31 E
30 D
31 D
31 D
31 E
30 D
31 D
========
4
<<<<<<<<

>>>>>>>> 02
10
44 D
40 E
44 D
43 E
42 E
40 D
41 D
42 D
43 D
43 E
========
3
<<<<<<<<

>>>>>>>> 03
10
59 D
59 E
59 D
60 D
59 D
60 D
60 E
59 E
59 D
60 D
========
3
<<<<<<<<

>>>>>>>> 04
12
56 D
59 D
58 E
56 D
60 E
56 D
57 E
59 E
58 D
56 D
57 D
60 E
========
3
<<<<<<<<
--->