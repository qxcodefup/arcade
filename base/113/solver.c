#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[50];
    scanf("%s", word);
    int  soma = 0;
    char cbest = '\0';

    int size = strlen(word);
    for(int i = 0; i < size; i++)
        soma += word[i];
    
    printf("%d\n", soma % 50);
    
    int soma_menor = soma % 50;
    for(char c = 'a'; c <= 'z'; c++){
        int novo = (c + soma) % 50; 
        if( novo < soma_menor){
            soma_menor = novo;
            cbest = c;
        }
    }
    if(cbest != '\0')
        printf("%s%c\n%d\n", word, cbest, soma_menor);
    else
        printf("%s\n%d\n", word, soma_menor);
    return 0;
}