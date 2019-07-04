#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char vet[n][6];
    float media[n];

    for(int a = 0; a < n; a++){
        scanf("%s", vet[a]);
        for(int i = 2; i < 6; i++)
            media[a] += vet[a][i] + '0';
        media[a] /= 4;
    }

    int maior = 0, i_maior = 0;

    for(int a = 1; a < n; a++)
        if(media[a] > media[maior])
            if(((vet[a][0] + '0') + (vet[a][1] + '0')) > i_maior){
                maior = a;
                i_maior = (vet[a][0] + '0') + (vet[a][1] + '0');
            }

    printf("%c%c\n", vet[maior][0], vet[maior][1]);
}