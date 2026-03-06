# Comprando tv parcelada

![_](cover.jpg)

## Contexto

Aluízio quer comprar uma televisão parcelada. No plano de pagamento, os juros aumentam de acordo com o número de parcelas, seguindo a regra abaixo:

- **1 vez:** sem juros
- **2 vezes:** 5% de juros
- **3 vezes:** 10% de juros
- **4 vezes:** 15% de juros
- **5 vezes:** 20% de juros
- **6 vezes:** 25% de juros
- **7 vezes:** 30% de juros
- **8 vezes:** 35% de juros
- **9 vezes:** 40% de juros
- **10 vezes:** 45% de juros

Sua tarefa é criar um programa que, dado o valor da televisão e a quantidade de parcelas, calcule o valor total a ser pago **(com juros)** e o valor de cada parcela.

### Entrada

- A primeira linha contém o valor da televisão.
- A segunda linha contém a quantidade de parcelas.

### Saída

- **1ª linha:** O valor da parcela, com duas casas decimais.
- **2ª linha:** O valor total que Aluízio vai pagar, com duas casas decimais.

### Restrições

- A quantidade de parcelas será um número inteiro entre **1** e **10**.

``` py
>>>>>>>> INSERT
100
1
======== EXPECT
100.00
100.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
100
2
======== EXPECT
52.50
105.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
100
10
======== EXPECT
14.50
145.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
102
3
======== EXPECT
37.40
112.20
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
52
4
======== EXPECT
14.95
59.80
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
100
5
======== EXPECT
24.00
120.00
<<<<<<<< FINISH

```

Problema proposto por Aluízio Lopes.
