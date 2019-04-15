#include <stdio.h>


int main () {
    int x, n, contador = 0, aux, i;

    scanf("%d", &x);
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &aux);
        if ( aux == x )
            contador++;
    }

    printf("%d\n", contador);


    return 0;
}
