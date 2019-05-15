#include <stdio.h>

int main () {
	int i;
	int n; //numero de participantes
	int x; //numero do primeiro participante
	
	scanf("%d", &n);
	scanf("%d", &x);
	
	int participante[n];
	
	//o vetor vai representar a fila de candidatos, onde:
	// 1 - vivo		0 - morto
	for (i = 0; i < n; i++)
		participante[i] = 1;	//todos participantes comecam vivos	
	
				//inicialmente a variavel x indica qual vai ser a posicao no vetor da primeira vitima
	x = x%n;	//caso x = numero de participantes, a variavel x recebe zero
				//usando o resto, podemos usar uma ideia de rotacao no código

	for (i = 0; i < n - 1; i++){ 	//repete o laco n-1 vezes, que eh o numero de pessoas a morrer
		
		participante[x] = 0; //mata proxima vitima
		
		while( participante[x] == 0	){ //busca a quem entregar a espada
			x++;
			x = x%n;
		}
		
		x++;	//busca a proxima vitima
		x = x%n;
		while( participante[x] == 0	){
			x++;
			x = x%n;	//sempre utilizando o resto, para que o valor de x volte a zero quando chegar ao fim da fila
		}
	}	

	// Neste ponto, o jogo ja esta encerrado. Falta apenas imprimir o ganhador	 		
			 	
	for (i = 0; i < n; i++){ //busca o vencedor
		if (participante[i] != 0)
			x = i;
	}
	
	// x indica a posicao do vencedor no vetor
	// mas como o numero dos participantes inicia do 1, o vencedor eh x + 1
		
	printf("%d\n", x + 1);
	return 0;
}
