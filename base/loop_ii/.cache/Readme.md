# Imprimindo em linha

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/loop_ii/cover.jpg)

## Contecto

Essa atividade ajuda a entender o uso de loops e a manipulação de intervalos em programação. Você aprenderá a imprimir resultados formatados de forma legível.

Dado dois números inteiros **A** e **B**, faça um loop para imprimir todos os números inteiros entre **A** e **B**, excluindo **B**, na mesma linha entre colchetes.

### Entrada

- Dois números inteiros **A** e **B**, separados por espaço.

### Saída

- Uma linha com os números inteiros entre **A** e **B**, excluindo **B**, dentro de colchetes.

### Restrições

- **A** será sempre menor ou igual a **B**.

## Testes

```py
>>>>>>>> INSERT
1 10
======== EXPECT
[ 1 2 3 4 5 6 7 8 9 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
10 14
======== EXPECT
[ 10 11 12 13 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
-5 0
======== EXPECT
[ -5 -4 -3 -2 -1 ]
<<<<<<<< FINISH

```

## Dicas

### Programando em: C

- Você pode receber os dois números em uma mesma linha usando o método `scanf()`, como está representado a baixo:

```C
int main() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
}
```

```C
int main() {
    int a = 0, b = 0;
    scanf("%d", &a);
    scanf("%d",&b);
}
```

- Você pode utilizar métodos de interação, como o loop `for` inicia com `i` igual a **A** e continua até que `i` seja menor que **B**. A cada iteração, o valor de `i` é impresso usando `printf`, e `i` é incrementado em **1**.

```c
int main() {
    for (int i = A; i < B; i++) {
        ...
    }
}
```

- O loop `while` verifica se `i` é menor que *B* antes de executar. Inicialmente, `i` é igual a **A**. O valor de `i` é impresso, e `i` é incrementado em **1** até que `i` não seja mais menor que B.

```C
int main() {
    int i = A;
    while (i < B) {
        ...
        i++;
    }
}
```

### Programando em: Python

- Você pode receber os dois números em uma mesma linha usando o método `map()`, como está representado abaixo:

```py
a, b = map(int, input().split())
```

- Você pode utilizar métodos de interação, como o loop `for` itera sobre um intervalo de números de **A** até **B-1**. A função `range(A, B)` gera uma sequência de números começando em **A** e terminando em **B-1**. A cada iteração, o valor de `i` é impresso usando `print`.

```py
for i in range(A, B):
    ...
```

- O loop `while` continua executando enquanto `i` for menor que **B**. Inicialmente, `i` é definido com o valor de  **A**. Dentro do loop, o valor de `i` é impresso e incrementado em **1** a cada iteração, até que `i` alcance o valor de **B** e a condição deixe de ser verdadeira.

```py
i = A
while i < B:
    ...
    i += 1
```

### Programando em: TypeScript

- Você pode receber os dois números em uma mesma linha usando o método `map()`, como está representado abaixo:

```ts
let [a, b] : number = input().split(" ").map(Number);
```

- Você pode utilizar métodos de interação como o loop `for` itera sobre um intervalo de números, começando em **A** e indo até **B-1**. A cada iteração, o valor de `i` é impresso no console usando `console.log()` ou `write()`.

```ts
for (let i = A; i < B; i++) {
    ...
}
```

- O loop `while` continua executando enquanto `i` for menor que **B**. Inicialmente, `i` é definido com o valor de **A**. O valor de `i` é impresso a cada iteração e `i` é incrementado em **1** até que a condição do loop não seja mais verdadeira.

```ts
let i: number = A;
while (i < B) {
    ...
    i++;
}
```
