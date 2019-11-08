#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char * fill_word(char * frase, int i, int lenght, char * nova){
    for(int j = 0; j < lenght; j++)
        nova[j] = frase[i + j];
    nova[lenght] = '\0';
    return nova;
}

int found(char * frase, char * word, int i){
    int word_len = strlen(word);
    char * nova = malloc((word_len + 1) * sizeof(char));
    fill_word(frase, i, word_len, nova);
    bool encontrei = strcmp(nova, word) == 0;
    free(nova);
    return encontrei;
}

int main(){
    char frase[101];
    char word[21];
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")]  = '\0';
    scanf("%s", word);
    int frase_len = strlen(frase);
    int cont = 0;
    for(int i = 0; i < frase_len; i++){
        if(found(frase, word, i))
            cont++;
    }
    printf("%d\n", cont);
}