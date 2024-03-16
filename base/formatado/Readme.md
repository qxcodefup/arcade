# L2 - imprimir vetor @formatado

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/formatado/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup formatado`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/formatado/cover.jpg)

Faça uma função `print_vet` que recebe um vetor e imprime formatado.

- Entrada
  - A quantidade N de casos de teste
  - Cada caso de teste terá uma linha que inicia com a quantidade Q de elementos do vetor seguida dos elementos.
- Saída
  - Para cada caso de teste imprima o vetor formatado

## Testes

``` txt
>>>>>>>>
1
0
========
[]
<<<<<<<<

>>>>>>>>
1
3 10 16 11
========
[10, 16, 11]
<<<<<<<<

>>>>>>>>
3
3 10 16 11
1 88
4 34 12 32 100
========
[10, 16, 11]
[88]
[34, 12, 32, 100]
<<<<<<<<

>>>>>>>>
4
3 10 16 11
1 88
4 34 12 32 100
0
========
[10, 16, 11]
[88]
[34, 12, 32, 100]
[]
<<<<<<<<

```

## Código inicial

```c
#include <stdio.h>

void print_vet(int vet, int size){
    //seu código aqui
}

int main(){
    int qtd = 0;
    scanf("%d", &qtd);
    while(qtd--){
        int size = 0;
        scanf("%d", &size);
        int vet[size];
        for(int i = 0; i < size; i++)
            scanf("%d", &vet[i]);
        print_vet(vet, size);
    }
}
```
