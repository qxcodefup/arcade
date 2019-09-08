#include <stdio.h>

int main(){
	int n1, n2;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	printf("%d\n", n1 / n2);
	printf("%d\n", n1 % n2);
	printf("%.2f\n", (float) n1 / (float) n2);
	
	return 0;
}
