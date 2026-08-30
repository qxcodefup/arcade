#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vogal(char a){
	a = tolower(a);
	if(a == 'a'|| a == 'e' || a == 'i' || a == 'o' || a == 'u'){
		return 1;
	}
	return 0;
}

int contaVogal(char palavra[100]){
	int i,cont = 0;
	
	for(i = 0; i < strlen(palavra); i++){
		if(vogal(palavra[i])){
			cont++;
		}
	}
	
	return cont;
}

int terminacao (char palavra[100]){
	int i;
	
	for(i = 0; i < strlen(palavra); i++);
	
	return vogal(palavra[i-1]);
}

int main(){
	char nome[100],crush[100];
	int pontos = 0;
	
	scanf("%s",nome);
	scanf("%s",crush);
	
	if(toupper(nome[0]) == toupper(crush[0])){
		pontos += 20;
	}
	
	if(strlen(nome) == strlen(crush)){
		pontos += 30;
	}
	
	if(contaVogal(nome) == contaVogal(crush)){
		pontos += 30;
	}
	
	if(terminacao(nome) == terminacao(crush)){
		pontos += 20;
	}	
	else{
		if(pontos != 0){
			pontos -= 10;	
		}
	}
	
	printf("As chances do crush te dar bola sao: %d%%!\n",pontos);
	return 0;
}