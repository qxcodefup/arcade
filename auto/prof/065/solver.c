#include <stdio.h>
#include <stdbool.h>

bool pule_sapinho(int altura_total, int salto, int escorremento){
    int altura = 0;
    while(true){
        altura += salto;
        salto -= 10;
        if(salto < 0)
            salto = 0;
        if(altura >= altura_total)
            return true;
        altura -= escorremento;
        if (altura < 0)
            return false;
    }
}

int main(){
    int altura_total = 0;
    int escorremento = 0;
    scanf("%d %d", &altura_total, &escorremento);
    int salto = 1;
    while(pule_sapinho(altura_total, salto, escorremento) == false)
        salto++;
    printf("%d\n", salto);
    return 0;
}