#include <stdio.h>
int main(){
    char opcao = 0;
    int forca = 0; //forca ao inves de f
    int tipo = 0; //inicialize todas as variaveis
    scanf(" %c %d" , &opcao , &forca);
    if(opcao == 'b')
        tipo = 20;
    else
        tipo = 18;
    int poder = (forca * tipo - 80)/10;
    
    if(poder < 150){
        printf("Fraco, nem passou\n");
    }else if(poder < 180){ //busca intervalada
        printf("Perfeito\n");
    }else if(poder < 210){
        printf("Satisfeito\n");
    }else{
        printf("Muito forte, bola fora\n");
    }
}