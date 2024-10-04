# L1 - @calculadora Numérica

<!-- toch -->
[Motivação](#motivação) | [Testes](#testes)
-- | --
<!-- toch -->

![_](cover.jpg)

## Motivação

Quem nunca, durante uma prova de matemática ou física no ensino médio, escutou um coleguinha perguntar: "Professor, pode usar a calculadora?"? Essa atividade traz essa prática para o mundo da programação, onde você terá a chance de criar sua própria calculadora que realiza operações básicas entre dois números inteiros.


Leia dois números inteiros e um símbolo de operação, e imprima o resultado da operação correspondente.

### Entrada

A entrada consiste em três linhas:

- O primeiro número inteiro.
- O segundo número inteiro.
- Um operador em caractere ('+', '-', '*' ou '/')

### Saída

* A saída deve conter um único valor: o resultado da operação entre os dois números inteiros, representado como um número inteiro.

### Restrição

- Nunca haverá divisão por zero

## Testes

``` py
#INPUT
5
2
/
#OUTPUT
2
#END
```

```py
#INPUT
3
5
+
#OUTPUT
8
#END
```

```py
#INPUT
7
9
/
#OUTPUT
0
#END
```

### Dicas

- **C** - O `operador` deve ser recebido em uma variável do tipo `char`:
```c
int main() {
    char operador = 0;
    scanf(" %c", &operador);
}
```

- **Python** - Não tem a necessidade de informar o tipo
``` python
operador = input()
```

- **TypeScript** - Não tem a necessidade de informar o tipo
``` ts
let operador = input();
```

[Resolução](https://www.youtube.com/watch?v=W5JJ_NccMkM)
