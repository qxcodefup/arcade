# Soma de três inteiros

![Imagem meteriologica](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/tres/cover.jpg)

## Contexto

Você deve escrever um programa que recebe três números inteiros e retorna a soma desses três números.

### Entrada

- A entrada consiste de três linhas. Cada linha contém um número inteiro, representando os valores a serem somados.

### Saída

- A saída deve conter um único valor: a soma dos três números inteiros, seguido por uma quebra de linha.

## Testes

```py
>>>>>>>> INSERT
2
3
4
======== EXPECT
9
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
12
17
24
======== EXPECT
53
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
-10
-4
23
======== EXPECT
9
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Quebre uma linha usando `\n`:

```c
int main() {
    printf("%d\n", soma);
}
```

### Programando em: Python

- Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:

```py
print(soma)
```

### Programando em: TypeScript

Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:

```ts
console.log(soma); || write();
```

```ts
write(soma);
```
