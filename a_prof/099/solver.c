#include <stdio.h>

int main(){
    char texto[101];
    char saida[101];
    fgets(texto, 101, stdin);
    
    saida[0] = texto[0];//inicia o primeiro
    
    int t = 1;//indice em texto
    int s = 1;//indice em saida
    
    
    while(texto[t] != '\0'){
        if(texto[t] == ' '){//procure o inicio da prox palavra
            if(texto[t + 1] == saida[s - 1]){
                    t += 2;
                    continue;
            }
        }
                
        saida[s] = texto[t];
        s++;
        t++;
    }
    saida[s] = '\0';
    printf("%s", saida);
    
    return 0;
}