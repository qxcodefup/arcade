# Arredondar número

![_](assets/cover.jpg)

Um aluno ficou implorando para o seu professor de FUP arredondar seu 6.9999999999 para 10 porque ele precisa de um 10 para passar de semestre. Seu trabalho é utilizar as funções ceil, floor e round que existem na sua linguagem de programação.

implemente três funções:

- `ceil`: que sempre arredonda para cima
- `floor` que sempre arredonda para baixo
- `round`: que arredonda para baixo se a parte fracionária for menor que 0.5 e para cima se for maior ou igual a 0.5.

Pesquise como utilizar essas funções na linguagem de programação que você está utilizando.

Na função principal (main), leia um caractere que representa a operação (r, f, c) e um número do tipo float. Depois, chame a função correspondente e imprima o resultado.

### Entrada

- Um caractere (r, f ou c) representando a operação.
- Um número float

### Saida

- imprima um inteiro de acordo com a operação pedida.  

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
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
<!-- load -->
