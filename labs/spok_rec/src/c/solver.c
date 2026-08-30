#include <stdio.h>

int main () {
	
	int id;
	int aux;
	int inverso = 0;
	
	scanf("%d", &id);
	
	aux = id;
	while (aux > 0){	
		inverso = inverso*10 + aux%10;
		aux = aux/10;
	}
	
	if( id == inverso) printf("1\n");
	else printf("0\n");
}

