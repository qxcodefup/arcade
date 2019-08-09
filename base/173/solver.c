#include <stdio.h>

int main () {
	int i;
	char nome[100];
	int soma = 0;
	scanf("%99[^\n]", nome);
	
	for(i = 0; nome[i]; i++){
		soma += nome[i];
	}
	printf("%d\n", soma%50);
	return 0;
}