# Tipos de divisão

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/quebrada/cover.jpg)

## Motivação

5a série do ensino fundamental. O professor me prometeu muito poder. Disse que se aprendesse sua técnica especial secreta passada apenas de geração em geração para os escolhidos, eu nunca mais teria que pensar em quociente e resto. Seria um número apenas e apenas um. Uma divisão teria dois números entrando e apenas um número saindo. Seria um sonho né. O maldito professor só esqueceu de me avisar que agora ia ter uma tal duma vírrrrrgula e as vezes muuuuuitos números depois dela.

## Ação

Aprenda a fazer divisão inteira e quebrada.

### Entrada

- Dois valores inteiros do usuário, n1 e n2, um por linha.

### Saída

- 1a linha: o resultado da divisão inteira de n1 por n2
- 2a linha: o resto da divisão de n1 por n2
- 3a linha: o resultado da divisão quebrada com 2 casas decimais.

## Exemplo

``` py
>>>>>>>> INSERT
6
3
======== EXPECT
2
0
2.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
7
3
======== EXPECT
2
1
2.33
<<<<<<<< FINISH

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

```py
a = 4.3243255
b = 3.4334344
print("a={:.2f} e b={:.3f}".format(a, b)) //a=4.32 e b=3.433
```
[Veja outras opções na documentação oficial](https://docs.python.org/pt-br/3/tutorial/inputoutput.html#fancier-output-formatting)

[Resolução](https://www.youtube.com/watch?v=budW2bakIjg)
