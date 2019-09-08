#include <stdio.h>

int main () {
	int i;
	char numero[100];
	int somaOrdem = 0;
	scanf("%100[^\n]", numero);
	
	for(i = 0; numero[i]; i++){
		if( i%2 == 0 ) somaOrdem += numero[i] - '0';
		else somaOrdem -= numero[i] - '0';
	}
	
	if( somaOrdem%11 == 0) printf("sim\n");
	else printf("nao\n");
	return 0;
}