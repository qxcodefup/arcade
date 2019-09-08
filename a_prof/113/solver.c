#include <stdio.h>
int main(void)
{
    char c, c2;
    scanf("%c", &c);
    int soma_menor = 50, soma = 0;
    
    while(c != '\n'){
        soma += c;
        scanf("%c", &c);
    }
    
    printf("%d\n", soma % 50);
    
    for(c = 'a'; c <= 'z'; c++){
        if( (c + soma) % 50 < soma_menor){
            soma_menor = (c + soma) % 50;
            c2 = c;
        }
    }
    
    printf("%c\n%d", c2, soma_menor);
        
    return 0;
}