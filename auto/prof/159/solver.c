#include <stdio.h>
#define NMAX 102
#define NMAX 102

int main() {
	int n, m, soma, i, j, matriz[NMAX][NMAX], maior=0;

	scanf("%d %d", &n, &m);

	for (i=1; i<=n; i++) {
		for (j=1; j<=m; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	for (i=1; i<=n; i++) {
		soma=0;
		for (j=1; j<=m; j++) {
			soma+=matriz[i][j];
		}
		if (soma>maior) {
			maior=soma;
		}
	}

	for (i=1; i<=m; i++) {
		soma=0;
		for (j=1; j<=n; j++) {
			soma+=matriz[j][i];
		}
		if (soma>maior) {
			maior=soma;
		}
	}

	printf("%d\n", maior);

	return 0;
}