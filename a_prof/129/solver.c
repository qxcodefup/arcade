#include <stdio.h>

int main(){
	
	char campo[50][50];
	int n, m;
	int i, j, conta;
	scanf("%d %d ", &n, &m);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%c", &campo[i][j]);
		}
		scanf("\n");
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(campo[i][j] == '-'){
				conta = 0;
				if(i != n-1 && j != m-1 && campo[i+1][j+1] == '*'){
					conta++;
				}
				if(i != n-1 && j != 0 && campo[i+1][j-1] == '*'){
					conta++;
				}
				if(i != 0 && j != m-1 && campo[i-1][j+1] == '*'){
					conta++;
				}
				if(i != 0 && j != 0 && campo[i-1][j-1] == '*'){
					conta++;
				}
				if(j != m-1 && campo[i][j+1] == '*'){
					conta++;
				}
				if(i != n-1 && campo[i+1][j] == '*'){
					conta++;
				}
				if(j != 0 && campo[i][j-1] == '*'){
					conta++;
				}
				if(i != 0 && campo[i-1][j] == '*'){
					conta++;
				}
				if(conta > 0) campo[i][j] = '0' + conta;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%c", campo[i][j]);
		}
		printf("\n");
	}
}
