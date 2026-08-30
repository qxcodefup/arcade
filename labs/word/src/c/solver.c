#include <stdio.h>
    
char minusculo (char c){
    if(c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

char maiusculo (char c){
    if(c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}

int main (){
    int i;
    
    char texto[100];
    char opcao;
    
    scanf("%99[^\n]\n", texto);
    scanf("%c", &opcao);
    
    switch (opcao){
        
        case 'm':
            for(i = 0; texto[i] != 0; i++)
                printf("%c", minusculo(texto[i]));
            break;
        
        case 'M':
            for(i = 0; texto[i] != 0; i++)
                printf("%c", maiusculo(texto[i]));
            break;
            
        case 'p':
            
            if(texto[1] != ' ') printf("%c", maiusculo(texto[0]) );
            else printf("%c", minusculo(texto[0]) );
                        
            for(i = 1; texto[i] != 0; i++){
                if(texto[i-1] == ' ' && texto[i+1] != ' ') printf("%c", maiusculo(texto[i]) );
                else printf("%c", minusculo(texto[i]));
            }
            break;
        
        case 'i':
            for(i = 0; texto[i] != 0; i++){
                if(texto[i] >= 'a' && texto[i] <= 'z') printf("%c", maiusculo(texto[i]) );
                else if(texto[i] >= 'A' && texto[i] <= 'Z') printf("%c", minusculo(texto[i]));
                else printf("%c", texto[i]);
            }
            break;
    }
    printf("\n");
    return 0;
}
