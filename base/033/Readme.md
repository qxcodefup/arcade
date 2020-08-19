## #seleção L3 - Professor Bonzinho


![](__capa.jpg)

## Motivação

Na disciplina do professor bonzinho, os alunos irão fazer 3 provas e 1 trabalho. Como o professor é muito legal, a nota mais baixa das provas será descartada.

A média é formada pelas soma das duas melhores notas de prova mais a nota do trabalho divido por 3.  

## Ação

Faça um programa que receba as notas das três provas e do trabalho e calcule a media final do aluno. Se a média for maior ou igual a 7, o programa deve avisar que o aluno foi aprovado. Caso contrário o programa deve avisar que o aluno vai para a prova final.

A ordem da entrada é importante nessa questão. As três primeira entradas são as notas da prova.  

### Entrada

*   Três notas de prova como float e uma nota de trabalho, um por linha.

### Saída

*   "Aprovado com $nota" ou "Final com $nota" onde $nota é o valor da nota com uma casa decimal.  

## Exemplos

```
>>>>>>>>
10
10
5
10
========
Aprovado com 10.0
<<<<<<<<

>>>>>>>>
10
2
2
6
========
Final com 6.0
<<<<<<<<
```

## Dicas

Você pode deixar as notas 2 e 3 sendo as maiores, basta você verificar se alguma delas é a menor, se for troca com a primeira. Depois você pode somar com a nota do trabalho e dividir pro 3. No final é só verificar se ele foi aprovado ou não.

### Pseudocódigo

```c
LER A, B, C, T;
SE B <= A E B<=C
	B = A;
SE NAO SE  C<=A E C<=B
	C = A;
MEDIA = (B + C + T) / 3;
SE MEDIA>=7
	IMPRIME "APROVADO COM $MEDIA";
ELSE 
	IMPRIME "FINAL COM $MEDIA";
```


