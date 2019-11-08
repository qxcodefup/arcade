#include <stdio.h>

typedef struct {
    int x, y;
} Pos;

void atualiza_cobra(Pos cobra[], int size, char direcao){
    //anda corpo
    for(int i = size - 1; i > 0; --i)
        cobra[i] = cobra[i - 1];
    //anda cabeca
    if(direcao == 'L')
        cobra[0].x -= 1;
    else if(direcao == 'R')
        cobra[0].x += 1;
    else if(direcao == 'U')
        cobra[0].y -= 1;
    else if(direcao == 'D')
        cobra[0].y += 1;
}

int main(){
    int size = 0;
    char dir = 0;
    scanf("%d %c", &size, &dir);
    Pos cobra[size];
    for(int i = 0; i < size; i++)
        scanf("%d %d", &cobra[i].x, &cobra[i].y);
    atualiza_cobra(cobra, size, dir);
    for(int i = 0; i < size; i++)
        printf("%d %d\n", cobra[i].x, cobra[i].y);
}