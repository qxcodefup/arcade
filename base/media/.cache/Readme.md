# Média de dois inteiros

![Imagem Média de Dois Inteiros](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/media/cover.jpg)

## Contexto

Escreva um programa que recebe dois números inteiros e retorna a média aritmética
deles.

### Entrada

- A entrada consiste em duas linhas. Cada linha contém um número inteiro.

#### Saída

- A saída deve conter a média aritmética dos dois números com uma casa decimal.

## Testes

```py
>>>>>>>> INSERT t1
2
4
======== EXPECT
3.0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT t2
34
21
======== EXPECT
27.5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT t3
-15
234
======== EXPECT
109.5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT t4
12
4
======== EXPECT
8.0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT t5
-13
-14
======== EXPECT
-13.5
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Para exibir um número de ponto flutuante do tipo `float` com apenas uma casa decimal em C, use o especificador de formato `%.1f` na função `printf`. O número **1** após o ponto indica o número de casas decimais a serem exibidas.

```c
int main() {
    printf("%.1f\n", resultado);
}
```

### Programando em: Python

- Para exibir um número de ponto flutuante com apenas uma casa decimal em Python, use o formato `:.1f` na função `print`. O número **1** após o ponto indica o número de casas decimais que serão exibidas:

```py
print(f"{resultado:.1f}")
- ou -
print("{:.1f}".format(resultado))
```

### Programando em: TypeScript

- Para exibir um número com apenas uma casa decimal em TypeScript, use o método `toFixed(1)`. O número **1** indica o número de casas decimais que serão exibidas.

```ts
console.log(resultado.toFixed(1)); 
```

```ts
console.log(resultado.toFixed(1)); 
write(resultado.toFixed(1));
```
