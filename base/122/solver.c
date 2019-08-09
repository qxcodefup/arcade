#include <stdio.h>
  
  int vog(char v){
        if(v=='A' || v=='E' || v=='I' || v=='O' || v=='U' || v=='a' || v=='e' || v=='i' || v=='o' || v=='u'){
            return 1;
        }
      return 0;
  }
  
  int main(){
      char frase[102];
      int x = 0;
      
      fgets(frase,sizeof(frase),stdin);
      
      for(int i = 0;frase[i] != '\n';i++){
          if(frase[i] == ' '){
               x = -1;
          }
          if(vog(frase[i]) == 0 && vog(frase[i-1]) == 1){
              if(x>0){
                  int k = 0;
                  while(k < 2){
                      for(int j = i - x; j < i; j++){
                          if(frase[i-x-1] == ' ' || i == 2){
                              printf("%c",frase[j]);               
                          }
                      }
                      k++;
                  }
              }
              x = -1;
              printf("%c",frase[i]);
          }else{
              printf("%c",frase[i]);
          }
          x++;
      }
      printf("\n");
}