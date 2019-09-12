#include <stdio.h>

int verifica_value(int n){
    for(int a = 2; a < n; a++)
        if(n % a == 0)
            return 0;
    return 1;
}

int main(){

    int n = 0;

    scanf("%d", &n);

    printf("%d\n", verifica_value(n));

    return 0;
}