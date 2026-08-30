#include <stdio.h>
int main(){
    int vet[30];
    int size = 0;
    char c;
    do{
        scanf("%d%c", &vet[size], &c);
        size += 1;
    }while(c != '\n');
    printf("[ ");
    for(int i = size - 1; i >= 0; i--){
        printf("%d ", vet[i]);
    }
    printf("]\n");
}