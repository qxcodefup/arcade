#include <stdio.h>
#include <math.h>

float area_triangulo(float a, float b, float c){
    //@@return 0.0;
    float sp = (a + b + c)/2;
    float area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    return area;
}

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f\n", area_triangulo(a, b, c));
    return 0;
}
