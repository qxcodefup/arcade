#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

int indexOf(const char * vet, char value) {
    for(int i = 0; vet[i]; i++)
        if(vet[i] == value)
            return i;
    return -1;
}

bool existe(const char * vet, char value) {
    return indexOf(vet, value) != -1;
}

const char * carregar_palavra() {
    const char * database[] = {"banana", "maracuja", "morango", "uva", 
        "siriguela", "abacaxi", "manga", "goiaba", "pera", "damasco", "caqui", "laranja", "abacate"};
    int n = sizeof(database)/sizeof(char *);
    return database[rand() % n];
}

char escolher_letra(char palavra[]) {
    char opcao = 0; 
    scanf(" %c", &opcao);
    int pos = indexOf(palavra, opcao);
    if(pos == -1)
        return CHAR_MAX;
    for(int i = pos; palavra[i]; i++)
        palavra[i] = palavra[i + 1];
    return opcao;
}

void gerar_palavra_codificada(const char * word, const char * kick, char * codificada) {
    int word_size = strlen(word);
    strcpy(codificada, word);
    for(int i = 0; i < word_size; i++)
        codificada[i] = existe(kick, word[i]) ? word[i] : '*';
}

bool terminou_o_jogo(int chances, const char * palavra, const char * codificada) {
    if(chances == 0){
        puts("Voce perdeu");
        return true;
    }
    if(strcmp(palavra, codificada) == 0){
        puts("Voce ganhou");
        return true;
    }
    return false;
}

int main() {
    srand(time(0));
    const char * palavra = carregar_palavra();
    char faltantes[] = "abcdefghiojklmnopqrstuvwxyz";
    char codificada[100];
    char chutes[26] = "";
    int chances = 6;
    gerar_palavra_codificada(palavra, chutes, codificada);
    do {
        // limpar a tela
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        printf("Chances    : %d\n", chances);
        printf("Chutes     : [ %s ]\n", chutes);
        printf("Disponíveis: [ %s ]\n", faltantes);
        printf("Palavra codificada: %s \n", codificada);
        printf("Digite chute: ");
        char escolha = escolher_letra(faltantes);
        //update
        if(escolha == CHAR_MAX)
            continue;
        char temp[2] = {escolha, 0};
        strcat(chutes, temp);
        if(!existe(palavra, escolha))
            chances--;
        gerar_palavra_codificada(palavra, chutes, codificada);
    } while(! terminou_o_jogo(chances, palavra, codificada));
}
