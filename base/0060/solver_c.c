#include <stdio.h>

int main () {

	int vetor[5];
	int maior, menor, i;
	
	for( i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);		
	}	
	
	maior = vetor[0];
	menor = vetor[0];
		
	for( i = 0; i < 5; i++){
		if( vetor[i] < menor)
			menor = vetor[i];
		if( vetor[i] > maior)
			maior = vetor[i];
	}
	printf("%d\n", maior + menor);
	return 0;
}
