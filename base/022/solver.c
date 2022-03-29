#include <stdio.h>
int main(){
    int capacidade = 0;
    int alunos = 0;
    scanf("%d %d", &capacidade, &alunos);
    capacidade -= 1; //o professor

    int aux = alunos / capacidade + ((alunos % capacidade > 0) ? 1 : 0);

    printf("%d\n", aux);

    return 0;
}