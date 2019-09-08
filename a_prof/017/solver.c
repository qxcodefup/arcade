#include <stdio.h>

int main(){
	
    int a, b, c, d;
    int maior;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    maior = a;
    
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    
    printf("%d\n", maior);
    
	return 0;
}
