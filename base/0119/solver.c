#include <stdio.h>
#include <string.h>

int main () {
	int i;
	char palavra1[100];
	char palavra2[100];
	scanf("%100[^\n]\n", palavra1);
	scanf("%100[^\n]", palavra2);
	int colisoes = 0;
	
	for(i = 0; palavra2[i] == palavra1[strlen(palavra1) -i -1]; i++){
		colisoes++;
	}
	
	for(i = 0; i < strlen(palavra1) - colisoes; i++){
		printf("%c", palavra1[i]);
	}
	
	for(i = colisoes; palavra2[i]; i++){
		printf("%c", palavra2[i]);
	}
    printf("\n");
	return 0;
}