#include <stdio.h>

typedef struct{
     int dia;
     int mes;
     int ano;
}Data;

typedef enum { LT, EQ, GT} compare;

compare compararDatas(Data dt1, Data dt2);


int main(){
    
    Data d1 ;
    Data d2 ;
    
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);


    compare res;
    res = compararDatas(d1,d2); //LT
    if(res == LT)
        printf("Mais antiga");
    else if(res == GT)
        printf("Mais recente");
    else 
        printf("Iguais");
    printf("\n");
}


compare compararDatas(Data dt1, Data dt2){
    if( dt1.ano < dt2.ano ) return LT;
    else if( dt1.ano > dt2.ano ) return GT;
    else if( dt1.mes < dt2.mes ) return LT;
    else if( dt1.mes > dt2.mes ) return GT;
    else if( dt1.dia < dt2.dia ) return LT;
    else if( dt1.dia > dt2.dia ) return GT;
    else return EQ; 
}
