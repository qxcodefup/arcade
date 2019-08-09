#include <stdio.h>
int main(){
    int capacidade = 0;
    int alunos = 0;
    int aux = 0;
    scanf("%d %d", &capacidade, &alunos);
    aux = alunos / capacidade;
    aux += 1;
    printf("%d\n", aux);

    return 0;
}