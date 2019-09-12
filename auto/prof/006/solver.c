#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int soma = a + b + c + d;
    
    if(soma == 0)
        puts("nenhum");
    else
        printf("jog%d\n", (((soma - 1) % 4) + 1));
    return 0;
}
