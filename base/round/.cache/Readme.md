# Arredondar número

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/round/cover.jpg)

## Contexto

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

### Entrada

- Um caractere (r, f ou c) representando a operação.
- Um número float

### Saida

- imprima um inteiro de acordo com a operação pedida.  

## Testes

``` py
>>>>>>>> INSERT
c
5.5
======== EXPECT
6
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
f
6.99
======== EXPECT
6
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
c
6.99
======== EXPECT
7
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
r
5.5
======== EXPECT
6
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
r
5.4
======== EXPECT
5
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- É dessa forma que é realizada a criação de uma função:

```c
int round(float num){
    return;
}

int main() {
    float num = 1.1;
    round(num);
}
```

### Programando em: Python

- É dessa forma que é realizada a criação de uma função:

```py
def round(float num):
    return

num = 1.1;
round(num);
```

### Programando em: TypeScript

- É dessa forma que é realizada a criação de uma função:

```ts
function round(num: number): number{
    return;
}

let num = 1.1;
round(num);
```
