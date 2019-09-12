#include <stdio.h>
int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];
    int sizeAux = size;
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    for(int x = 0; x < size; x++){
        for(int y = x + 1; y < size;y++){
            if(vet[x] == vet[y]){
               vet[x] = 999;
               sizeAux--;
            }
            
        }
    }
    for(int x = 0; x < size; x++){
        for(int y = x + 1; y < size;y++){
            if(vet[x] > vet[y]){
                int aux = vet[x];
                vet[x] = vet[y];
                vet[y] = aux;
            }
        }
    }
    for(int i = 0; i < sizeAux; i++){
        printf("%d", vet[i]);
        if(i < sizeAux - 1)
            printf(" ");
    }
    puts("");
}