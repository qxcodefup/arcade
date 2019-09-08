#include <stdio.h>

int main(){
    int n, id = 0;
    float mediaAtual = 0, media = 0;
    scanf("%d", &n);

    int alunos[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &alunos[i]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            media += alunos[i] % 10;
            alunos[i] /= 10;
        }
        media /= 4;
        if(media > mediaAtual){
            mediaAtual = media;
            id = (id > alunos[i]) ? id : alunos[i];
        }
    }
    printf(((id < 10) ? "0%d\n" : "%d\n"), id);
    return 0;
}