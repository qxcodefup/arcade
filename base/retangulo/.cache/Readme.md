# L2 - @retangulo

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/retangulo/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup retangulo`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/retangulo/cover.jpg)

Um retângulo com os lados paralelos aos eixos pode ser descrito por dois pontos `supEsq` e `infDir`. O ponto supEsq representa a coordenada do canto superior esquerdo e o ponto infDir representa a coordenada do canto inferior direito.

```C
typedef struct  {
    int x, y;
} Ponto;

typedef struct {
   Ponto supEsq;
   Ponto infDir; 
} Retangulo;
```

Construa uma função com o seguinte protótipo:

```C
int dentro(Retangulo ret, Ponto p);
```

A função dentro devolve 1 se o ponto p está dentro do retângulo rete 0, caso contrário.

A função principal do seu programa é a seguinte:

```C
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
    Retangulo r = {x1,y1,x2,y2};
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
```
