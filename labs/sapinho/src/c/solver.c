#include <stdio.h>
#include <stdbool.h>

int main(){
    int altura_total = 0;
    int salto = 0;
    int escorremento = 0;
    int altura = 0;
    scanf("%d %d %d", &altura_total, &salto, &escorremento);

    while(altura < altura_total){
        printf("%d ", altura);
        altura += salto;
        if(altura < altura_total){
            printf("%d\n", altura);
            altura -= escorremento;
        }
    }
    puts("saiu");
    return 0;
}