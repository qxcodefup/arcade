#include <stdio.h>

int main (){
	int c, q = 0;
	int m;
	
	scanf("%d", &c);
	
	while( q < 2*c ){
		scanf("%d", &m);
		q += m;
		
		if(q == 0)
            printf("vazio\n");
		else if( q < c)
            printf("ainda cabe\n");
		else if( q < 2*c) 
            printf("lotado\n");
		else              
            printf("hora de partir\n");
	}
	
	return 0;
}
