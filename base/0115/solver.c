#include <stdio.h>
#include <string.h>

void move(char value[100], int t, int i){
    int aux = value[t];
    for(int a = t; a < i - 1; a++)
        value[a] = value[a + 1];
    value[i] = aux;
}

int main(){
    char broken[2];
    char value[100];

    scanf("%s", broken);
    scanf("%s", value);

    int t = strlen(value);
    for(int i = 0; i < t; i++){
        if(value[i] == broken[0]){
            move(value, t, i);
            value[t - 1] = 0;
            t--;
            i--;
        }
    }
    if(value[0] != '0' && value[0] != 0){
        printf("%s", value);
    }else{
        int aux = 1;
        for(int i = 0; i < t; i++){
            if(value[i] != '0'){
                aux = 0;
            }
            if(!aux){
                printf("%c", value[i]);
            }
        }
        if(aux){
            printf("0");
        }
    }
    printf("\n");
}