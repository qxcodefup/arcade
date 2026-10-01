# Fatoração de um número

![Capa da atividade de fatoração de um número](assets/cover.jpg)

## Contexto

Dado um número inteiro, encontre os fatores primos e quantas vezes cada fator aparece na fatoração. Conte cada ocorrência e imprima os fatores em ordem crescente.

### Entrada

- Um número inteiro `N`.

### Saída

- Uma linha para cada fator primo, com o fator seguido da quantidade de vezes que aparece.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->

## Orientações

Crie uma função recursiva que recebe o número, um divisor e um mapa para armazenar os fatores e suas quantidades. Uma declaração válida em Go para essa função é:

```go
func calcFatores(numero, divisor int, quantidades map[int]int, ordem *[]int) {}
```

A cada chamada, reduza o número quando encontrar um divisor. Registre cada fator uma única vez em `ordem` e incremente sua quantidade no mapa. Use essa ordem para imprimir os fatores de forma crescente.
