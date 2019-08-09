
#include <stdio.h>
#include <string.h>

int main(){
    int digitos[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int N;
    scanf("%d", &N);
    while(N--){
        int cont = 0;
        char palavra[100];
        scanf("%s", palavra);
        int size = strlen(palavra);
        for(int i = 0; i < size; i++)
            cont += digitos[palavra[i] - '0'];
        printf("%d leds\n", cont);
    }
}








