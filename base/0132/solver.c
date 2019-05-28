#include <stdio.h>

int soma_dp(int mat[5][5]){
    int soma = 0, j=0;
    for(int i = 0; i < 5; i++)
        soma += mat[i][j++];
    return soma;
}

int soma_ds(int mat[][5]){
    int soma = 0, j = 5 -1;
    for(int i = 0; i < 5; i++)
        soma += mat[i][j--];
    return soma;
}


int sub(int mat[5][5]){
   int subt = soma_dp(mat) - soma_ds(mat);
   printf("%d", subt);
   return subt;
}



int main()
{
    int mat[5][5];

    for(int i = 0; i < 5;i++)
        for(int j =0; j < 5; j++)
            scanf("%d", &mat[i][j]);

    sub(mat);
}