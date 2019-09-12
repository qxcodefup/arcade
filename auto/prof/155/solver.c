#include <stdio.h>
int main(){
    int comprimento1 = 0;
    int largura1 = 0;
    int comprimento2 = 0;
    int largura2 = 0;
    scanf("%d %d %d %d", &comprimento1, &largura1, &comprimento2, &largura2);
    int aux1 = comprimento1 * largura1;
    int aux2 = comprimento2 * largura2;
    if(aux1 > aux2)
        printf("%d\n", aux1);
    else
        printf("%d\n", aux2);
}