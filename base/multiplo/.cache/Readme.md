# Múltiplo de sete

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/multiplo/cover.jpg)

## Contexto

Muitas vezes, em problemas matemáticos ou de programação, precisamos determinar se um número é múltiplo de outro para simplificar cálculos ou tomar decisões. Um exemplo clássico é verificar se um número é múltiplo de 7, o que pode ser útil em situações como regras de divisibilidade.

Implemente um programa que recebe um número inteiro e imprime "SIM" caso ele seja múltiplo de 7, e "NAO" caso contrário.

### Entrada

- Um número inteiro.

### Saída

- "SIM" caso o número seja múltiplo de 7.
- "NAO" caso o número não seja múltiplo de 7.

## Testes

```py
>>>>>>>> INSERT 0
3
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 1
14
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 2
21
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 3
0
======== EXPECT
SIM
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 4
45
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 5
-20
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 6
-21
======== EXPECT
SIM
<<<<<<<< FINISH
```

### Dicas

### Programando em: C

- Use o operador de módulo `%` para verificar se um número é múltiplo de 7:

```c
int main() {
    if (numero % 7 == 0) printf("SIM\n");
    else printf("NAO\n");
}
```

### Programando em: Python

- Utilize o operador % para determinar se o número é divisível por 7:

```py
if numero % 7 == 0:
    print("SIM")
else:
    print("NAO")
```

Programando em: TypeScript

- Em TypeScript, o operador % funciona da mesma maneira:

```ts
if (numero % 7 === 0) {
    console.log("SIM");
} else {
    console.log("NAO");
}
```

```ts
if (numero % 7 === 0) {
    write("SIM");
} else {
    write("NAO");
}
```
