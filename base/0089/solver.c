#include <stdio.h>
#include <string.h>

int get_indice(char vet[9][8], char jog[10]){
    for(int a = 0; a < 9; a++){
        if(strlen(jog) != strlen(vet[a]))
            continue;
        for(int i = 0; i < strlen(vet[a]); i++)
            if(jog[i] == vet[a][i])
                    return a;
    }
    return 0;
}

int main(){

    char jog1[10], jog2[10], vet[9][8] = {"human", "sponge", "paper", "air", "water", "gun", "rock", "fire", "scissors"};
    int i_jog1 = 0, i_jog2 = 0;

    scanf("%s", jog1);
    scanf("%s", jog2);

    i_jog1 = get_indice(vet, jog1);
    i_jog2 = get_indice(vet, jog2);

    if(i_jog1 == i_jog2)
        printf("empate\n");
    else if(i_jog1 < i_jog2)
        if(i_jog1 + 4 >= i_jog2)
            printf("jog1\n");
        else
            printf("jog2\n");
    else
        if(i_jog2 + 4 >= i_jog1)
            printf("jog2\n");
        else
            printf("jog1\n");

    return 0;
}