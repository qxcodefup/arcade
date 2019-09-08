#include <stdio.h>

int main () {
	
	int i;
	int pontos1 = 0, pontos2 = 0;	//pontuacao de cada jogador
	int n;
	
	scanf("%d", &n);
	double preco[n];		//precos de cada produto
	double chute1[n];	//chutes do 1 jogador
	char chute2[n];		//chutes do 2 jogador
	
	
	for (i = 0; i < n; i++){
		scanf("%lf ", &preco[i]);	//espacos no scan para evitar bugs no buffer do teclado
	}
	for (i = 0; i < n; i++){
		scanf("%lf ", &chute1[i]);
	}
	for (i = 0; i < n; i++){
		scanf("%c ", &chute2[i]);
	}
	
	for (i = 0; i < n; i++){
		if ( (preco[i] > chute1[i]) && (chute2[i] == 'M')) pontos2++;
		else if ( (preco[i] < chute1[i]) && (chute2[i] == 'm') ) pontos2++;
		else pontos1++;
	}
	
	if (pontos1 == pontos2) printf("empate");
	if (pontos1 > pontos2) printf("primeiro");
	if (pontos2 > pontos1) printf("segundo");

    printf("\n");
}
