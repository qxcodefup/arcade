#include <stdio.h>

int main(){
    int auxHora = 0;
    int minuto = 0;
    int dia = 0;
    int mes = 0;
    int auxAno = 0;
    
    scanf ("%d %d %d %d %d", &auxHora, &minuto, &dia, &mes, &auxAno);

    int ano = auxAno % 100;
    int hora = auxHora % 12;
    
    printf("%02d:%02d %02d/%02d/%02d\n", hora, minuto, dia, mes, ano);
}