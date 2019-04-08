#include <stdio.h>


int main () {
		
		int tropa, somaJedi = 0, somaSith = 0, i, tamVetor;
		
		
		scanf("%d", &tamVetor);
		
		for ( i = 0; i < tamVetor; i++){
			scanf ("%d", &tropa);
			
			if ( i < tamVetor/2 )
				somaJedi += tropa;
			else
				somaSith += tropa;
			}
		
		
		if(somaJedi > somaSith) 
            printf("Jedi\n");
		if(somaSith > somaJedi)
             printf("Sith\n");
		if(somaJedi == somaSith) 
            printf("Empate\n");
		
		return 0;
	}
