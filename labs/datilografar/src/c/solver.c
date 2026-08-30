#include <stdio.h>
#include <string.h>

int power(int a, int b){
    int tmp = 1;
    while(b > 0){
        tmp *= a;
        b--;
    }
    return tmp;
}

int main(){
    char broken, num[100];
    scanf("%c", &broken);
    scanf(" %s", num);
    int size = strlen(num);
    for(int i = 0; i < size; i++){
        if(num[i] == broken) num[i] = '#';
    }
    int total = 0, temp = 0;
    for(int j = size - 1; j >= 0; j--){
        if(num[j] != '#'){
            total += (num[j] - '0') * power(10, temp);
            temp++;
        }
    }
    printf("%d\n", total);
}