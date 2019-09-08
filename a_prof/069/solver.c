#include <stdio.h>

int main (){
	
	int i, j, n;
	int cont = 0;
	
	scanf("%d", &n);
	int vet[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &vet[i] );
	}
	
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if (vet[i] == vet[j]){
				vet[j] = 0;				//zera elementos repetidos
			}
		}
	}
	
	for(i = 0; i < n; i++){
		if (vet[i] != 0) cont++;
	}
	
	printf("%d\n", cont);
	
}