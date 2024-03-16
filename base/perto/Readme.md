# L2 - Ponto @perto

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/perto/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup perto`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/perto/cover.jpg)

Considere o seguinte tipo de registro que deve ser usado em seu programa:

```C
typedef struct{
     float x; 
     float y;
}Ponto;
```

Implemente um função que recebe n pontos distintos e um `Ponto p` e devolva o ponto mais próximo de p entre os n pontos distintos. A função tem o seguint protótipo:

```c
Ponto proximo(Ponto vetor[], int n, Ponto p);
```

Dica: Para isso, implemente uma função que recebe dois pontos e calcule a distância entre esse dois pontos.

```c
float distancia(Ponto p1, Ponto p2);
```

O programa principal é o seguinte:

```c
#include <stdio.h>
#include <math.h>

typedef struct {
    float x,y;
} Ponto;

Ponto proximo(Ponto vetor[], int n, Ponto p);

int main(){
    
    Ponto p = {2,4};
    Ponto vet[] = { {3,6}, {1,6}, {5,7}, {3,9}, {4,9} };
    Ponto q = proximo(vet, 5, p);
    printf("%.2f %.2f\n", q.x, q.y); //3.00 6.00 
}
```
