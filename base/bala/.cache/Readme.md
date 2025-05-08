# Distância entre dois pontos

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/bala/cover.jpg)

## Contexto

Um atirador de elite estava atirando a 400 metros de distância em um papel milimetrado. Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles. Como ele não tinha uma régua, ele pegou as coordenadas dos pontos no plano cartesiano e usou a fórmula da distância entre dois pontos.

$$d_{AB} = \sqrt{(x₂ - x₁)^2 + (y₂ - y₁)^2}$$

Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto, imprima a distância entre os pontos com duas casas decimais.

### Entrada

- Coordenada ***X*** e coordenada ***Y*** do primeiro ponto.
- Coordenada ***X*** e coordenada ***Y*** do segundo ponto.

#### Saída

- A distância entre os pontos com duas casas decimais.

## Testes

```py
>>>>>>>> INSERT 01
3
7
1
4
======== EXPECT
3.61
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
1
8.2
-4
12
======== EXPECT
6.28
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
3
1
3
5
======== EXPECT
4.00
<<<<<<<< FINISH

```

## Dicas

### Programando em: C

- Para exibir um número de ponto flutuante, do tipo `float`, com duas casas decimais em C, utilize o especificador de formato `%.2f` na função `printf`. O número **2** após o ponto indica a quantidade de casas decimais a serem exibidas.

```c
int main() {
    float resultado;
    printf("%.2f\n", resultado);
}
```

- Para calcular a raiz quadrada em C, você deve incluir a biblioteca `math.h` em seu projeto e utilizar a função `sqrt()` passando como argumento o valor do qual deseja encontrar a raiz.

```c
#include <math.h>
int main() {
    raiz = sqtr(numero);
}
```

- A função `pow()` da biblioteca `math.h` é a maneira mais direta de elevar um número a qualquer potência em C. Para elevar um número ao quadrado, basta passar o número como primeiro argumento e 2 como segundo argumento.

```c
#include <math.h>
int main() {
    quadrado = pow(numero, 2);
}
```

### Programando em: Python

- Para exibir um número de ponto flutuante com duas casas decimais em Python, utilize o formato `:.2f` dentro da função `print`. O número **2** após o ponto indica o número de casas decimais que serão exibidas:

```py
print(f"{resultado:.2f}")
```

```py
print("{:.2f}".format(resultado))
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

- Para exibir um número com duas casas decimais em TypeScript, utilize o método `toFixed(2)` do objeto `Number`. O número **2** especifica a quantidade de casas decimais que serão exibidas após o ponto decimal:

```ts
console.log(resultado.toFixed(2)); 
```

```ts
write(resultado.toFixed(2));
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
