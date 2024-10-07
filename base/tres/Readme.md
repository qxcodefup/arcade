# @tres - Soma de inteiros

![Imagem meteriologica](cover.jpg)

## Ação

Você deve escrever um programa que recebe três números inteiros e retorna a soma desses três números.

### Entrada

- A entrada consiste de três linhas. Cada linha contém um número inteiro, representando os valores a serem somados.

### Saída

- A saída deve conter um único valor: a soma dos três números inteiros, seguido por uma quebra de linha.

## Testes

```py
#INPUT
2
3
>>>>>>>> INSERT
======== EXPECT
9
<<<<<<<< FINISH
```

```py
#INPUT
12
17
>>>>>>>> INSERT
======== EXPECT
53
<<<<<<<< FINISH
```

```py
#INPUT
-10
-4
>>>>>>>> INSERT
======== EXPECT
9
<<<<<<<< FINISH
```

## Dicas

**C** - Quebre uma linha usando `\n`:

```c
int main() {
    printf("%d\n", soma);
}
```

**Python** - Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:

```py
print(soma)
```

**TypeScript** - Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:

```ts
console.log(soma); || write();
```

```ts
write(soma);
```
