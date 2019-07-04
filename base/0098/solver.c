#include <stdio.h>
#include <string.h>

int main(){
    int n = 0, l = 0, c = 0;
    scanf("%d", &n);

    char frase[n][50];

    for(int a = 0; a < n; a++){
        scanf("%s", frase[a]);
    }

    for(int x = 0; x < n; x++){
        char vogais[10][50];
        for(int a = 0; frase[x][a] != '\0'; a++){
            if(frase[x][a] == 'a' || frase[x][a] == 'e' || frase[x][a] == 'i' || frase[x][a] == 'o' || frase[x][a] == 'u'){
                vogais[l][c++] = frase[x][a];
            }else{
                vogais[l++][c] = '\0';
                c = 0;
            }
        }

        int v = 0;
        for(int a = 0; a < l; a++)
            if(strlen(vogais[a]) > strlen(vogais[v]))
                v = a;
        printf("%s\n", vogais[v]);
    }
}