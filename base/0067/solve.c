#include <stdio.h>

int main () {
	int n;
	int i;
	int ordenado = 1;
	
	scanf("%d", &n);
	
	int dominos[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &dominos[i]);
	}
	
	for(i = 1; i < n; i++){
		if( dominos[i] < dominos[i-1] )
			ordenado = 0;
	}
	
	if (ordenado) printf("ok\n");
	else printf("precisa de ajuste\n");
}