# L0 - @multiplo de sete

[Ação](#ação) | [Shell](#shell) | [Dicas](#dicas)
-- | -- | --

![Imagem eh Positivo](cover.jpg)

### Ação

Muitas vezes, em problemas matemáticos ou de programação, precisamos determinar se um número é múltiplo de outro para simplificar cálculos ou tomar decisões. Um exemplo clássico é verificar se um número é múltiplo de 7, o que pode ser útil em situações como regras de divisibilidade.

Implemente um programa que recebe um número inteiro e imprime "SIM" caso ele seja múltiplo de 7, e "NAO" caso contrário.

### Entrada

- Um número inteiro.

### Saída

- "SIM" caso o número seja múltiplo de 7.
- "NAO" caso o número não seja múltiplo de 7.

### Shell

```txt
#INPUT 0
3
#OUTPUT
NAO
#END

#INPUT 1
14
#OUTPUT
SIM
#END

#INPUT 2
21
#OUTPUT
SIM
#END

#INPUT 3
0
#OUTPUT
SIM
#END

#INPUT 4
45
#OUTPUT
NAO
#END

#INPUT 5
-20
#OUTPUT
NAO
#END

#INPUT 6
-21
#OUTPUT
SIM
#END
```

### Dicas

- **C** - Use o operador de módulo `%` para verificar se um número é múltiplo de 7:
``` c
int main() {
    if (numero % 7 == 0) printf("SIM\n");
    else printf("NAO\n");
}
```

- **Python** - Utilize o operador % para determinar se o número é divisível por 7:
``` python
if numero % 7 == 0:
    print("SIM")
else:
    print("NAO")
```

- **TypeScript** - Em TypeScript, o operador % funciona da mesma maneira:
``` ts
if (numero % 7 === 0) {
    console.log("SIM");
} else {
    console.log("NAO");
}
```
``` ts
if (numero % 7 === 0) {
    write("SIM");
} else {
    write("NAO");
}
```