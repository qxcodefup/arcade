#include <stdio.h>

int main(){

    int n, vet[50];

    scanf("%d", &n);

    for(int a = 0; a < n; a++)
        scanf("%d", &vet[a]);

    int casais = 0;

    for(int a = 0; a < n; a++)
        for(int x = 0; x < n; x++)
            if(vet[x] != 0)
                if(-vet[a] == vet[x]){
                    casais++;
                    vet[a] = 0;
                    vet[x] = 0;
                }

    printf("%d\n", casais);

    return 0;
}