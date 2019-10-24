#include <stdio.h>

void retirar_o_leao(int size, char mat[size][size]){
    for(int l = 0; l < size; l++){
        for(int c = 0; c < size; c++){
            if(mat[l][c] == 'L'){
                for(int i = 0; i < size; i++)
                    mat[l][c] = ' ';
                return;
            }
            
        }
    }
}

void ler_matriz(int size, char mat[size][size]){
    int cont = 0;
    for(int l = 0; l < size; l++){
        for(int c = 0; c < size; c++){
            if(mat[l][c] == 'G')
                cont++;
        }
    }
    return cont;
}

void ler_matriz(int size, char mat[size][size]){
    int cont = 0;
    for(int i = 0; i < size; i++)
        if(mat[size - i - 1][i] == 'C')
            mat[size - i - 1][i] = 'D';
    int cont = 0;
    for(int l = 0; l < size; l++){
        for(int c = 0; c < size; c++){
            if(mat[l][c] == 'C')
                cont += 1;
            else if(mat[l][c] == 'D')
                cont += 2;
        }
    }
    return cont;
}


void ler_matriz(int size, char mat[size][size]){
    for(int l = 0; l < size; l++){
        for(int c = 0; c < size; c++){
            scanf(" %c", &mat[l][c]);
        }
    }
}

int main(){
    int size = 0;
    scanf("%d", &size);
    char mat[size][size];
    ler_matriz(size, mat);
    retirar_o_leao(size, mat);
    int gladiadores = contar_gladiadores(size, mat);
    int condenados = contar_condenados(size, mat);
    int result = 2 * gladiadores - condenados;
    if(result > 0)
        puts("gladiadores");
    else if (result < 0)
        puts("condenados");
    else
        puts("ninguem");
}