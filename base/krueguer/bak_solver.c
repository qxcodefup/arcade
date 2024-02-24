#include <stdio.h>
#include <string.h>

int main(){
    int casos;
    scanf("%d", &casos);

    for(int a = 0; a < casos; a++){
        char valor[50];
        getchar();
        fgets(valor, sizeof(valor), stdin);
        int size = strlen(valor);
        if(valor[size - 1] == '\n'){
            valor[size - 1] = '\0';
            size -= 1;
        }

        char vogais[50][50];
        int x, y = 0;

        for(int i = 0; i < size; i++){
            if(valor[i] == 'a' || valor[i] == 'e' || valor[i] == 'i' || valor[i] == 'o' || valor[i] == 'u'){
                vogais[x][y] = valor[i];
                y++;
                continue;
            }
            x++;
            y = 0;
        }

        char maior[50];
        strcpy(maior, vogais[0]);

        for(int l = 1; l < x; l++)
            if(strlen(vogais[l]) > strlen(maior))
                strcpy(maior, vogais[l]);
        printf("%s\n", maior);
    }
}
