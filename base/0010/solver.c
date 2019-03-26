#include <stdio.h>
#include <stdlib.h>     /* qsort */

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}


int count(int vet[], size_t size, int value){
    int qtd = 0;
    for(size_t i = 0; i < size; i++)
        if(vet[i] == value)
            qtd++;
    return qtd;
}

int find(int vet[], size_t size, int value){
    for(size_t i = 0; i < size; i++)
        if(vet[i] == value)
            return i;
    return -1;
}

int main(){
    int size;
    scanf("%d", &size);
    int vet[size];
    for(size_t i = 0; i < size; i++){
        scanf("%d", vet + i);
    }
    int cont = 0;
    for(size_t i = 0; i < size; i++){
        if(find(vet, i, vet[i]) == -1)
            cont++;
    }
    printf("%d\n", cont);
    int vmax[size];
    int vmax_size = 0;
    int maxrep = 0;

    for(size_t i = 0; i < size; i++){
        int cont = count(vet, size, vet[i]);
        if(cont > maxrep){
            maxrep = cont;
            vmax_size = 0;
            vmax[vmax_size++]=vet[i];
        }else if(cont == maxrep){
            if(find(vmax, vmax_size, vet[i]) == -1){
                vmax[vmax_size++] = vet[i];
            }
        }
    }
    qsort(vmax, vmax_size, sizeof(int), compare);
    printf("%d", vmax[0]);
    for(size_t i = 1; i < vmax_size; i++)
        printf(" %d", vmax[i]);
    puts("");
    
}