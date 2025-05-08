# Calculadora numérica

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/calc/cover.jpg)

## Contexto

Quem nunca, durante uma prova de matemática ou física no ensino médio, escutou um coleguinha perguntar: "Professor, pode usar a calculadora?"? Essa atividade traz essa prática para o mundo da programação, onde você terá a chance de criar sua própria calculadora que realiza operações básicas entre dois números inteiros.

Leia dois números inteiros e um símbolo de operação, e imprima o resultado da operação correspondente.

### Entrada

A entrada consiste em três linhas:

- O primeiro número inteiro.
- O segundo número inteiro.
- Um operador em caractere ('+', '-', '*' ou '/')

### Saída

- A saída deve conter um único valor: o resultado da operação entre os dois números inteiros, representado como um número inteiro.

### Restrição

- Nunca haverá divisão por zero

## Testes

``` py
>>>>>>>> INSERT
5
2
/
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
5
+
======== EXPECT
8
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
7
9
/
======== EXPECT
0
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- O `operador` deve ser recebido em uma variável do tipo `char`:

```c
int main() {
    char operador = 0;
    scanf(" %c", &operador);
}
```

### Programando em: Python

- Não tem a necessidade de informar o tipo

```py
operador = input()
```

### Programando em: TypeScript

- Não tem a necessidade de informar o tipo

```ts
let operador = input();
```

## Resolução

### Em C++

- [Vídeo](https://www.youtube.com/watch?v=W5JJ_NccMkM)
