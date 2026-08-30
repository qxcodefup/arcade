#include <stdio.h>
#include <math.h>

int main(){
    float vel, tempo, consumo;
    scanf("%f %f %f", &vel, &tempo, &consumo);
    float d = (vel * (tempo/60.0))/consumo;
    printf("%.2f\n", d);
    return 0;
}
