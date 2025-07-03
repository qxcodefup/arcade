# Fatoração de um número

![_](cover.jpg)

## Contexto

Dado um número inteiro, o objetivo é encontrar seus fatores primos e a quantidade de vezes que cada fator aparece na sua fatoração e montar um vetor com os fatores.

### Pontuação

- Com repetição

```go
fator = 2
contagem = 0
enquanto valor != 1
    se for possível dividir por fator
        divida e incremente a contagem
    se não
        incremente o fator
        zere a contagem
        imprima se tiver contado algo
```

- Com structs

```go
type Fator struct {
    num int
    qtd int
}

def calc_fatores(num int) []Fator {
    ...
}
```

- Com dicionários

```go
def calc_fatores(num int) map[int]int {
    ...
}
```

- Com recursão

```go
def calc_fatores(num int, resp map[int]int) {
    ...
}
```

### Entrada

- Um número inteiro **N**.

### Saída

- Os fatores primos de **N** e a quantidade de vezes que eles aparecem na fatoração. Cada fator e sua quantidade devem ser impressos em uma linha, com o fator seguido pelo número de vezes que aparece.

## Testes

``` py
>>>>>>>> INSERT
8
======== EXPECT
2 3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
40
======== EXPECT
2 3
5 1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
55
======== EXPECT
5 1
11 1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
552
======== EXPECT
2 3
3 1
23 1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
169400
======== EXPECT
2 3
5 2
7 1
11 2
<<<<<<<< FINISH

```
