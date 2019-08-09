## @157 #02_sel L3 - Frota de Táxi - OBI 2005
## @qxcode

![](capa.jpg)

## Motivação

A Companhia de Táxi Tabajara (CTT) é uma das maiores empresas de transporte do paı́s. Possui uma  
vasta frota de carros e opera em todas as grandes cidades. Recentemente a CTT modernizou a sua  
frota, adquirindo um lote de 500 carros bi-combustı́veis (carros que podem utilizar como combustı́vel  
tanto álcool quanto gasolina). Além do maior conforto para os passageiros e o menor gasto com  
manutenção, com os novos carros é possı́vel uma redução adicional de custo: como o preço da gasolina  
está sujeito a variações muito bruscas e pode ser vantagem, em certos momentos, utilizar álcool como  
combustı́vel. Entretanto, os carros possuem um melhor desempenho utilizando gasolina, ou seja, em  
geral, um carro percorre mais quilômetros por litro de gasolina do que por litro de álcool.  
  
## Ação

Você deve escrever um programa que, dados o preço do litro de álcool, o preço do litro de gasolina e os  
quilômetros por litro que um carro bi-combustı́vel realiza com cada um desses combustı́veis, determine  
se é mais econômico abastecer os carros da CTT com álcool ou com gasolina. No caso de não haver  
diferença de custo entre abastecer com álcool ou gasolina a CTT prefere utilizar gasolina.  
  
### Entrada

- A entrada é composta por uma linha contendo quatro números reais com precisão de duas casas  
decimais A, G, Ra e Rg , representando respectivamente o preço por litro do álcool, o preço por litro  
da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento (km/l) do carro utilizando  
gasolina.  
A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).  
  
### Saída

- A saı́da deve ser composta por uma única linha contendo o caractere 'A' se é mais econômico abastecer
a frota com álcool ou o caractere 'G' se é mais econômico ou indiferente abastecer a frota com gasolina.  
A saı́da deve ser escrita no dispositivo de saı́da padrão (normalmente a tela).  
  
## Restrições

0.01 ≤ A ≤ 10.00  
0.01 ≤ G ≤ 10.00  
0.01 ≤ Ra ≤ 20.00  
0.01 ≤ Rg ≤ 20.00

## Exemplos

```
>>>>>>>> 01
1.00 1.00 8.00 8.01
========
G
<<<<<<<<

>>>>>>>> 02
10.00 0.01 10.01 0.01
========
A
<<<<<<<<

>>>>>>>> 03
2.15 3.17 19.34 18.22
========
A
<<<<<<<<

>>>>>>>> 04
3.90 3.80 19.01 19.99
========
G
<<<<<<<<

>>>>>>>> 05
4.15 3.17 16.64 19.22
========
G
<<<<<<<<
```

#

<!---
>>>>>>>> 06
1.15 3.02 9.02 8.92
========
A
<<<<<<<<


>>>>>>>> 07
9.15 9.17 9.43 8.76
========
A
<<<<<<<<


>>>>>>>> 08
9.15 9.76 1.37 1.44
========
A
<<<<<<<<


>>>>>>>> 09
9.85 8.71 1.76 1.94
========
G
<<<<<<<<


>>>>>>>> 10
3.77 3.61 10.43 11.88
========
G
<<<<<<<<


>>>>>>>> 11
0.30 0.31 19.02 19.99
========
G
<<<<<<<<


>>>>>>>> 12
1.20 2.30 10.00 16.00
========
A
<<<<<<<<


>>>>>>>> 13
1.37 1.76 1.76 1.35
========
A
<<<<<<<<


>>>>>>>> 14
1.00 1.00 2.00 2.00
========
G
<<<<<<<<


>>>>>>>> 15
0.01 0.01 20.00 20.00
========
G
<<<<<<<<


>>>>>>>> 16
0.02 0.01 20.00 20.00
========
G
<<<<<<<<


>>>>>>>> 17
0.01 0.02 20.00 20.00
========
A
<<<<<<<<


>>>>>>>> 18
10.00 0.01 20.00 20.00
========
G
<<<<<<<<


>>>>>>>> 19
0.01 10.00 20.00 20.00
========
A
<<<<<<<<


>>>>>>>> 20
10.00 0.01 10.00 0.01
========
G
<<<<<<<<

--->