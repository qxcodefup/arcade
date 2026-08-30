#include <stdio.h>

char identifica (char c){
	char original = c;
	if(c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');        // preve caso a letra seja maiuscula
		
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return 'v';
	if(c >= 'a' && c <= 'z')
		return 'c';
	return original;
}

int main () {
	int i;
	char frase[100];
	fgets(frase, sizeof(frase), stdin);
	
	for(i = 0; frase[i] != '\0'; i++){
		if(frase[i] != '\n')
			printf("%c", identifica(frase[i]));
	}	
    printf("\n");
	return 0;
}