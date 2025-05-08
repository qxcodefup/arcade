# A idade do filho mais velho - OBI 2019 - F1PJ

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/monica/cover.jpg)

## Contexto

Dona Mônica é mãe de três filhos que têm idades diferentes. Ela notou que, neste ano, a soma das idades dos seus três filhos é igual à idade dela. Neste problema, dada a idade de dona Mônica e as idades de dois dos filhos, seu programa deve computar e imprimir a idade do filho mais velho.

Por exemplo, se sabemos que dona Mônica tem 52 anos e as idades conhecidas de dois dos filhos são 14 e 18 anos, então a idade do outro filho, que não era conhecida, tem que ser 20 anos, pois a soma das três idades tem que ser 52. Portanto, a idade do filho mais velho é 20.

Em mais um exemplo, se dona Mônica tem 47 anos e as idades de dois dos filhos são 21 e 9 anos, então o outro filho tem que ter 17 anos e, portanto, a idade do filho mais velho é 21.

### Entrada

- A primeira linha da entrada contém um inteiro **M** representando a idade de dona Mônica.  
- A segunda linha da entrada contém um inteiro **A** representando a idade de um dos filhos.
- A terceira linha da entrada contém um inteiro **B** representando a idade de outro filho.

### Saída

- Seu programa deve imprimir uma linha, contendo um número inteiro, representando a idade do filho mais velho de dona Mônica.

### Restrições

- 40 ≤ M ≤ 110
- 1 ≤ A < M
- 1 ≤ B < M
- A !=B

## Testes

```py
>>>>>>>> INSERT
52
14
18
======== EXPECT
20
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
47
21
9
======== EXPECT
21
<<<<<<<< FINISH

```

## Dicas

A idade do terceiro filho 𝐶 pode ser calculada pela fórmula:

$$C = M - (A + B)$$

Depois de calcular a idade do terceiro filho, compare as idades dos três filhos para determinar qual é o mais velho.

### Programando em: C

- Um operador ternário pode simplificar a conta. Ele é da seguinte forma:
`x = condicao ? valor_verdade : valor_falso`:

```c
int main() {
    int maior = 5 > 4 ? 5 : 4;    
}  
```

```c
int main() {
    int maior = C > maior ? C : maior;    
}  
```

### Programando em: Python

- Um operador ternário pode simplificar a conta. Ele é da seguinte forma:
`x = valor_verdade if condicao else valor_falso`:

```py
int x = 5 if 5 > 4 else 4
```

```py
int x = A if A > B else B
```

### Programando em: TypeScript

- Um operador ternário pode simplificar a conta. Ele é da seguinte forma:
`x = condicao ? valor_verdade : valor_falso`:

```ts
let maior = 5 > 4 ? 5 : 4;
```

```ts
let maior = C > maior ? C : maior;  
```
