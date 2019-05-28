#include <stdio.h>

int contar_fardamento_menor(int mat[3][3]){

    int cont = 0;
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3 - 1; ++j){
            if(mat[j][i] > mat[j+1][i])
                cont++;
        }
    }
    printf("%d", cont);
    return cont;
}

int main()
{
    int mat[3][3];

    for(int i=0; i < 3;i++)
        for(int j=0; j < 3;j++)
            scanf("%d", &mat[i][j]);

    contar_fardamento_menor(mat);
}