# Soma de três inteiros

![Imagem meteriologica](assets/cover.jpg)

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

- Como imprimir quebrando linha e sem quebrar linha:

```c
// C
printf("%d", soma);   // Sem quebra de linha
printf("%d\n", soma); // Com quebra de linha
```

```py
// Python
print(soma)     # Com quebra de linha (padrão)
print(soma, end='')  # Sem quebra de linha
```

```ts
// TypeScript
console.log(soma); # Com quebra de linha
process.stdout.write(soma.toString()); # Sem quebra de linha
```


```go
// Go
fmt.Println(soma)     // Com quebra de linha (padrão)
fmt.Print(soma)       // Sem quebra de linha
```
