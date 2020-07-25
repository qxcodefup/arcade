## #02_seleção L3 - Sai fora Bhaskara (Cálculo de raízes)


![](__capa.jpg)

## Motivação

Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das raízes. Agora é hora de implementar aquela conta pra nunca ter mais que fazer na mão.

## Ação

Dados os valores de A, B e C, calcule as raízes.

### Entrada:
- Valores de A, B e C em ponto flutuante, um por linha.

### Saída:
- Caso delta seja positivo, a saída deve ser a raiz positiva e raiz negativa, com duas casas decimais, uma raiz por linha.
- Caso delta seja igual a zero, uma única raiz deve ser considerada, com duas casas decimais.
- Caso delta sela negativo, a saída deve ser "nao ha raiz real"

## Exemplos

```
>>>>>>>> duas raízes
5.4
25.0
-12.0
========
0.44
-5.07
<<<<<<<<

>>>>>>>> duas raízes
3.0
-7.0
4.0
========
1.33
1.00
<<<<<<<<

>>>>>>>> uma raiz
9.0
-12.0
4.0
========
0.67
<<<<<<<<

>>>>>>>> sem raízes
5.0
3.0
5.0
========
nao ha raiz real
<<<<<<<<
```

## Ajuda

* Para calcular a raiz quadrada você deverá utilizar a função `sqrt`. A função `sqrt` retorna a raiz quadrada do número que for passado por parâmetro. Exemplo:
  
```
sqrt(4) retorna 2    sqrt(5) retorna 2.23607    sqrt(9.0) retorna 3    
```

Observação

* Para ser utilizada a função `sqrt`, ela deve ser importada. Segue as formas de importação em algumas linguagens e como utilizar:

``` c
    #include <math.h> //c

    sqrt(4)  //retorna 2
```
``` c++
    #include <cmath> //c++

    sqrt(4) //retorna 2 
```
``` python
    import math #python

    math.sqrt(4) #retorna 2 
```
``` javascript
    //javascript
    Math.sqrt(4) //retorna 2 
```

Pseudocódigo
```
Ler valor_a
Ler valor_b
Ler valor_c

delta = (valor_b * valor_b) - 4 * valor_a * valor_c

raiz_positiva = (-valor_b + sqrt(delta)) / (2 * valor_a)
raiz_negativa = (-valor_b - sqrt(delta)) / (2 * valor_a)

Se (delta for maior que 0):
    Mostrar raiz_positiva e raiz_negativo
Senao Se (delta for igual a 0):
    Mostrar raiz_positiva
Senao:
    Mostrar "nao ha raiz real"
```
