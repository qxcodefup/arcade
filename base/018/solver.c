#include <stdio.h>


int my_floor(float value) {
    return (int) value;
}
int my_ceil(float value) {
    return (int)(value + 1);
}
int my_round(float value){
    return value < (int)(value) + 0.5 ? my_floor(value) : my_ceil(value);
}

int main(){
    char acao = 0;
    float num = 0;
    scanf("%c %f", &acao, &num);

    if(acao == 'c') {
        printf("%d\n", my_ceil(num));
    } else if(acao == 'f') {
        printf("%d\n", my_floor(num));
    } else {
        printf("%d\n", my_round(num));
    }
}