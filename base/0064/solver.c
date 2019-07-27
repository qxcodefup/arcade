#include <stdio.h>

int main () {
	int digProcurado, numContato, cont = 0;
	
	scanf("%d %d", &digProcurado, &numContato);
	
	while ( numContato > 0 ) {
		if ( numContato % 10 == digProcurado ) 
            cont++;
		numContato = numContato / 10;
	}
	
	printf("%d\n", cont);
	return 0;
}
