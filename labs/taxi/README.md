# Frota de taxi - OBI 2005

![_](assets/cover.jpg)

A Companhia de Táxi Tabajara (CTT) é uma das maiores empresas de transporte do país. Possui uma vasta frota de carros e opera em todas as grandes cidades. Recentemente a CTT modernizou a sua frota, adquirindo um lote de 500 carros bi-combustíveis (carros que podem utilizar como combustível tanto álcool quanto gasolina). Além do maior conforto para os passageiros e o menor gasto com manutenção, com os novos carros é possível uma redução adicional de custo: como o preço da gasolina está sujeito a variações muito bruscas e pode ser vantagem, em certos momentos, utilizar álcool como combustível. Entretanto, os carros possuem um melhor desempenho utilizando gasolina, ou seja, em geral, um carro percorre mais quilômetros por litro de gasolina do que por litro de álcool.  
  

Você deve escrever um programa que, dados o preço do litro de álcool, o preço do litro de gasolina e os quilômetros por litro que um carro bi-combustível realiza com cada um desses combustíveis, determine se é mais econômico abastecer os carros da CTT com álcool ou com gasolina. No caso de não haver diferença de custo entre abastecer com álcool ou gasolina a CTT prefere utilizar gasolina.
  
### Entrada

A entrada é composta por quatro linhas contendo quatro números reais com precisão de duas casas decimais A, G, Ra e Rg , representando respectivamente o preço por litro do álcool, o preço por litro da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento (km/l) do carro utilizando gasolina. A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).
  
### Saída

A saída deve ser composta por uma única linha contendo o caractere 'A' se é mais econômico abastecer a frota com álcool ou o caractere 'G' se é mais econômico ou indiferente abastecer a frota com gasolina. A saída deve ser escrita no dispositivo de saída padrão (normalmente a tela).
  
## Restrições

- 0.01 ≤ A ≤ 10.00  
- 0.01 ≤ G ≤ 10.00  
- 0.01 ≤ Ra ≤ 20.00  
- 0.01 ≤ Rg ≤ 20.00

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
1.00
1.00
8.00
8.01
======== EXPECT
G
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
10.00
0.01
10.01
0.01
======== EXPECT
A
<<<<<<<< FINISH
```
<!-- load -->
