# Resultado e resto na divisão

![Imagem Teorema da Divisão](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/resto/cover.png)

## Contexto

Na cadeira de Matemática Díscreta, o professor irá apresentar o teorema da
divisão. Ele diz o seguinte:

**Teorema (Algoritmo da Divisão):** Seja ***n*** um inteiro qualquer e ***d*** um inteiro
positivo, existe um único par de inteiros ***q*** e ***r*** com ***0 ≤ r < d*** tais que:

$$n = d*q + r$$

Em outras palavras, dado dois inteiros positivos, por exemplo, 115 e 15,
podemos escrever 115 = 15*7 + 10, onde 7 e 10 são o quociente e o resto da
divisão de 115 por 15.

Implemente um programa que receba dois inteiros positivos e calcule o valor do
quociente e resto da divisão do primeiro pelo segundo número.

### Entrada

- Dois inteiros, um por linha

### Saída

- Quociente e resto separados por espaço

## Testes

```py
>>>>>>>> INSERT 0
51
31
======== EXPECT
1 20
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 1
398
50
======== EXPECT
7 48
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 2
350
40
======== EXPECT
8 30
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 3
587
460
======== EXPECT
1 127
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 4
215
158
======== EXPECT
1 57
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 5
760
360
======== EXPECT
2 40
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 6
498
203
======== EXPECT
2 92
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 7
61
25
======== EXPECT
2 11
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 8
32
7
======== EXPECT
4 4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 9
873
254
======== EXPECT
3 111
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 10
689
326
======== EXPECT
2 37
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 11
939
155
======== EXPECT
6 9
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 12
302
78
======== EXPECT
3 68
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 13
584
318
======== EXPECT
1 266
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 14
899
317
======== EXPECT
2 265
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Quando queremos saber o valor restante após uma divisão inteira, empregamos o operador módulo (`%`):

```c
int main() {
    int resto = dividendo % divisor;
}
```

### Programando em: Python

- Quando queremos saber o valor restante após uma divisão inteira, empregamos o operador módulo (`%`):

```py
resto = dividendo % divisor
```

### Programando em: TypeScript

- Quando queremos saber o valor restante após uma divisão inteira, empregamos o operador módulo (`%`).:

```ts
let resto = dividendo % divisor;
```
