# @max - Maior de dois números

![abs](cover.jpg)

## Acão

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
#INPUT
4
5
======== EXPECT
>>>>>>>> INSERT
<<<<<<<< FINISH
```

```py
#INPUT
5
4
======== EXPECT
>>>>>>>> INSERT
<<<<<<<< FINISH
```

```py
#INPUT
12
12
======== EXPECT
>>>>>>>> INSERT
<<<<<<<< FINISH
```

```py
#INPUT
-5
0
======== EXPECT
>>>>>>>> INSERT
<<<<<<<< FINISH

```

## Dicas

**C** -  O método `fmax()` da biblioteca `math.h` pode ajudar a encontrar o maior número:

```c
#include <math.h>
int main() {
    maior = fmax(a, b);
}
```

**Python** - Utilize a função `max()` para encontrar o maior número:

```py
maior = max(a, b)
```

**TypeScript** - A função `Math.max()` retornará o maior valor entre os números:

```ts
let maior: number = Math.max(a, b);
```
