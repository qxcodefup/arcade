# @024 L1 - Divisão Inteira e Quebrada 💎

Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/024/Readme.md)

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/024/cover.jpg)

## Motivação

5a série do ensino fundamental. O professor me prometeu muito poder. Disse que se aprendesse sua técnica especial secreta passada apenas de geração em geração para os escolhidos, eu nunca mais teria que pensar em quociente e resto. Seria um número apenas e apenas um. Uma divisão teria dois números entrando e apenas um número saindo. Seria um sonho né. O maldito professor só esqueceu de me avisar que agora ia ter uma tal duma vírrrrrgula e as vezes muuuuuitos números depois dela.

## Ação

Aprenda a fazer divisão inteira e quebrada.

## Entrada

- Dois valores inteiros do usuário, n1 e n2, um por linha.

## Saída

- 1a linha: o resultado da divisão inteira de n1 por n2
- 2a linha: o resto da divisão de n1 por n2
- 3a linha: o resultado da divisão quebrada com 2 casas decimais.

## Exemplo

```txt
>>>>>>>>
6
3
========
2
0
2.00
<<<<<<<<

>>>>>>>>
7
3
========
2
1
2.33
<<<<<<<<

```

## Dica

Lembre de fazer os **casts** ou arredondamentos para conseguir divisão inteira ou quebrada.

Para imprimir em **c ou c++** com duas casas decimais use:

```C
//c ou c++
#include <stdio.h>
float a = 4.3243255;
float b = 3.4334344;
printf("a=%.2f e b=%.3f", a, b); //a=4.32 e b=3.433
```

Para **python**, você tem várias possibilidades.

```python
a = 4.3243255
b = 3.4334344
print("a=%.2f e b=%.3f" %(a, b)) //a=4.32 e b=3.433
```txt
---

[Resolução](https://www.youtube.com/watch?v=budW2bakIjg)
