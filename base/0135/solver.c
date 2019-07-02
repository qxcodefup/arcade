#include <stdio.h>
#include <stdbool.h>
//L, LU, U, UR, R, RD, D, DL
typedef struct{
    int l, c;
}LC;
#define get_neib(l, c) {{l+0,c-1},{l-1,c-1},{l-1,c+0},{l-1,c+1},{l+0,c+1},{l+1,c+1},{l+1,c+0},{l+1,c-1}}

int contar_vizinhos(int nl, int nc, bool mat[nl][nc], int l, int c){
    LC neib[] = get_neib(l, c);
    int cont = 0;
    for(int i = 0; i < 8; i++){
        if((neib[i].l < 0) || (neib[i].l >= nl) || (neib[i].c < 0) || (neib[i].c >= nc))
            continue;
        if(mat[neib[i].l][neib[i].c])
            cont++;
    }
    return cont;
}

void live_or_die(int nl, int nc, bool mat[nl][nc], bool nova[nl][nc], int l, int c){
    int cont = contar_vizinhos(nl, nc, mat, l, c);
    nova[l][c] = mat[l][c];
    if((mat[l][c] == false) && (cont == 3))
        nova[l][c] = true;
    else if((mat[l][c] == true) && ((cont < 2) || (cont > 3)))
        nova[l][c] = false;
}

void nova_geracao(int nl, int nc, bool mat[nl][nc]){
    bool nova[nl][nc];
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            live_or_die(nl, nc, mat, nova, l, c);
    for(int l = 0; l < nl; l++)
        for(int c = 0; c < nc; c++)
            mat[l][c] = nova[l][c];
}

int main(){
    int nl, nc;
    char c;
    scanf("%d %d", &nl, &nc);
    bool mat[nl][nc];
    for(int i = 0; i < nl * nc; i++){
        scanf(" %c", &c);
        *(&mat[0][0] + i) = (c == '#');
    }
    nova_geracao(nl, nc, mat);
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++){
            printf("%c", (mat[l][c]?'#':'.'));
        }
        puts("");
    }
}