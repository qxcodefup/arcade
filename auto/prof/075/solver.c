#include <stdio.h>

int main(){
	int n, q;
	
	int i;
	scanf("%d %d", &n, &q);
	int agua[n];
	
	for(i = 0; i < n; i++)
		agua[i] = 0;
	
	int j;
	int a, b, l;
	for(i = 0; i < q; i++){
		scanf("%d %d %d", &a, &b, &l);
		
		for(j = a; j <= b; j++)
			agua[j] += l;
	}
	
	for(i = 0; i < n; i++){
		printf("%d", agua[i]);
        if(i < n - 1)
            printf(" ");
    }
	printf("\n");
	return 0;
}
