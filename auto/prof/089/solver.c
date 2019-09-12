#include <stdio.h>
#include <string.h>

int get_indice(const char * jog){
    char * vet[] = {"human", "sponge", "paper", "air", "water", "gun", "rock", "fire", "scissors"};
    int size = sizeof(vet)/sizeof(char *);
    for(int i = 0; i < size; i++)
        if(strcmp(vet[i], jog) == 0)
            return i;
    return 0;
}

int main(){

    char jog1[10], jog2[10];
    scanf("%s %s", jog1, jog2);
    int i1 = get_indice(jog1);
    int i2 = get_indice(jog2);
    
    if(i2 < i1)
        i2 += 9;
    if(i1 == i2)
        printf("empate\n");
    else if(i1 + 4 >= i2)
        printf("jog1\n");
    else
        printf("jog2\n");
    return 0;
}