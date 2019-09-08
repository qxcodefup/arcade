#include <stdio.h>

int main(){

    int n, k;
    scanf("%d", &n);
    getchar();

    char texto[n][100];

    for(int a = 0; a < n; a++){
        scanf("%[^\n]", texto[a]);
        getchar();
    }

    for(int a = 0; a < n; a++){
        if(texto[a][0] >= 65 && texto[a][0] <= 90)
            k = 0;
        else
            k = 1;
        for(int i = 1; texto[a][i] != '\0'; i++){
            if(texto[a][i] == ' ')
                continue;
            if(texto[a][i] < 65 && texto[a][i] > 90 && texto[a][i] < 97 && texto[a][i] > 122){
                texto[a][i] = '\0';
                break;
            }
            if(texto[a][i] >= 65 && texto[a][i] <= 90){
                if(k == 0){
                    texto[a][i] += 32;
                    k = 1;
                }else
                    k = 0;
            }else{
                if(k == 0)
                    k = 1;
                else{
                    texto[a][i] -= 32;
                    k = 0;
                }
            }
        }
        printf("%s\n", texto[a]);
    }

}