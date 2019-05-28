#include <stdio.h>

int bingo(int vet[6], int mat[4][4]){

    int cont = 0;

    for(int k = 0; k < 6; k++)
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 4; j++)
                if(vet[k] == mat[i][j])
                    cont++;
    printf("%d", cont);
    return cont;
}

int main()
{
    int vet[6];
        for(int i=0;i < 6;i++)
            scanf("%d", &vet[i]);
    int mat[4][4];
        for(int i =0; i < 4;i++)
            for(int j=0;j < 4;j++)
                scanf("%d", &mat[i][j]);

    bingo(vet,mat);
}