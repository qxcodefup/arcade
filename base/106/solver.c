#include <stdio.h>

int main () {
	
	int numLetra;
	char letra, op, letra2;
	int rotacao;
	
	scanf("%c\n", &letra);
	scanf("%c\n", &op);
	scanf("%c", &letra2);

	rotacao = letra2 - 'a';
	if(op == '-') rotacao *= (-1);
	
	numLetra = letra - 'a';
	numLetra = (numLetra + rotacao) % ('z' - 'a' + 1);
	while (numLetra < 0) numLetra += ('z' - 'a' + 1); 

	printf("%c\n", numLetra + 'a');
	return 0;
}