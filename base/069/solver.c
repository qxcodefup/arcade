#include <stdio.h>

typedef struct  {
    int x, y;
} Ponto;

typedef struct {
  Ponto supEsq;
  Ponto infDir; 	
} Retangulo;

Ponto createPonto(int x1, int y1){
    Ponto p = {x1, y1};
    return p;
}

Retangulo createRetangulo(int x1, int y1, int x2, int y2) {
    Retangulo r = {{x1,y1}, {x2,y2}};
    return r;
};

int dentro(Retangulo r, Ponto p);

int main(){
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    Retangulo r = createRetangulo(x1, y1, x2, y2);
    int x, y;
    scanf("%d %d", &x, &y);
    Ponto p = createPonto(x,y);	
    printf("%d\n", dentro(r,p) ); //1
}


int dentro(Retangulo r, Ponto p){
    
    Ponto supEsq = r.supEsq;
    Ponto infDir = r.infDir;

    if( p.x >= supEsq.x && p.x <= infDir.x && p.y >= infDir.y && p.y <= supEsq.y )
        return 1;
    else
        return 0;

}
