#include <stdio.h>

int main () {
	int digito = 0, num = 0;
	scanf("%d %d", &digito, &num);
	int cont = 0;
	do {
		if (num % 10 == digito) 
            cont++;
		num = num / 10;
	} while(num > 0);
	
	printf("%d\n", cont);
	return 0;
}
