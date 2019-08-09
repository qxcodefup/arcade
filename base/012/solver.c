#include <stdio.h>

int main(){
	int n;
	int g = 0;
	int c = 0;
	int l = -1;
	scanf("%d",&n);
	char arena[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf(" %c",&arena[i][j]);
			if(arena[i][j] == 'L') 
				l = i;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(i != l){
			for(int j = 0; j < n; j++){
				if((arena[i][j] == 'C' && (i+j == n-1))) c+=2;
				else if(arena[i][j] == 'G') g+=2;
				else if(arena[i][j] == 'C') c+=1;
			}
		}
	}
	
	if(g > c){
		printf("Gladiadores");
	}
	else if(g < c){
		printf("Condenados a morte");
	}
	else{
		printf("Ninguem");
	}
	printf("\n");
	return 0;
}
