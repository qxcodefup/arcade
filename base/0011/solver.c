#include <stdio.h>

int main(){
    int hora = 0;
    int min = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;
    scanf("%d %d %d %d %d", &hora, &min, &dia, &mes, &ano);
    printf("%02d:%02d %02d/%02d/%02d\n", 
        12, min, dia, mes, (ano % 100));
}
