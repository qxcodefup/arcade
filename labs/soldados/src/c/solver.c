#include <stdio.h>

int contar_fardamento_menor(int nl, int nc, int mat[nl][nc]){
    int cont = 0;
    for (int l = 0; l < (nl - 1); ++l){
        for (int c = 0; c < nc; ++c){
            if(mat[l][c] > mat[l + 1][c]){
                cont++;
            }
        }
    }
    return cont;
}

int main(){
    int nl, nc;
    scanf("%d %d", &nl, &nc);
    int mat[nl][nc];

    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            scanf("%d", &mat[l][c]);

    int cont = contar_fardamento_menor(nl, nc, mat);
    printf("%d\n", cont);
}