# Múltiplo de sete

![_](assets/cover.jpg)

## Contexto

Implemente um programa que recebe um número inteiro e imprime "SIM" caso ele seja múltiplo de 7, e "NAO" caso contrário.

### Entrada

- Um número inteiro.

### Saída

- "SIM" caso o número seja múltiplo de 7.
- "NAO" caso o número não seja múltiplo de 7.

## Testes

```py
>>>>>>>> INSERT
3
======== EXPECT
NAO
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
14
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
