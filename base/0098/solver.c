#include <stdio.h>
#include <string.h>

int main(){
    int casos;
    scanf("%d", &casos);
    getchar();

    for(int a = 0; a < casos; a++){
        char valor[50];
        scanf("%[^\n]", valor);

        char vogais[50][50];
        int x, y = 0;

        for(int i = 0; i < strlen(valor); i++){
            if(valor[a] == 'a' || valor[a] == 'e' || valor[a] == 'i' || valor[a] == 'o' || valor[a] == 'u'){
                vogais[i][y] = valor[a];
                y++;
                continue;
            }
            x++;
            y = 0;
        }

        char maior[50];
        strcpy(maior, vogais[0]);
        for(int a = 0; a < x; a++)
            if(strlen(vogais[a]) > strlen(maior))
                strcpy(maior, vogais[a]);

        printf("%s", maior);
    }

}