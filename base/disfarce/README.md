# Identificando Ultrons V2

![_](cover.jpg)

## Contexto

O Ultron copiou os poderes da Mística e está se disfarçando para surpreender os Vingadores. Como o Homem de Ferro está muito ocupado lutando, o computador dele enviará os dados para você, e sua tarefa é informar quais são pessoas verdadeiras e quais são Ultrons disfarçados.

Você receberá um "rastro genético magnético" (um código de letras) do Ultron e o código da pessoa analisada. Se o código da pessoa tiver **mais de 50%** de suas letras correspondendo ao código do Ultron, ela é um Ultron. Se a correspondência for de **100%**, ela é um "chefe". A verificação não diferencia maiúsculas de minúsculas.

Por exemplo, se o código do Ultron for "abcd" e o código da pessoa for "David", há 3 letras correspondentes ('D', 'a', 'd'). Como 3 de 5 letras é 60% (mais que 50%), David é um Ultron.

### Entrada

- A primeira linha contém um número inteiro X, a quantidade de casos de teste.
- As linhas seguintes contêm os dados para cada caso de teste.
- Cada caso de teste consiste em uma linha para o código do Ultron, seguida por uma linha para o código da pessoa.

### Saída

Para cada caso de teste, imprima uma das seguintes opções:

- "pessoa" se a correspondência for menor ou igual a 50%.
- "ultron" se a correspondência for maior que 50% (e menor que 100%).
- "chefe" se a correspondência for de 100%

### Restrições

- **1 ≤ X ≤ 50** (casos de teste)
- O código do Ultron terá entre **1** e **26** letras, sem repetições.
- A correspondência de letras não diferencia maiúsculas de minúsculas.

### Testes

``` py
>>>>>>>> INSERT
4
aeiou
axx
aeiou
bbaa
ultron
ronluo
ultron
rrrrrrrrra
======== EXPECT
pessoa
pessoa
chefe
ultron
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
aeiou
axo
aeiou
bba
======== EXPECT
ultron
pessoa
<<<<<<<< FINISH
```
