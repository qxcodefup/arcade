# L1 - @swap - Troca de valores de variáveis

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/swap/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup swap`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/swap/cover.jpg)

## Ação

Implemente a função 'troca', que recebe como parâmetro duas variáveis inteiras passadas por referência, e troca os valores destas variáveis.

O arquivo de envio já terá parte do código preenchido, veja abaixo:

```C
#include <stdio.h>

// Implemente a função 'troca'.
void troca(int *a, int *b){

}

int main(){

   int x = 0, y = 0;

   scanf("%d %d", &x, &y);

   // Chame a função 'troca' para trocar os valores de x e y.

   printf("%d %d", x, y);
}
```

Você deverá:

- Implementar a função 'troca'.
- Chamar a função 'troca' dentro da função 'main'.

## Exemplos

``` txt
>>>>>>>>
1 2
========
2 1
<<<<<<<<

>>>>>>>>
-1 3
========
3 -1
<<<<<<<<

>>>>>>>>
0 0
========
0 0
<<<<<<<<
```
