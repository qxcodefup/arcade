#include <stdio.h>

int main(){
    int hora = 0, min = 0, dia = 0, mes = 0, ano = 0;
    scanf("%d %d %d %d %d", &hora, &min, &dia, &mes, &ano);
    // hora = hora > 12 ? hora - 12 : hora;
    if(hora > 12)
        hora -= 12;
    ano %= 100;

    printf("%02d:%02d %02d/%02d/%02d\n", hora, min, dia, mes, ano);
}

