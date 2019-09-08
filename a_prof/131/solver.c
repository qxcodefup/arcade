#include <stdio.h>
#include <stdbool.h>

bool matriz_simetrica(int mat[3][3]){

    int a, b;
    bool s = true;
    for(a = 0; a < 3; a++)
        for(b = 0; b < 3; b++)
            if(mat[a][b] != mat[b][a])
                s = false;

    return s;
}


int main(){
    int linha, coluna;
    int mat[3][3];

    for(linha=0 ; linha < 3 ; linha++)
        for(coluna=0 ; coluna < 3 ; coluna++)
                scanf("%d", &mat[linha][coluna]);

    if (matriz_simetrica(mat)== true)
        printf("sim\n");
    else 
        printf("nao\n");

}