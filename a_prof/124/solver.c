#include <stdio.h>

int main () {
	int i, j;
	char texto[100];
	char busca[100];
	char subst[100];
	
	scanf("%99[^\n]\n", texto);
	scanf("%99[^\n]\n", busca);
	scanf("%99[^\n]", subst);

	for(i = 0; texto[i] != 0; i++){
		for(j = 0; texto[i+j] == busca[j] && busca[j] != 0; j++);
		if(busca[j] == 0){
			printf("%s", subst);
			i += j - 1;
		}
		else printf("%c", texto[i]);
	}
    printf("\n");
	return 0;
}