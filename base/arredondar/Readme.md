# L2 - @arredondar número

[Motiv](#motivação) | [Shell](#shell) | [Dicas](#dicas)
-- | -- | --

![_](cover.jpg)

## Motivação

Um aluno ficou implorando para o seu professor de FUP arredondar seu 6.9999999999 para 10 porque ele precisa de um 10 para passar de semestre. Seu trabalho é implementar as funções ceil, floor e round para ajudar o professor a calcular as notas dos alunos.

implemente três funções:

- `ceil`: que sempre arredonda para cima
- `floor` que sempre arredonda para baixo
- `round`: que arredonda para baixo se a parte fracionária for menor que 0.5 e para cima se for maior ou igual a 0.5.

Os protótipos das funções são em **C**:
```c
int round(float num);
int floor(float num);
int ceil(float num);
```
Na função principal (main), leia um caractere que representa a operação (r, f, c) e um número do tipo float. Depois, chame a função correspondente e imprima o resultado.

## Testes

- Um caractere (r, f ou c) representando a operação.
- Um número float

### Saida

* imprima um inteiro de acordo com a operação pedida.  

### Exemplos

``` py
#INPUT
c
5.5
#OUTPUT
6
#END
```

```py
#INPUT
f
6.99
#OUTPUT
6
#END
```

```py
#INPUT
c
6.99
#OUTPUT
7
#END
```

```py
#INPUT
r
5.5
#OUTPUT
6
#END
```

```py
#INPUT
r
5.4
#OUTPUT
5
#END
```

### Dicas

- **C** - É dessa forma que é realizada a criação de uma função:
``` c
int round(float num){
    return;
}

int main() {
    float num = 1.1;
    round(num);
}
```

- **Python** - É dessa forma que é realizada a criação de uma função:
``` c
def round(float num):
    return

num = 1.1;
round(num);
```

- **TypeScript** - É dessa forma que é realizada a criação de uma função:
``` ts
function round(num: number): number{
    return;
}

let num = 1.1;
round(num);
```