#include <stdio.h>

int main()
{
	int a;
	int b;
	int i;
	int soma = 0;
	
	scanf("%d %d", &a, &b);
	
	i = a;
	while( i <= b ){
		if(i % 2 == 0) soma = soma + i;
		i++;
	} 
	
	if(a > b) printf("invalido\n");
	else printf("%d\n", soma);
	
    return 0;
}
