#include <stdio.h>

int main(){

    int qtd;
    scanf("%d", &qtd);

    int vet[qtd];
    int value = 0;
    int casa_decimal = 1;

    for(int a = 1; a < qtd; a++)
        casa_decimal *= 10;

    for(int a = 0; a < qtd; a++){
        scanf("%d", &vet[a]);
        value += vet[a] * casa_decimal;
        casa_decimal /= 10;
    }

    printf("%d\n", value);
}