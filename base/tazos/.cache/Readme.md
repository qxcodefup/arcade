# Qual o mais repetido

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/tazos/cover.jpg)

## Contexto

Elvis Presley Da Silva tem uma coleção de tazos numerados. Ele colocou todos em ordem numérica, mas está na dúvida de qual tazo ele tem mais vezes repetido. Faça um código que ajude Elvis a saber o número do tazo que se repete mais. Se mais de um tazo tiver no topo da quantidade, imprima todos eles.

## Estratégias

- Seu código deve ter um único for e se utilizar do fato de os elementos estarem ordenados para fazer a contagem apenas na troca de valores.

### Apenas vetores

```go
- calcule uma lista com os únivos
- crie uma lista para armazenar quantas vezes cada unico aparece
- veja o maior valor dessa lista
- pegue os unicos que tem esse maior valor
```

### Com dicionários

```go
- calcule um dicionário com os únivos e a quantidade de vezes que eles aparecem
- percorra para saber o maior valor
- percorra para pegar as chaves que contem esse valor
```

### Entrada

- **Linha 1:** Um número inteiro positivo representando a quantidade de elementos no vetor (1 a 50).

- **Linha 2:** O vetor de inteiros em **ORDEM CRESCENTE**.

### Saída

- Os elementos que se repetem mais vezes no vetor, dentro de colchetes `[]` e separados por espaço.

## Testes

```py
>>>>>>>> INSERT
3
1 1 2
======== EXPECT
[ 1 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
1 2
======== EXPECT
[ 1 2 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
2 2 5 5
======== EXPECT
[ 2 5 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
1 1 3 3 3
======== EXPECT
[ 3 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
9
2 2 3 5 5 5 7 7 7
======== EXPECT
[ 5 7 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
12
2 2 3 5 5 5 7 7 7 9 9 9
======== EXPECT
[ 5 7 9 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
13
2 2 3 5 5 5 7 7 7 9 9 9 9
======== EXPECT
[ 9 ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
2 3 5 8 9
======== EXPECT
[ 2 3 5 8 9 ]
<<<<<<<< FINISH

```
