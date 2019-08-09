#include <stdio.h>
#include <string.h>

int main(){

    char codes[10];
    char peoples[500];

    scanf("%s", codes);
    getchar();
    scanf("%[^\n]", peoples);
    getchar();

    for(int i = 0; i < strlen(peoples); i++){
        float ocurrency = 0.0;
        int j = i;
        while(peoples[j] != ' ' && peoples[j] != '\0'){
            for(int k = 0; k < strlen(codes); k++){
                if(peoples[j] == codes[k] || peoples[j] + 32 == codes[k]){
                    ocurrency++;
                    break;
                }
            }
            j++;
        }        
        if(ocurrency == j - i){
            printf("chefe ");
        }else if(ocurrency > ((j - i) * 1.0) / 2){
            printf("ultron ");
        }else{
            printf("pessoa ");
        }
        i = j;
    }

}