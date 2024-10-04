# L0 - Soma de @tres inteiros

[Ação](#ação) | [Shell](#shell) | [Dicas](#dicas)
-- | -- | --

![Imagem meteriologica](cover.jpg)

### Ação

Você deve escrever um programa que recebe três números inteiros e retorna a soma desses três números.

### Entrada

- A entrada consiste de três linhas. Cada linha contém um número inteiro, representando os valores a serem somados.
### Saída

- A saída deve conter um único valor: a soma dos três números inteiros, seguido por uma quebra de linha.


### Shell

```
#INPUT
2
3
4
#OUTPUT
9
#END

#INPUT
12
17
24
#OUTPUT
53
#END

#INPUT
-10
-4
23
#OUTPUT
9
#END
```

### Dicas

- C - Quebre uma linha usando `\n`:
``` c
int main() {
    printf("%d\n", soma);
}
```

- Python - Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:
``` python
print(soma)
```

- TypeScript - Não há necessidade de quebrar a linha manualmente, pois ela é quebrada automaticamente:
``` ts
console.log(soma); || write();
```
