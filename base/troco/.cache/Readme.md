# @troco - Calculando troco

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/troco/cover.jpg)

Você precisa fazer um programa que calcule como dar o troco em dinheiro.

Utilize todas as opções de pagamento disponíveis no Brasil, entre cédulas e moedas.

Gere a opção com a menor quantidade de ítens possível.

Por exemplo: 453 reais e 83 centavos.

```py
4 de 100.00
1 de 50.00
1 de 2.00
1 de 1.00
1 de 0.50
1 de 0.25
1 de 0.05
Falta 0.03
```

Observação: Não use ifs e elses, faça um vetor de opções de troco.

- Entrada
  - Um número float indicando o valor do troco.
- Saída
  - As notas e moedas que devem ser dadas e se houver valor quebrado inferior a 0.05, informe ao final.

``` py
>>>>>>>> INSERT
77.00
======== EXPECT
1 de 50.00
1 de 20.00
1 de 5.00
1 de 2.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
19.00
======== EXPECT
1 de 10.00
1 de 5.00
2 de 2.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
17.39
======== EXPECT
1 de 10.00
1 de 5.00
1 de 2.00
1 de 0.25
1 de 0.10
Falta 0.04
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
57.01
======== EXPECT
1 de 50.00
1 de 5.00
1 de 2.00
Falta 0.01
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
377.76
======== EXPECT
3 de 100.00
1 de 50.00
1 de 20.00
1 de 5.00
1 de 2.00
1 de 0.50
1 de 0.25
Falta 0.01
<<<<<<<< FINISH

```
