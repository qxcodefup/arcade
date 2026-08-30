#include <stdio.h>

int main (){
	
	int i, n;
	int diferenca;
	int cont = 0;
	
	scanf("%d", &n);
	int vetor[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &vetor[i] );
	}
	
	for(i = 1; i < n; i++){ // i deve iniciar com 1 devido a comparacao vetor[i - 1]. afim de evitar invasao de memoria
		diferenca = vetor[i-1] - vetor[i];
		if( diferenca < 0) diferenca = diferenca*(-1);     // como diferenca e uma grandeza modular devese deixa-la positiva 
		
		if (diferenca >= 2) cont++;
	}
	
	printf("%d\n", cont);
	
}