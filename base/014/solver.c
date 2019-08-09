#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int cont = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b) cont = 2;
    if(b == c) cont = 2;
    if(a == c) cont = 2;
    if(a == b && b == c) cont = 3;
    
    printf("%d\n", cont);
    
    return 0;
}
