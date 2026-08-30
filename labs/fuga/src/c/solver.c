#include <stdio.h>

int main()
{
	int H,P,F,D;
	scanf("%d %d %d %d", &H, &P, &F, &D);
	
	if(D == -1) {
		while(1) {
			if(F == P) {
				printf("N\n");
				break;
			}
			else if(F == H) {
				printf("S\n");
				break;
			}
			F--;
			if(F == -1) {
				F = 15;
			}
		}
	} else {
		while(1) {
			if(F == P) {
				printf("N\n");
				break;
			}
			else if(F == H) {
				printf("S\n");
				break;
			}
			F++;
			if(F == 16){
				F = 0;
			}
		}
	}
	
	return 0;
}

