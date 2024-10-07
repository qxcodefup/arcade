# @celsius - conversor para Fahrenheit

![Imagem Conversor Celsius para Fahrenheit](cover.jpg)

## Ação

No Brasil, a unidade de temperatura que utilizamos é o grau Celsius (ºC),
diferente dos países de origem inglesa. Nesses países, a unidade usual é o
Fahrenheit (ºF).

As análises matemáticas envolvendo situações comparativas entre temperaturas em
graus Celsius e temperaturas em Fahrenheit originaram uma expressão algébrica no
intuito de conversões de temperatura:

$$T_f = 1.8 \cdot T_c + 32$$

Implemente um programa que recebe a temperatura em graus Celsius e converte para
Fahrenheit. O valor fornecido será fracionário (double).

### Entrada

- Temperatura em Celsius  

#### Saída

- O valor correspondente em Fahrenheit, com 6 casas decimais.

## Testes

```py
#INPUT 0
43.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 1
55.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 2
99.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 3
69.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 4
64.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 5
84.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 6
95.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 7
56.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 8
36.000000
======== EXPECT
>>>>>>>> INSERT000
<<<<<<<< FINISH
```

```py
#INPUT 9
13.000000
======== EXPECT
>>>>>>>> INSERT000
<<<<<<<< FINISH
```

```py
#INPUT 11
31.000000
======== EXPECT
>>>>>>>> INSERT000
<<<<<<<< FINISH
```

```py
#INPUT 12
18.000000
======== EXPECT
>>>>>>>> INSERT000
<<<<<<<< FINISH
```

```py
#INPUT 13
98.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

```py
#INPUT 14
63.000000
======== EXPECT
>>>>>>>> INSERT0000
<<<<<<<< FINISH
```

## Dicas

**C** - Para exibir um número de ponto flutuante do tipo `double`, recomendado por sua maior precisão, com seis casas decimais em C, utilize o especificador de formato `%.6f` na função `printf`. O número **6** após o ponto indica a quantidade de casas decimais a serem exibidas:

```c
int main() {
    double resultado;
    printf("%.6f\n", resultado);
}
```

**Python** - Para exibir um número de ponto flutuante com seis casas decimais em Python, utilize o formato `:.6f` dentro da função `print`. O número **6** após o ponto indica o número de casas decimais que serão exibidas:

``` python
print(f"{resultado:.6f}")
```

```py
print("{:.6f}".format(resultado))
```

**TypeScript** - Para exibir um número com seis casas decimais em TypeScript, utilize o método `toFixed(6)` do objeto `Number`. O número **6** especifica a quantidade de casas decimais que serão exibidas após o ponto decimal:

```ts
console.log(resultado.toFixed(6)); 
```

```ts
write(resultado.toFixed(6));
```
