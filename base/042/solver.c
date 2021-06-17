#include <stdio.h>

int main() {
    int qtd = 0;
    scanf("%d", &qtd);
    int vet[100000];
    int vet_size = 0;

    while(qtd--) { //faz qtd vezes
        int value = 0;
        scanf("%d", &value);
        if(value == 0)
            vet_size -= 1;
        else
            vet[vet_size++] = value;
    }
    int sum = 0;
    for(int i = 0; i < vet_size; i++)
        sum += vet[i];
    printf("%d\n", sum);
}

