# Maior de dois números

![abs](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/max/cover.jpg)

## Contexto

Frequentemente, precisamos comparar valores numéricos para determinar o maior entre eles. Isso é útil em diversas aplicações, desde cálculos financeiros até decisões de lógica em sistemas.

Implemente um programa que leia dois números inteiros e imprima o maior deles. Se os números forem iguais, imprima o número repetido. Esse programa ajudará a aprender a comparar dois números e a utilizar funções específicas da linguagem.

### Entrada

- Dois números inteiros, um por linha.

### Saída

- O maior dos dois números.

### Desafio

Caso sua linguagem tenha uma função pronta para esse problema, como max(), utilize-a. No entanto, também é importante tentar criar sua própria função para calcular o maior de dois números.

## Testes

```py
>>>>>>>> INSERT
4
5
======== EXPECT
5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
4
======== EXPECT
5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
12
12
======== EXPECT
12
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
-5
0
======== EXPECT
0
<<<<<<<< FINISH

```

## Dicas

### Programando em: C

- O método `fmax()` da biblioteca `math.h` pode ajudar a encontrar o maior número:

```c
#include <math.h>
int main() {
    maior = fmax(a, b);
}
```

### Programando em: Python

- Utilize a função `max()` para encontrar o maior número:

```py
maior = max(a, b)
```

### Programando em: TypeScript

- A função `Math.max()` retornará o maior valor entre os números:

```ts
let maior: number = Math.max(a, b);
```
