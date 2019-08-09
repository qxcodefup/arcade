#include <stdio.h>
int main(){
    int nTrilhas = 0;
    scanf("%d", &nTrilhas);
    int melhor = 0;
    int oudContador = 99999;
    for(int i = 1; i <= nTrilhas; i++){
        int contador = 0;
        int oudPonto = 0;
        int tanTrilha = 0;
        int ponto = 0;
        scanf("%d", &tanTrilha);
        for(int x = 0; x < tanTrilha; x++){
            scanf("%d", &ponto);
            if(x == 0){
                oudPonto = ponto;
            }else{
                if(ponto != oudPonto){
                    if(ponto > oudPonto){
                        int aux = 0;
                        aux = ponto - oudPonto;
                        oudPonto = ponto;
                        contador += aux;
                    }else if(ponto < oudPonto){
                        int aux = 0;
                        aux = oudPonto - ponto;
                        oudPonto = ponto;
                        contador += aux;
                    }else if(ponto == oudPonto){
                        oudPonto = ponto;
                    }
                }
            }
        }
        if(i == 1){
            oudContador = contador;
            melhor = i;

        }
        if(contador < oudContador){
            oudContador = contador;
            melhor = i;
        }
    }
    printf("%d\n", melhor);
}