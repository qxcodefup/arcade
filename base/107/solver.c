#include <stdio.h>

int main(){
    char frase[100], chave[100], op;
    int j = 0;
    scanf("%[^\n]s", frase);
    scanf(" %[^\n]s", chave);
    scanf(" %c", &op);

    for(int i = 0; frase[i] != 0; i++){
        if(frase[i] >= 'a' && frase[i] <= 'z'){
            if(chave[j] == 0) j = 0;
            if(op == '+'){
                frase[i] = ((frase[i] - 'a') + (chave[j] - 'a'))%26;
            }else{
                frase[i] = ((frase[i] - 'a') - (chave[j] - 'a') + 26)%26;
            }
            j++;
            frase[i] += 'a';
        }
        printf("%c", frase[i]);
    }
    printf("\n");
    return 0;
}