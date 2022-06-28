#include <stdio.h>

int main(){
    int size = 0;
    int rodinha = 0;
    scanf("%d %d", &rodinha, &size);
    int vet[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
        vet[i] = vet[i] > 0 ? vet[i] : -vet[i];
    }
    int vencedor = -1;
    int perdedor = 0;
    for(int i = 0; i < size; i++){
        if(vet[i] >= vet[perdedor])
            perdedor = i;
        if(vet[i] <= rodinha) {
            if ((vencedor == -1) || (vet[i] <= vet[vencedor]))
                    vencedor = i;
        }
    }
    if(vencedor == -1)
        printf("nenhum\n");
    else
        printf("%d\n", vencedor);
    printf("%d\n", perdedor);
    
}