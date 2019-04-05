#include <stdio.h>

int main(){
	int n1, n2, nota_final, media, media_final;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &nota_final);
	
	media = (n1 + n2) / 2;
	
	if(media >= 7) {
		printf("aprovado\n");
	} 
	else if(media < 4) {
		printf("reprovado\n");
	}
	else {
		media_final = (media + nota_final) / 2;
		if(media_final >= 5 ){
			printf("aprovado na final\n");
		} else {
			printf("reprovado na final\n");
		}
	}
	
    return 0;
}

