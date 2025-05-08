# Aniquilando Ultrons V3

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/chefe/cover.jpg)

## Ação

Seu objetivo aqui é dado o código ultron e, um vetor de códigos de pessoas, retornar o mapeamento  
dizendo quais são Ultrons e quais são pessoas.

- Se houver alguém que tenha uma coincidência de 100%, indique que este pode ser ultron Chefe.
- Para ser Ultron, mais de 50% das letras precisa coincidir.
- Para cada pessoa no ambiente escreva "pessoa", "ultron" ou "chefe".

Ex:

- códido ultron: "ultron"  
- ambiente:"ruame ronuai Lion uuuaaaa ronia kkk luno"

Saida: "pessoa ultron chefe pessoa ultron pessoa chefe"

### Entrada

- linha 1: codigo ultron de N letras( 1 < N < 10)
- linha 2: linhas de ate X caracteres(1 < X < 500),  com vários códigos de pessoas, cada código de pessoas tem ate Y caracteres (1 < Y < 20) contendo apenas letras minúsculas e maiúsculas. Os códigos de pessoas são separados por espaço.

## Saída

- uma linha contendo para cada pessoa a saída se ela é "ultron", "pessoa" ou "chefe"

## Exemplos

``` py
>>>>>>>> INSERT
aeiou  
arta euio auiaoauio riu pegasus
======== EXPECT  
pessoa chefe chefe ultron pessoa
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
aer
arta euio auiaoauio riu pegasus rea
======== EXPECT
ultron pessoa pessoa pessoa pessoa chefe
<<<<<<<< FINISH
```
