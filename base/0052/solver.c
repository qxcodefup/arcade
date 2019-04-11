#include <stdio.h>

int fib(int x){
    if(x == 1 || x == 2)
        return 1;
    return fib(x - 1) + fib(x - 2);
}

long int fib2(int x){
    long int i = 1, j = 1, aux = 0;
    if(x == 1 || x == 2)
        return 1;
    for(int k = 3; k <= x; k++){
        aux = i + j;
        i = j;
        j = aux;
    }
    return j;
}

int main(){

    int x = 0;
    scanf("%d", &x);
    printf("%ld\n", fib2(x));
    return 0;
}