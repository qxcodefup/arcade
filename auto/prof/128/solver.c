#include <stdio.h>

int somar(int mat[2][3]){

    int sum = 0;
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 2; y++){
            sum += mat[y][x];
        }
    }
    printf("%d\n", sum);
    return sum;
}

int main()
{
    int mat[2][3];

    for (int i=0;i < 2 ;i++ )
        for(int j =0; j < 3;j++)
            scanf("%d", &mat[i][j]);

    somar(mat);
}