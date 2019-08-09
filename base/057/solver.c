#include <stdio.h>


int main () {
		
		int tropa, somaPar = 0, somaImpar = 0, i, tamVetor;
		
		
		scanf("%d", &tamVetor);
		
		for ( i = 0; i < tamVetor; i++){
			scanf ("%d", &tropa);
			
			if ( tropa % 2 == 0 )
				somaPar += tropa;
			else
				somaImpar += tropa;
			}
		
		
		if(somaPar > somaImpar)
            printf("rebeldes\n");
		if(somaImpar > somaPar)
            printf("soldados\n");
		if(somaPar == somaImpar)
            printf("empate\n");
		
		return 0;
	}
