#include <stdio.h>
#include <stdbool.h>

int main(){
    int altura_total = 0;
    int salto = 0;
    int escorremento = 0;
    int altura = 0;
    scanf("%d %d %d", &altura_total, &salto, &escorremento);

    
    while(true){
        printf("%d ", altura); //ponto de partida
        altura += salto;
        salto -= 10;
        if(salto < 0)
            salto = 0;
        if(altura >= altura_total){
            printf("saiu\n");
            break;
        }
        printf("%d\n", altura);
        altura -= escorremento;
        if (altura < 0){
            printf("%d morreu\n", altura);
            break;
        }
    }
    
    return 0;
}