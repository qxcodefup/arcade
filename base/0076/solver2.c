#include <stdio.h>

void contar(int origem, int dest, int barra[], int ocor[]){
    if(dest < origem){
        int aux = dest;
        dest = origem;
        origem = aux;
    }
    for(int i = origem; i <= dest; i++)
        ocor[barra[i]] += 1;
}

int main(){
    int ocor[10];
    for(int i = 0; i < 10; i++)
        ocor[i] = 0;
    int barra_size = 0, qtd_mov = 0;
    scanf("%d %d", &barra_size, &qtd_mov);
    barra_size += 1;
    int barra[barra_size];
    int mov[qtd_mov];
    for(int i = 1; i < barra_size; i++)
        scanf("%d", &barra[i]);
    for(int i = 0; i < qtd_mov; i++)
        scanf("%d", &mov[i]);

    for(int i = 0; i < qtd_mov - 1; i++){
        if(i > 0)
            ocor[barra[mov[i]]] -= 1;
        contar(mov[i], mov[i + 1], barra, ocor);
    }
    printf("[ ");
    for(int i = 0; i < 10; i++)
        printf("%d ", ocor[i]);
    printf("]\n");
}