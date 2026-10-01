# Conte as cartas no 21

![_](assets/cover.jpg)

## Contexto

Faça um programa que conte o valor de uma mão de blackjack.

Ela recebe um vetor de cartas e calcula usando as seguntes regras. K, Q e J valem 10 pontos. ÁS vale 11 pontos. As outras cartas valem seu próprio valor.

Se a soma de pontos for maior que 21, o Ás passa a valer 1 ponto, diminuindo a soma total, tentando fazer o valor baixar para menos de 21.

No vetor de inteiros, os valores 1, 11, 12 e 13 são respectivamente Ás, J, Q e K.

### Entrada

- A entrada começa informando a quantidade de elementos do vetor e é seguida pelos valores inteiros um por linha.

### Saída

- A saída deve ser um inteiro informando o valor da mão do blackjack.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->
