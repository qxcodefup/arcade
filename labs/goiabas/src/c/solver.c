#include <stdio.h>
#include <math.h>
//a solução eh o teto de (b+g+m)/c

int main(){
    int c = 0, b = 0, g = 0, m = 0;    
    scanf("%d %d %d %d", &c, &b, &g, &m);
    float result = (b + g + m) / (float) c; // calcula o piso
    printf("%d\n", (int) ceil(result));
}