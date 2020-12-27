#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void swap(char* a, char* b){
    char aux = *a;
    *a = *b;
    *b = aux;
}
bool nextperm(char* str){
    size_t length = strlen(str);
    if (length == 0)
        return false;
    size_t i = length - 1;
    while (i > 0 && str[i - 1] >= str[i])
        i--;
    if (i == 0)
        return false;
    
    size_t j = length - 1;
    while (str[j] <= str[i - 1])
        j--;
    swap(&str[i - 1],&str[j]);
   
    j = length - 1;
    while (i < j) {
        swap(&str[i],&str[j]);
        i++;
        j--;
    }
    return true;
}

void ciclo(char* str, int i){
    while(i>0){
        if(nextperm(str)){
            i--;
            continue;
        }
        break;
    }
}


int main(){
    int c;
    char n1[11];
    scanf("%[^\n]%d",n1,&c);
    ciclo(n1,c);
    printf("%s\n", n1);
}