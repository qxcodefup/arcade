#include <stdio.h>
int main(){
    int dia = 0;
    int hora = 0;
    scanf("%d %d %d", &dia, &hora);
    if (dia == 7) {
        if (hora >= 8 && hora <= 11) {
            printf("SIM\n");
        } else {
            puts("NAO");
        }
    } else if (dia == 1) {
        printf("NAO\n");
    } else if ((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17)){
        puts("SIM");
    } else {
        puts("NAO");
    }
    return 0;
}