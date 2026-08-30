#include <stdio.h>

int main(){
    int hora = 0, minuto = 0, distancia = 0;
    char direcao = 0;

    scanf("%d %d %c %d", &hora, &minuto, &direcao, &distancia);
    
    int partida = 6 * hora + minuto / 10;
    int final = partida;
    if (direcao == 'H') 
        final += distancia;
    else
        final -= distancia;
    final = final % (12 * 6);
    if(final < 0)
        final += 72;
    hora = final / 6;
    minuto = (final % 6) * 10; 
    printf("%02d %02d\n", hora, minuto);
    return 0;
}