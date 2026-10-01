# Fatoração de um número

![_](assets/cover.jpg)

## Contexto

Dado um número inteiro, o objetivo é encontrar seus fatores primos e a quantidade de vezes que cada fator aparece na sua fatoração e montar um vetor com os fatores.

## Orientações

Crie uma struct para armazenar o fator e a quantidade de vezes que ele aparece e uma função para retornar a lista de fatores.

```go
type Fator struct {
    num int
    qtd int
}

func calcularFatores(num int) []Fator {
    return nil
}
```

## Entrada e saída

### Entrada

- Um número inteiro **N**.

### Saída

- Os fatores primos de **N** e a quantidade de vezes que eles aparecem na fatoração. Cada fator e sua quantidade devem ser impressos em uma linha, com o fator seguido pelo número de vezes que aparece.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->
