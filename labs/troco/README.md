# Calculando troco

![_](assets/cover.jpg)

Imagine que você trabalha em uma loja e precisa calcular o troco para os clientes. Seu objetivo é sempre entregar a menor quantidade possível de cédulas e moedas, priorizando sempre os valores maiores. Para trocos que envolvem centavos, isso pode ser um pouco mais complexo. Além disso, se o valor do troco não puder ser composto exato com as cédulas e moedas disponíveis, o programa deverá informar quanto falta.

Desenvolva um programa que calcule o troco em reais e centavos, utilizando as cédulas e moedas do Brasil. O programa deve mostrar a combinação de cédulas e moedas que resulta na menor quantidade de itens. Se houver uma pequena quantia que não possa ser paga **(inferior a R$ 0,05)**, informe o valor restante.

### Cédulas e moedas disponíveis

- Cédulas: R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2
- Moedas: R$ 1, R$ 0,50, R$ 0,25, R$ 0,10, R$ 0,05

**Ex:** 453 reais e 83 centavos.

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

Não use `ifs` e `elses`, faça um `vetor` de opções de troco.

### Entrada

- Um valor `float` representando o valor total do troco.

### Saída

- A combinação de cédulas e moedas que totaliza o valor do troco, **com a menor quantidade de itens.**
- Se houver valor residual inferior a **R$ 0,05**, imprima o valor restante.

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
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
<!-- load -->
