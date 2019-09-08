#include <stdio.h>


void mostrar_carta(int carta){
    if(carta == 1)
        printf("A");
    else if(carta == 11)
        printf("J");
    else if(carta == 12)
        printf("Q");
    else if(carta == 13)
        printf("K");
    else
        printf("%d", carta);    
}

void mostrar_mao(int mao[], int size){
    printf("[");
    for(int i = 0; i < size; i++){
        mostrar_carta(mao[i]);
        if(i != size - 1)
            printf(", ");
    }
    printf("]");
}

int main(){
    int size = 0;
    scanf("%d", &size);
    int mao[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &mao[i]);
    
    mostrar_mao(mao, size);// [A, 6, J, K]
    puts("");
}