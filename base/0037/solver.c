#include <stdio.h>

int main(){
    int jog1 = 0;
    int jog2 = 0;
    scanf("%d %d", &jog1, &jog2);
    
/* opcao 1
    if(jog1 == jog2){
        puts("Empate");
        return 0;
    }
    int dif = jog2 - jog1;
    if(dif < 0)
        dif += 15;
    if(dif <= 7)
        puts("Jogador 1")
    else
        puts("Jogador 2");
*/
    
    //opcao 2
    if(jog1 == jog2)
        puts("Empate");
    else if(((jog2 - jog1) + 15) % 15 <= 7)
        puts("Jogador 1");
    else
        puts("Jogador 2");
    
    return 0;
}




