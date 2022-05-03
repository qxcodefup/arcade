#include <stdio.h>

int main() {
    int jog1 = 0;
    int jog2 = 0;
    scanf("%d %d", &jog1, &jog2);
    
    if (jog1 < jog2)
        jog1 += 15; //coloco o 1 depois do 2 na lista circular

    if (jog1 == jog2)
        puts("Empate");
    else if (jog1 - jog2 <= 7)
        puts("Jogador 2");
    else
        puts("Jogador 1");
    return 0;
}




