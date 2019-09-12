#include <stdio.h>

int main () {
	
	int numLetra;
	char letra;
	int rotacao;
	
	scanf("%c\n", &letra);
	scanf("%d", &rotacao);
	
	numLetra = letra - 'a';
	numLetra = (numLetra + rotacao) % ('z' - 'a' + 1);
	
	while (numLetra < 0) numLetra += ('z' - 'a' + 1); 

	printf("%c\n", numLetra + 'a');
	return 0;
}