#include <stdio.h>

int main(){
    
    int size = 0;
    scanf("%d", &size);
    
    int vet[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &vet[i]);
    
    int cont = 1;
    int maior_cont = 0;
    
    int best[size];
    int best_size = 0;

    for(int i = 0; i < size; i++) { //todos os elementos
        if(i == size - 1 ||  vet[i] != vet[i + 1]) {
            if(cont > maior_cont){
                maior_cont = cont;
                best[0] = vet[i];
                best_size = 1;
            } else if(cont == maior_cont) {
                best[best_size++] = vet[i];
            }
            cont = 1;
        } else {
            cont++;
        }
    }
    printf("[ ");
    for(int i = 0; i < best_size; i++)
        printf("%d ", best[i]);
    printf("]\n");
}