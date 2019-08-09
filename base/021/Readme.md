## @021 #02_sel L2 - Aumento de Salário
## @qxcode

![](capa.jpg)

## Motivação

Mês de março, todos os funcionários da empresa vão receber aumento. Para promover os menos favorecidos foram dados aumentos maiores para os funcionários que recebem menos.

Os que recebem até 1000.00 reais, vão ganhar 20%. Quem recebe até 1500.00 vai ganhar 15%. Quem recebe até 2000.00 vai ganhar 10%. Quem recebe mais de 2000.00 só vai ganhar 5%.

Os funcionários estão nervosos pra saber quanto vão ganhar no novo contracheque. Você que sabe programar resolveu fazer um programinha no qual o funcionário entra com seu salário e você informa o novo salário.

## Ação

Receba o valor do salário atual do funcionário e imprima o novo salário de acordo com as regras informadas na descrição.

### Entrada:

* Salário atual do funcionário (float com até duas casas decimais).

### Saída:

* Novo Salário (float com duas casas decimais).

## Ajuda

Se a variável total guarda o salário final, em python você pode forçar a saída a ter apenas duas casas decimais usando

``` python
print("%.2f" % total)
```

e em C e C++ você faria:

```C
printf("%.2f", total);
```

## Exemplos

```
>>>>>>>>
900.00
========
1080.00
<<<<<<<<

>>>>>>>>
1500.00
========
1725.00
<<<<<<<<

>>>>>>>>
2005.20
========
2105.46
<<<<<<<<
```

#

<!---
>>>>>>>>

500.00
========
600.00
<<<<<<<<


>>>>>>>>

1000.00
========
1200.00
<<<<<<<<


>>>>>>>>

1001.00
========
1151.15
<<<<<<<<


>>>>>>>>

1500.00
========
1725.00
<<<<<<<<


>>>>>>>>

2000.00
========
2200.00
<<<<<<<<


>>>>>>>>

3007.21
========
3157.57
<<<<<<<<


--->