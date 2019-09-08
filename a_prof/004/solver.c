#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1;   //coordenadas de P1
	float x2, y2;   //coordenadas de P2
	float distancia;
	
	scanf("%f %f ", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt( pow((x1 - x2),2) + pow((y1 - y2),2) );
	
	if (distancia < 0) 
        distancia = distancia * (-1);
	
	printf("%.2f\n", distancia);
	
	return 0;
}