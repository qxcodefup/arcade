## @024 #02_sel L1 - Divisão Inteira e Quebrada
## @qxcode

![](capa.jpg)

## Motivação

5a série do ensino fundamental. O professor me prometeu muito poder. Disse que se aprendesse sua técnica especial secreta passada apenas de geração em geração para os escolhidos, eu nunca mais teria que pensar em quociente e resto. Seria um número apenas e apenas um. Uma divisão teria dois números entrando e apenas um número saindo. Seria um sonho né. O maldito professor só esqueceu de me avisar que agora ia ter uma tal duma vírrrrrgula e as vezes muuuuuitos números depois dela.

## Ação

Aprenda a fazer divisão inteira e quebrada.

### Entrada
- Dois valores inteiros do usuário, n1 e n2, um por linha.

### Saída
- O resultado da divisão inteira de n1 por n2, o resto da divisão inteira e o resultado da divisão quebrada com 2 casas decimais.

## Exemplo

```
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

#

<!---
>>>>>>>> 

7
3
========
2
1
2.33
<<<<<<<<


>>>>>>>> 

6
3
========
2
0
2.00
<<<<<<<<


>>>>>>>>

5
2
========
2
1
2.50
<<<<<<<<


>>>>>>>>

4
10
========
0
4
0.40
<<<<<<<<
--->
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
```
---