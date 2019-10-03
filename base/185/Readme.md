## ©04_vet L3 - Vetor interativo

![](__capa.jpg)

Faça um código que receba um char de ação e insira e remova elementos de uma lista.

- Opções
    - a: insere vários elementos no vetor
        - `a qtd _valor _valor ...`
    - i: insere em uma posição do vetor
        - `i _pos _valor`
    - r: remove de uma posição do vetor
        - `r _pos`
    - s: mostrar vetor no formato `[ v1 v2 v3 ]`
    - q: encerra a execução

- Entrada
    - se opção for `a` ou `A` receba um valor a ser inserido.
        - Ex: `a 5`, insere o 5 no final
    - se opção for `i` ou `s` 
        - Ex: `i 1 7`, insere o 7 na posição 1
- Saída
    - mostrar o vetor para cada opção `s` aparecer.

```
>>>>>>>>
s
q
========
[ ]
<<<<<<<<

>>>>>>>>
a 4 11 10 12 18
s
q
========
[ 11 10 12 18 ]
<<<<<<<<

>>>>>>>>
a 4 11 10 12 18
s
i 0 13
s
q
========
[ 11 10 12 18 ]
[ 13 11 10 12 18 ]
<<<<<<<<

>>>>>>>>
a 4 11 10 12 18
s
i 0 13
s
i 1 17
s
i 5 21
s
q
========
[ 11 10 12 18 ]
[ 13 11 10 12 18 ]
[ 13 17 11 10 12 18 ]
[ 13 17 11 10 12 21 18 ]
<<<<<<<<

>>>>>>>>
a 5 17 11 10 12 18
s
r 0
s
r 1
s
r 1
s
r 0
s
q
========
[ 17 11 10 12 18 ]
[ 11 10 12 18 ]
[ 11 12 18 ]
[ 11 18 ]
[ 18 ]
<<<<<<<<

```
