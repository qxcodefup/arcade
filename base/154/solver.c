#include <stdio.h>
int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];
    int contador = 0;
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < size - 2; i++){
        if(vet[i] == 1 && vet[i + 1] == 0 && vet[i + 2] == 0){
            contador++;
        }
    }
    printf("%d\n", contador);
}