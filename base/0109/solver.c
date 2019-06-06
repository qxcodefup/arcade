#include <stdio.h>
int main(void){
    char c1, c2;
    scanf("%c", &c1);
    int soma = 0;
    while(c1 != '\n'){
        soma += c1;
        scanf("%c", &c1);
    }
    int enc = 0;
    for(c1 = 'a'; c1 <= 'z'; c1++)
        if((soma + c1) % 50 == 0){
            c2 = c1;
            enc = 1;
            break;
        }
    if(enc == 1)
        printf("%c", c2);
    else
        printf("sem sorte");
    
    return 0;
}