#include <stdio.h>

int main(int argc, char const *argv[]){
    int angulo = 0;
    scanf("%d", &angulo);
    angulo = angulo % 360;
    if(angulo < 0)
        angulo += 360;
    printf("%d\n", angulo);
    return 0;
}
