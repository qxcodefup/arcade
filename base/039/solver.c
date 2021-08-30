#include <stdio.h>
int main(){
    float valor_real = 0;
    char a = '0';
    float chute = 0;
    scanf("%f %c %f", &chute, &a, &valor_real);
    if((chute > valor_real && a == 'm') || (chute < valor_real && a == 'M')){
        puts("segundo");
    } else {
        puts("primeiro");
    }
}
 