# Usando biblioteca matemática

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/bhaskara/cover.jpg)

## Contexto

Não sei se você amava ou odiava o tal do Bhaskara por inventar aquela fórmula das raízes. Agora é hora de implementar aquela conta pra nunca ter mais que fazer na mão.

Formula de bhaskara:

$$x = \frac{-b \pm \sqrt{\Delta}}{2a}$$

Cálculo do Delta:

$$\Delta = b^2 - 4ac$$

Dados os valores de A, B e C, calcule as raízes.

### Entrada

- Valores de A, B e C em ponto flutuante, um por linha.

### Saída

- Caso Δ seja positivo: exiba as duas raízes com duas casas decimais, uma em cada linha.
- Caso Δ seja igual a zero: exiba a única raiz com duas casas decimais.
- Caso Δ seja negativo: exiba a mensagem "nao ha raiz real".

## Exemplos

``` py
>>>>>>>> INSERT duas raízes
5.4
25.0
-12.0
======== EXPECT
0.44
-5.07
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT duas raízes
3.0
-7.0
4.0
======== EXPECT
1.33
1.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT uma raiz
9.0
-12.0
4.0
======== EXPECT
0.67
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sem raízes
5.0
3.0
5.0
======== EXPECT
nao ha raiz real
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Para exibir um número de ponto flutuante, do tipo `float` com uma casa decimal em C, utilize o especificador de formato `%.1f` na função `printf`. O número **1** após o ponto indica a quantidade de casas decimais a serem exibidas.

```c
int main() {
    float resultado;
    printf("%.1f\n", resultado);
}
```

- Para calcular a raiz quadrada em C, você deve incluir a biblioteca `math.h` em seu projeto e utilizar a função `sqrt()` passando como argumento o valor do qual deseja encontrar a raiz.

```c
#include <math.h>
int main() {
    raiz = sqtr(numero);
}
```

- A função `pow()` da biblioteca `math.h` é a maneira mais direta de elevar um número a qualquer potência em C. Para elevar um número ao quadrado, basta passar o número como primeiro argumento e **2** como segundo argumento.

```c
#include <math.h>
int main() {
    quadrado = pow(numero, 2);
}
```

### Programando em: Python

- Para exibir um número de ponto flutuante com uma casa decimal em Python, utilize o formato `:.1f` dentro da função `print`. O número **1** após o ponto indica o número de casas decimais que serão exibidas:

```py
print(f"{resultado:.1f}")
```

```py
print("{:.1f}".format(resultado))
```

- Em Python, o cálculo da raiz quadrada é bastante simples e direto. Basta importar o módulo math e utilizar a função `sqrt()`

```py
import math
raiz = math.sqtr(numero)
```

- Em Python, temos duas formas principais de elevar um número ao quadrado:

```py
import math
quadrado = math.pow(numero, 2)
```

```py
quadrado =  numero ** 2
```

### Programando em: TypeScript

- Para exibir um número com uma casa decimal em TypeScript, utilize o método `toFixed(1)` do objeto `Number`. O número **1** especifica a quantidade de casas decimais que serão exibidas após o ponto decimal:

```ts
console.log(resultado.toFixed(1)); 
```

```ts
write(resultado.toFixed(1));
```

- Em TypeScript, a abordagem é semelhante à do JavaScript. Não há uma biblioteca padrão para funções matemáticas, mas podemos utilizar a biblioteca Math global.

```ts
let raiz: number = Math.sqrt(numero);
```

- Em TypeScript, temos duas formas principais de elevar um número ao quadrado:

```ts
let quadrado: number = numero ** 2;
```

```ts
let quadrado: number = Math.pow(numero, 2);
```
