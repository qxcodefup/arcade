#include <stdio.h>

int main() {
	float a, g, ra, rg, al, ga;

	scanf("%f %f %f %f", &a, &g, &ra, &rg);
	al=a/ra;
	ga=g/rg;

	if (al<ga) {
		printf("A\n");
	} else {
		printf("G\n");
	}

	return 0;
}