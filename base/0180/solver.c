#include <stdio.h>
#include <stdlib.h>
int main(){
    char lixo[100];
    int vet[2], forca;
    int qtd = 0;
    for(int i = 0; i < 2; i++){
        scanf("%d", &qtd); getchar();//excluir \n
        while(qtd--){
            fgets(lixo, sizeof(lixo), stdin);
            scanf("%d", &forca); getchar();//excluir \n
            vet[i] += forca;
        }
    }
    if(vet[0] == vet[1])
        puts("Draw");
    else{
        printf("%s\n", (vet[0] > vet[1]) ? "Team Iron Wins" : "Team Captain Wins");
    }
    return 0;
}