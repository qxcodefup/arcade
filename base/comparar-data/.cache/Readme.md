# L2 - @comparar-data

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/comparar-data/cover.jpg)

Considere o seguinte tipo de registro que deve ser usado em seu programa:

```c
typedef struct {
     int dia;
     int mes;
     int ano;
} Data;

typedef enum { LT, EQ, GT } compare;

```

Implemente uma função que recebe duas datas e devolve um valor da enumeração `compare`. A função devolve LT (less than) se a primeira data é mais antiga que a segunda, GT (greater than) se a primeira data é mais recente que a segunda e EQ (equal) se as duas datas são iguais.

```c
compare compararDatas(Data dt1, Data dt2)
```

A função principal do seu programa é a seguinte:

```c
#include <stdio.h>

typedef struct{
     int dia;
     int mes;
     int ano;
}Data;

typedef enum { LT, EQ, GT} compare;

compare compararDatas(Data dt1, Data dt2);

int main(){

    Data d1 = {2,8,1990};
    Data d2 = {4,5,2000};
    compare res;
    res = compararDatas(d1,d2); //LT
    printf("%d\n", res); //0
}
```
