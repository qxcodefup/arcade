# Fatoração de um número

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/fatores/cover.jpg)

## Contexto

Dado um número inteiro, o objetivo é encontrar seus fatores primos e a quantidade de vezes que cada fator aparece na sua fatoração e montar um vetor com os fatores.

### Guia

<details> <summary>Apenas com repetição</summary>

Você pode seguir o seguinte algoritmo:

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
        
imprima se ainda houver contagem
```

</details>
<details> <summary>Usando structs</summary>

Crie uma struct para armazenar o fator e a quantidade de vezes que ele aparece e uma função para retornar a lista de fatores.

```go
type Fator struct {
    num int
    qtd int
}

def calc_fatores(num int) []Fator {
    ...
}
```

</details>

<details> <summary>Com dicionários</summary>

Crie uma função que retorna um mapa onde a chave é o fator primo e o valor é a quantidade de vezes que ele aparece.

```go
def calc_fatores(num int) map[int]int {
    ...
}
```

</details>
<details> <summary>Com recursão</summary>

Crie uma função recursiva que recebe o número e use recursão para ir decompondo esse número e alimentando um mapa para armazenar os fatores e suas quantidades.

```go
def calc_fatores(num int, resp map[int]int) {
    ...
}
```

</details>

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
