## ©04_vet L2 - Processando uma linha de inteiros

![](__capa.jpg)

Você não precisa saber o tamanho do vetor quando for ler uma linha com dados. Em python o comando `input().split(" ")` já retorna o vetor dividido. Em `c`e `c++` você tem algumas formas de fazer isso.

Em `c` você pode ler os dados e o `char` seguido a esse dado. Se utilizar `scanf("%d%c"`, sem o espaço antes do`%c` você está informando ao `scanf` para não ignorar os _whitespaces_. O código baixo vai em cada rodada do laço pegar o inteiro e o char sequencial a ele. Se esse char for um `\n` significa que a linha acabou.

```c
#include <stdio.h>
int main(){
    int value;
    char c;
    do{
        scanf("%d%c", &value, &c);
        printf("%d ", value);
    }while(c != '\n');
    print("\n");
}
```

Agora tente adaptar esse código para carregar vários inteiros em um vetor e depois imprimir o vetor ao contrário.

___
- Entrada:
    - N inteiros numa mesma linha, (1< N < 30).
- Saída:
    - O vetor impresso ao contrário.

```
>>>>>>>>
19 12 32 11 17 15
========
[ 15 17 11 32 12 19 ]
<<<<<<<<

>>>>>>>>
15
========
[ 15 ]
<<<<<<<<

>>>>>>>>
15 12
========
[ 12 15 ]
<<<<<<<<

>>>>>>>>
15 17 11
========
[ 11 17 15 ]
<<<<<<<<

```
