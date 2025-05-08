# Obter Substrings

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/substring/cover.jpg)

## Contexto

Implemente uma função que, dada uma string, um índice de início e uma quantidade de caracteres, retorne a substring correspondente. Se o índice ou a quantidade de caracteres forem inválidos, retorne uma string vazia. A função deve retornar exatamente a quantidade de caracteres solicitada ou até o fim da string, o que ocorrer primeiro.

### Entrada

- Uma String com até 100 caracteres.
- Um número inteiro representando o índice de início.
- Um número inteiro representando a quantidade de caracteres desejada.

### Saída

- A substring resultante com o número de caracteres pedidos ou uma string vazia caso o índice inicial ou a quantidade de caracteres seja inválida.

### Restrições

- O índice de início e a quantidade de caracteres são sempre inteiros.
- A string contém apenas caracteres alfanuméricos e espaços.

## Testes

```py
>>>>>>>> INSERT 01
Coralina
0
4
======== EXPECT
Cora
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 01
Coralina
1
4
======== EXPECT
oral
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
Power Ranger
4
20
======== EXPECT
r Ranger
<<<<<<<< FINISH

```

## Dicas


### Programando em Python

- Em Python, você pode usar fatiamento para obter uma substring diretamente, por exemplo, `texto[inicio:inicio + quantidade]`.
- Verifique se o índice inicial é válido para evitar erros de índice fora do intervalo.
- Caso o índice inicial seja maior que o comprimento da string, ou a quantidade de caracteres solicitada seja negativa, retorne uma string vazia imediatamente.
