#include <stdio.h>
//a solução eh o teto de (b+g+m)/c

int main(){
    int c, b, g, m;
    int result;
    
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &g);
    scanf("%d", &m);
    
    result = (b+g+m)/c; // calcula o piso

    if( (b+g+m) % c != 0 ) 
        result = result + 1; //pega o teto
    
    printf("%d\n", result);
}