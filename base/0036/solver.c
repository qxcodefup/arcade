#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int maior = a, menor = a; //inicializacao da busca
    
    if(b < menor)
        menor = b;
    if(b > maior)
        maior = b;
        
    if(c < menor)
        menor = c;
    if(c > maior)
        maior = c;

    /* Opcao 1
    if((a > menor) && (a < maior))
        printf("%d", a);
    else if((b > menor) && (b < maior))
        printf("%d", b);
    else
        printf("%d", c);
    */
        
    printf("%d\n", (a + b + c - maior - menor));
    
    return 0;
}









