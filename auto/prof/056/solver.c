#include <stdio.h>


int main () {
    int x, menor, i;

    scanf("%d", &x);
    menor = x;

    for(i = 0; i < 4; i++){
        scanf("%d", &x);
        if (x < menor)
            menor = x;
    }

    printf("%d\n", menor);

    return 0;
}