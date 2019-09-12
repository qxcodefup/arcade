#include <stdio.h>

int main () {
	
	int i, j;
	int n;
	int swap;
	
	scanf("%d", &n);
	int vetor[n];
	
	for (i = 0; i < n; i++)
		scanf("%d", &vetor[i]);
	
	//BubbleSort
	for (i = 0; i < n; i++){
		for (j = 0; j < n - 1; j++){
			if (vetor[j+1] < vetor[j]){
				swap = vetor[j+1];
				vetor[j+1] = vetor[j];
				vetor[j] = swap;
			}
		}
	}
	
	for (i = 0; i < n; i++){
		printf("%d", vetor[i]);
        if(i < n - 1)
            printf(" ");
	}	
    printf("\n");
}