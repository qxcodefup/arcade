## @0179 #05_str L3 - Prof Muquirana - Busca máximo por critério
## @qxcode

![](capa.jpg)

### Motivação

Um professor muquirana quer descobrir qual o aluno que tirou a maior nota.  
Ele prometeu um piper de premio para o melhor aluno.

Para isso ele possui uma lista com as notas dos alunos. Por economia ele codificou
as informações do aluno e da nota em um único número.

Cada número tem 6 dígitos. Os primeiros dois representam o número do aluno na  
chamada e os outros 4, as notas da quatro provas realizadas. Os números de id  
não se repetem e os valores de nota são de 0 a 9. Esse professor pão duro nunca  
dá nota 10.

Por exemplo: 026897 quer dizer : aluno 02, notas 6, 8, 9 e 7.

### Ação

faça um programa para imprimir o id do aluno com a maior nota.  

### Entrada e Saida

### 

Entrada:

*   1a linha: A quantidade de elementos no vetor(1 a 50).
*   2a linha: O vetor com os ids e notas dos alunos.

Saida:

*   O id do aluno com melhor média. Se vários alunos ficarem com a mesma média  
    máxima. Imprima o id de maior número.

### Exemplos

### 

```
>>>>>>>>
2
034444 024444
========
03
<<<<<<<<

>>>>>>>>
2
014444 024444
========
02
<<<<<<<<

>>>>>>>>
6
028888 047989 059999 072213 199989 019999
========
05
<<<<<<<<

>>>>>>>>
2
028888 047989
========
04
<<<<<<<<

>>>>>>>>
4
028888 047989 072213 199989
========
19
<<<<<<<<

>>>>>>>>
5
028888 047989 059999 072213 199989
========
5
<<<<<<<<
```

<!---
>>>>>>>> 01
2
028888 047989
========
04
<<<<<<<<

>>>>>>>> 02
4
028888 047989 072213 199989
========
19
<<<<<<<<

>>>>>>>> 03
5
028888 047989 059999 072213 199989
========
05
<<<<<<<<

>>>>>>>> 04
6
028888 047989 059999 072213 199989 019999
========
05
<<<<<<<<

>>>>>>>> 05
2
014444 024444
========
02
<<<<<<<<

>>>>>>>> 06
2
034444 024444
========
03
<<<<<<<<
--->