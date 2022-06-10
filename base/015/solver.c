#include <stdio.h>

int main(){
	
	int a = 0, b = 0;
	char op = 0;
	
	scanf("%d %d %c", &a, &b, &op);
	
	if(op == '+') {
		printf("%d\n", a + b);
	} else if(op == '-') {
		printf("%d\n", a - b);
	} else if(op == '*') {
		printf("%d\n", a * b);
	} else if(op == '/') {
		if (b == 0)
			printf("invalida\n");
		else
			printf("%d\n", a / b);
	}

	return 0;
}
