#include <stdio.h>

int main () {
	
	int i, cont = 0;
	int n;
	
	scanf("%d", &n);
	int vetor[n];
	
	for (i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	
	if (vetor[0] == 0 && vetor[1] == 0) cont++;		//fizemos de forma separa o primeiro e o ultimo elemento para evitar acessar posicoes fora do vetor (invasao de memoria)
	if (vetor[n-1] == 0 && vetor[n-2] == 0) cont++;
	
	for (i = 1; i < n - 1; i++)
		if (vetor[i-1] == vetor[i] && vetor[i] == vetor[i+1] && vetor[i] == 0) cont++; 
	
	printf("%d\n", cont);
}