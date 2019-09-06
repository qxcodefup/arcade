#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float n1, n2, n3, media;
} Aluno;

int compararAluno(const void * aluno_a, const void * aluno_b){
    Aluno * a = (Aluno *) aluno_a;
    Aluno * b = (Aluno *) aluno_b;
    if(a->media < b->media)
        return 1;
    else if(a->media == b->media)
        return 0;
    else
        return -1;
}

int main(){
    Aluno alunos[30];
    int qtd = 0;
    char line[50];
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &qtd);
    for(int i = 0; i < qtd; i++){
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        strcpy(alunos[i].nome, line);
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
    }

    qsort(alunos, qtd, sizeof(Aluno), compararAluno);
    for(int i = 0; i < qtd; i++){
        printf("%d: %s\n", i, alunos[i].nome);
        printf("   Media: %.2f\n", alunos[i].media);
        printf("   N1: %.2f, N2: %.2f, N3: %.2f\n", alunos[i].n1, alunos[i].n2, alunos[i].n3);
    }
}