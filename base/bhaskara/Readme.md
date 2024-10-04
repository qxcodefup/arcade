# L2 - @bhaskara - usando biblioteca matemática

![_](cover.jpg)

## Motivação

Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das raízes. Agora é hora de implementar aquela conta pra nunca ter mais que fazer na mão.

## Ação

Dados os valores de A, B e C, calcule as raízes.

### Entrada

- Valores de A, B e C em ponto flutuante, um por linha.

### Saída

- Caso delta seja positivo, a saída deve ser a raiz positiva e raiz negativa, com duas casas decimais, uma raiz por linha.
- Caso delta seja igual a zero, uma única raiz deve ser considerada, com duas casas decimais.
- Caso delta sela negativo, a saída deve ser "nao ha raiz real"

## Exemplos

``` py
#INPUT duas raízes
5.4
25.0
-12.0
#OUTPUT
0.44
-5.07
#END
```

```py
#INPUT duas raízes
3.0
-7.0
4.0
#OUTPUT
1.33
1.00
#END
```

```py
#INPUT uma raiz
9.0
-12.0
4.0
#OUTPUT
0.67
#END
```

```py
#INPUT sem raízes
5.0
3.0
5.0
#OUTPUT
nao ha raiz real
#END
```

## Ajuda

- Para calcular a raiz quadrada você deverá utilizar a função `sqrt`. A função `sqrt` retorna a raiz quadrada do número que for passado por parâmetro. Exemplo:
  
```c
sqrt(4) retorna 2    
sqrt(5) retorna 2.23607    
sqrt(9.0) retorna 3    
```

Observação

- Para ser utilizada a função `sqrt`, ela deve ser importada. Segue as formas de importação em algumas linguagens e como utilizar:

Em **C**:

``` c
    #include <math.h> //c

    sqrt(4)  //retorna 2
```

Em **C++**:

``` c++
    #include <cmath> //c++

    sqrt(4) //retorna 2 
```

Em **Python**:

``` python
    import math #python

    math.sqrt(4) #retorna 2 
```

Em **JavaScript**:

``` javascript
    //javascript
    Math.sqrt(4) //retorna 2 
```
