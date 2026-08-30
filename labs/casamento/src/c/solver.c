#include <stdio.h>

int main () {

	int vetor[5];
	for(int i = 0; i < 5; i++)
		scanf("%d", &vetor[i]);		
	
	int maior = vetor[0];
	int menor = vetor[0];
		
	for(int i = 1; i < 5; i++) {
		if( vetor[i] < menor)
			menor = vetor[i];
		else if( vetor[i] > maior)
			maior = vetor[i];
	}
	printf("%d\n", maior + menor);
	return 0;
}
