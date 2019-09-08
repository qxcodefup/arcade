#include <stdio.h>
#include <string.h>

int main(){
    int cases = 0;
    scanf("%d", &cases);
    getchar();

    char codes[cases][26];
    char peoples[cases][100];

    for(int i = 0; i < cases; i++){
        scanf("%s", codes[i]);
        getchar();
        scanf("%s", peoples[i]);
        getchar();
    }

    for(int i = 0; i < cases; i++){
        float ocurrency = 0.0;
        int t_people = strlen(peoples[i]);
        for(int j = 0; j < t_people; j++){
            int t_code = strlen(codes[i]);
            for(int k = 0; k < t_code; k++){
                if(codes[i][k] == peoples[i][j]){
                    peoples[i][j] = 0;
                    ocurrency++;
                }
            }
        }
        if(ocurrency == t_people){
            printf("chefe\n");
        }else if(ocurrency > (t_people * 1.0) / 2){
            printf("ultron\n");
        }else{
            printf("pessoa\n");
        }
    }

}