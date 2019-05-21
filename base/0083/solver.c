#include <stdio.h>
#include <stdbool.h>

bool verifica_vetores(int n1, int v1[n1], int n2, int v2[n2]){
    int verifica = 0;
    for(int x = 0; x < n1; x++)
        for(int a = 0; a < n2; a++)
            if(v1[x] == v2[a]){
                verifica++;
                v2[a] = -1;
            }
    if(verifica == n1)
        return true;
    else
        return false;
    
}

int main(){

    int v1[50];
    int v2[50];

    int n, n2;

    scanf("%d", &n);

    for(int a = 0; a < n; a++)
        scanf("%d", &v1[a]);

    scanf("%d", &n2);

    for(int a = 0; a < n2; a++)
        scanf("%d", &v2[a]);

    if(verifica_vetores(n, v1, n2, v2))
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}