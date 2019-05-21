#include <stdio.h>
#include <string.h>

int main () {
	char frase[100];
	fgets(frase, 100, stdin); 

	for(int i = 0; i < strlen(frase); i++){
		if(frase[i] >= 'a' && frase[i] <= 'z')
			printf("%c", frase[i] - ('a' - 'A'));
		else if(frase[i] >= 'A' && frase[i] <= 'Z')
			printf("%c", frase[i] + ('a' - 'A'));
		else
			printf("%c", frase[i]);
	}

	return 0;
}