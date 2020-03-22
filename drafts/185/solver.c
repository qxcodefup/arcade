#include <stdio.h>

int main(){
    int vet[100];
    int size;
    char op = ' ';
    while(op != 'q'){
        scanf(" %c", &op);
        if(op == 's'){
            printf("[ ");
            for(int i = 0; i < size; i++)
                printf("%d ", vet[i]);
            printf("]\n");
        }
    }
}