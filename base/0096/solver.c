#include <stdio.h>
#include <string.h>

int conta_leds_caractere(char x){ //conta individualmente quantos leds um caractere tem
	if (x == '0') return 6;
	if (x == '1') return 2;
	if (x == '2') return 5;
	if (x == '3') return 5;
	if (x == '4') return 4;
	if (x == '5') return 5;
	if (x == '6') return 6;
	if (x == '7') return 3;
	if (x == '8') return 7;
	if (x == '9') return 6;
	return 0;
}

int main (){	
	int i, j;
	int nTestes;
	char texto[1001];
	int somaLeds = 0;
	scanf("%d\n", &nTestes);
	
	for(j = 0; j < nTestes; j++){
		somaLeds = 0; //zera o contador antes de cada teste
		fgets(texto, sizeof(texto), stdin);
		for(i = 0; texto[i] != '\n'; i++) //percorre a string até achar o terminador '\n'
			somaLeds += conta_leds_caractere(texto[i]); //soma a contagem de todos caracteres
        printf("%d leds\n", somaLeds);
    }

    return 0;
}