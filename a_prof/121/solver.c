#include <stdio.h>


int main ()
{	
	int i,j;
	int larg, alt;
	alt = 0;
	
	scanf("%d", &larg);
	int cenario[larg];
	
	for(i = 0; i < larg; i++){
		scanf("%d", &cenario[i]);
		if( cenario[i] > alt ) alt = cenario[i];
	}
	
	for(i = 0; i < alt; i++){
		for(j = 0; j < larg; j++){
			if(alt - i > cenario[j]) printf("_");
			else printf("#");
		}
		printf("\n");
	}
	return 0;
}