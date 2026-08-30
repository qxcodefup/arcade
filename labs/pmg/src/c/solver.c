#include <stdio.h>

int main (){
	
	int i, n;
	double media = 0; // o tipo float apresenta erro de precisao em um dos casos teste
	
	scanf("%d", &n);
	double altura[n];
	
	for(i = 0; i < n; i++){
		scanf("%lf", &altura[i] );
		media += altura[i];
	}
	
	media = media / n;

	printf("%.2f\n", media);
	
	for(i = 0; i < n; i++){
		if( altura[i] < media )
            printf("P");
        else if( altura[i] > media ) 
            printf("G");
		else 
            printf("M");
        if(i < n - 1)
            printf(" ");
	}
    printf("\n");
}