#include <stdio.h>

int main()
{
	float salarioBase;
	float novoSalario;
	
	scanf("%f", &salarioBase);
	
	if (salarioBase <= 1000) novoSalario = salarioBase * 1.20;
	else if (salarioBase <= 1500) novoSalario = salarioBase * 1.15;
	else if (salarioBase <= 2000) novoSalario = salarioBase * 1.10;
	else novoSalario = salarioBase * 1.05;
	
	printf("%.2f\n", novoSalario);
    return 0;
}
