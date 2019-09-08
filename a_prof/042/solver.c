#include <stdio.h>
int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        printf("G ");
    }else if(a < b && a < c){
        printf("P ");
    }else{
        printf("M ");
    }
    if(b > a && b > c){
        printf("G ");
    }else if(b < a && b < c){
        printf("P ");
    }else{
        printf("M ");
    }
    if(c > b && c > a){
        printf("G");
    }else if(c < b && c < a){
        printf("P");
    }else{
        printf("M");
    }
    printf("\n");
}