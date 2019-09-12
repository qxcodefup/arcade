#include <stdio.h>

int main(){
	
	int a, b;
	char op;
	
	scanf("%d %d ", &a, &b);
	scanf("%c", &op);
	
	if(op == '+') printf("%d\n", a + b);
	if(op == '-') printf("%d\n", a - b);
	if(op == '*') printf("%d\n", a * b);
	
	if(op == '/' && b == 0) printf("invalida\n");
	if(op == '/' && b != 0) printf("%d\n", a / b);
	
	return 0;
}
