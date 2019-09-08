#include <stdio.h>

int main (){
	
	int i, n, cont = 0;
	int aux;
	int linf, lsup;
	
	
	scanf("%d", &n);
	scanf("%d", &linf);
	scanf("%d", &lsup);
	
	for(i = 0; i < n; i++){
		scanf("%d", &aux);
		if(aux >= linf && aux <= lsup){
			cont++;
		}
	}

	printf("%d\n", cont);
}