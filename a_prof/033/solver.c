#include <stdio.h>

int main()
{
	float a, b, c, trab;
	float menor, media;
	
	scanf("%f %f %f %f", &a, &b, &c, &trab);
	
	menor = a;
	if ( b < menor ) menor = b;
	if ( c < menor ) menor = c;
	
	media = ( a + b + c + trab - menor) / 3;
	
	if (media >= 7) printf("Aprovado com %.1f\n", media);
	else printf("Final com %.1f\n", media); 
	
    return 0;
}
