#include <stdio.h>

#define MAX1 100000
#define MAX2 1000

int main(){
    int dig[10];
    int barra[MAX2];
    int operacoes[MAX2];
    int barra_size = 0;
    int opera_size = 0;//operacoes
    scanf("%d %d", &barra_size, &opera_size);

    for(int i = 1; i <= barra_size; i++) //usar o vetor deslocado comecando do 1
        scanf("%d", &barra[i]);
    for(int i = 0; i < opera_size; i++)//le as operacoes
        scanf("%d", &operacoes[i]);
    for(int i = 0; i < 10; i++)//zera os contadores
        dig[i] = 0;

    int i = 0;
    int visor = operacoes[i]; //a posicao corrente do visor
    while(i < opera_size - 1){ //enquando o visor nao chegar na ultima operacao
        dig[barra[visor]]++;//pega o digito no visor e coloca no vetor de contagem
        if(visor == operacoes[i + 1])//se a visor chegou na meta atual, avance
            i++;
        if(visor < operacoes[i + 1])//se o visor
            visor++;
        else
            visor--;
    }
    for(int i = 0; i < 10; i++){
        printf("%d", dig[i]);
        if(i < 9)
            printf(" ");
    }
    puts("");
    return 0;
}
