# Substituições de substrings

![_](assets/cover.jpg)

## Contexto

O traficante Aldemir liga para seu comparsa Valdemiro por um telefone que estava grampeado. Aldemir fala:

- "preciso de tutu pra comprar uma tutuda porque o Carlos nao me entutu mais".

Valdemiro retruca:

- "nao me axreca aqui, a xrada que voce me xssou xrece que foi xssada na *****".

O que os guardas não sabiam era que "tutu" significava "grana" e todos os "x" eram um "pa".

Inspirado pela necessidade de decifrar a mensagem, sua tarefa é criar uma ferramenta de substituição de texto. O programa deve ler três informações: um texto completo, a palavra específica que você quer encontrar e a nova palavra que será usada para a substituição. Ao final, ele deve exibir o texto completo com todas as trocas realizadas.

### Entrada

- A primeira linha contém um texto.
- A segunda linha contém a palavra a ser substituída.
- A terceira linha contém a palavra que irá substituí-la.

### Saída

- Imprima o texto com as substituições realizadas.

### Restrições

- Todos os caracteres da entrada são minúsculos e sem pontuação.
- **Desafio:** Não use nenhuma função pronta de substituição da sua linguagem de programação para resolver o problema.

## Testes

``` py
>>>>>>>> INSERT
a aba absorveu
ab
c
======== EXPECT
a ca csorveu
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a almofada esta mofada e molhada
mo
bigode
======== EXPECT
a albigodefada esta bigodefada e bigodelhada
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a bd abda
bd
abc
======== EXPECT
a abc aabca
<<<<<<<< FINISH
```
