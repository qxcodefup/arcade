#include <stdio.h>

int main () {
	int i;
	
	char texto[100];
	int inicio;
	int tamanho;
	
	scanf("%99[^\n]\n", texto);
	scanf("%d", &inicio);
	scanf("%d", &tamanho);
	
	int fim = inicio + tamanho;
	
	for(i = inicio; i < fim && texto[i] != 0; i++){
		printf("%c", texto[i]);
	}
	puts("");
	return 0;
}