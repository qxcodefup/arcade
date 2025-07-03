# Sopa de coelho

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sopa/cover.jpg)

## Motivação

Zé da Carroça comprou um casal de coelhos. Ele gosta muito de sopa de coelho. Muito mesmo. Só tem uma coisa maior em Zé da Carroça do que a vontade de tomar sopa de coelho. É o sonho de ser um Cuniculturista vendendo carne de coelho para todo sertão central. Ele ainda está decidindo se come o casal de coelhos na sopa de hoje ou espera até que eles procriem o suficiente pra que Marivaldo fique rico.

Estudando um pouco ele descobriu uma regra interessante criado por Leonardo de Pisa no ano de 1200.

1\. No primeiro mês nasce somente um casal;
2\. Casais amadurecem sexualmente após o segundo mês de vida;
3\. Não há problemas genéticos no cruzamento consanguíneo;
4\. Todos os meses, cada casal dá à luz a um novo casal;

![Sopa](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sopa/sopa.jpg)

Por incrível que pareça, essas regras geram a seguinte sucessão de números: 1, 1, 2, 3, 5, 8, 13, ...

Leonardo de Pisa também é conhecido como Fibonacci. Se quiser entender melhor como se chega na sequência veja : https://brasilescola.uol.com.br/matematica/sequencia-fibonacci.htm

Dado o número N, imprima o enésimo termo da série.

Sugestão: Não use recursão. Observe que o resultado não cabe em um inteiro, se estiver programando em c, use um long int.

### Etapas

- Com vetores:
  - Crie um vetor com dois elementos {1, 1}
  - Faça um laço preenchendo o vetor somando sempre a soma dos dois últimos até chegar no termo desejado.
- Com recursão:
  - Implemente recursivo fazendo que o elemento fib(n) seja a soma de fib(n-1) + fib(n-2)
- Com recursão e dicionários:
  - Crie um dicionário para guardar os valores já calculados e evitar recalcular.

```go
func fib(n value, cache dict[int]int) {
    se valor ja estiver no cache, pegue-o e retorne
    se for n == 0 ou n == 1, retorne o valor padrão
    calcule o valor usando recursao
    guarde o valor no cache
    retorne o valor
}

``

### Entrada

- N, um por linha.

## Saída

- O enésimo termo de Fibonacci.

## Restrições

* 0 ≤ X ≤ 50

## Exemplos

``` py
>>>>>>>> INSERT
1
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
6
======== EXPECT
8
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
50
======== EXPECT
12586269025
<<<<<<<< FINISH
```
