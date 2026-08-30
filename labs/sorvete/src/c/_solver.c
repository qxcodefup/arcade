#include <stdio.h>
#include <stdbool.h>

bool verifica_letra(char letra, char vet[100], int inicio, char fim){
    for(int a = inicio; vet[a] != fim; a++)
        if(letra == vet[a])
            return true;
    return false;
}

int id_palavra(char frase[100], int inicio){
    for(int a = inicio; frase[a] != '\0'; a++)
        if(frase[a] == ' ' || frase[a + 1] == '\0')
            return a + 1;
}

char verifica_espaco(char frase[100], int inicio){
    for(int a = inicio; frase[a] != '\0'; a++)
        if(frase[a] == ' ')
            return ' ';
    return '\0';
}

int main(){
    char frase[100];
    scanf("%[^\n]", frase);
    char letras[100];
    int x = 0;
    for(int a = 0; frase[a] != ' '; a++)
        if(!verifica_letra(frase[a], letras, 0, '\0')){
            letras[x] = frase[a];
            x++;
        }
    //printf("%s", letras);

    for(int a = 0; letras[a] != '\0'; a++){
        x = id_palavra(frase, 0);
        while(frase[x] != '\0'){
            //printf("%d ", x);
            if(!verifica_letra(letras[a], frase, x, verifica_espaco(frase, x))){
                letras[a] = ' ';
                break;
            }else
                x = id_palavra(frase, x);
        }
    }

    int cont = 0;
    for(int a = 0; letras[a] != '\0'; a++)
        if(letras[a] != ' ')
            cont++;
    //printf("%s", letras);
    printf("%d\n", cont);
}