# Valor absoluto

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/abs/cover.jpg)

## Contexto

O valor absoluto de um número é o número sem o sinal de negativo. Por exemplo, o valor absoluto de -5 é 5 e o valor absoluto de 5 é 5.

Para calcular o valor absoluto, você pode usar um condicional para verificar se o número é negativo. Se for, você pode multiplicar o número por -1 para torná-lo positivo.

É bem mais prático usar a função `abs()`, disponível em várias linguagens de programação. Essa função retorna o valor absoluto de um número.

Implemente um programa que leia dois números inteiros e imprima o valor absoluto da diferença entre eles. Por exemplo, se os números lidos forem 5 e 7, a saída deve ser 2. Se os números lidos forem 7 e 5, a saída também deve ser 2.

### Entrada

- Dois números inteiros, um por linha.

#### Saída

- Valor absoluto da diferença entre dois números

### Desafio

Crie sua própria função para calcular o valor absoluto de um número.

## Testes

```py
>>>>>>>> INSERT
1
5
======== EXPECT
4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1
======== EXPECT
4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
-5
1
======== EXPECT
6
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
-5
======== EXPECT
6
<<<<<<<< FINISH

```

## Dicas

### Programando em: C

- O método `abs()` o ajudará a encontrar o valor absoluto.

```c
#include <stdio.h>
#include <stdlib.h> // abs
int main() {
    int valorAbsoluto = abs(numero)
}
```

### Programando em: Python

- O método `abs()` o ajudará a encontrar o valor absoluto.

```py
valorAbsoluto = abs(numero)
```

### Programando em: TypeScript

- O método `abs()` o ajudará a encontrar o valor absoluto.

```ts
let valorAbsoluto: number = Math.abs(numero);
```
