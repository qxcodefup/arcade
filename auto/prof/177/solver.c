#include <stdio.h>

char minusculo (char c)
{
	if (c >= 'A' && c <= 'Z' ){
		return c + ('a' - 'A');
	}
	return c;
} // funcao nao utilizada
	

int main () {
	int i;
	int cont = 0;
	char texto[100];
	char letra;
	
	scanf("%99[^\n]\n", texto);
	scanf("%c", &letra);
	
	for(i = 0; texto[i] != 0; i++){
		if (texto[i] == letra ) cont++;
	}
	
	printf("%d\n", cont);
	return 0;
}