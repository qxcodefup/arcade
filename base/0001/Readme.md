## @QC0001 #2_sel L3 - Sai fora Bhaskara (Cálculo de raízes)
## @qxcode

![](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/0001/capa.jpg)

Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das raízes. Agora é hora de implementar aquela conta pra nunca ter mais que fazer na mão.

---
Dados os valores de A, B e C, calcule as raízes.

---
Entrada:
- Valores de A, B e C em ponto flutuante, um por linha.

Saída:
- Caso delta seja positivo, a saída deve ser a raiz positiva e raiz negativa, com duas casas decimais, uma raiz por linha.
- Caso delta seja igual a zero, uma única raiz deve ser considerada, com duas casas decimais.
- Caso delta sela negativo, a saída deve ser "nao ha raiz real"

## Testes

```
>>>>>>>> 01 duas raízes
5.4
25.0
-12.0
========
0.44
-5.07
<<<<<<<<

>>>>>>>> 02 duas raízes
3.0
-7.0
4.0
========
1.33
1.00
<<<<<<<<

>>>>>>>> 03 uma raiz
9.0
-12.0
4.0
========
0.67
<<<<<<<<

>>>>>>>> 04 sem raízes
5.0
3.0
5.0
========
nao ha raiz real
<<<<<<<<
```

## Ajuda

Para calcular a raiz quadrada você deverá importar a biblioteca math em seu projeto e chamar a função sqrt() passando o valor que você deseja encontrar a raiz. Declare uma variável para armazenar o valor de delta, isso tornará o código mais simples.

Lembre que para compilar manualmente com a biblioteca math você precisa adicionar o -lm ao parâmetro do GCC.

```c
#include <math.h>
#include <stdio.h>

int main(){
    float value = sqrt(...);
}
```

<!---

>>>>>>>> 05
1.0
-1.0
-20.0
========
5.00
-4.00
<<<<<<<<


>>>>>>>> 06
2.00
0.00
0.00
========
0.00
<<<<<<<<


>>>>>>>> 07
5.3
3.4
19.2
========
nao ha raiz real
<<<<<<<<

--->
