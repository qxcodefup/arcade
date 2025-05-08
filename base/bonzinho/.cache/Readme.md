# Professor

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/bonzinho/cover.jpg)

## Motivação

Na disciplina do professor bonzinho, os alunos irão fazer 3 provas e 1 trabalho. Como o professor é muito legal, a nota mais baixa das provas será descartada.

A média é formada pelas soma das duas melhores notas de prova mais a nota do trabalho divido por 3.  

## Ação

Faça um programa que receba as notas das três provas e do trabalho e calcule a media final do aluno. Se a média for maior ou igual a 7, o programa deve avisar que o aluno foi aprovado. Caso contrário o programa deve avisar que o aluno vai para a prova final.

A ordem da entrada é importante nessa questão. As três primeira entradas são as notas da prova.  

### Entrada

- Três notas de prova como float e uma nota de trabalho, um por linha.

## Saída

- "Aprovado com nota" ou "Final com nota" onde nota é o valor da nota com uma casa decimal.  

## Exemplos

``` py
>>>>>>>> INSERT
10
10
5
10
======== EXPECT
Aprovado com 10.0
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
10
2
2
6
======== EXPECT
Final com 6.0
<<<<<<<< FINISH
```

## Dica

- Some todas as notas
- Faça a busca pela menor nota
- Calcule a soma - menor
- Calcule a média
