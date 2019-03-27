## @QC0018 #2_sel L2 - Arrendondar
## @qxcode

![qualquer coisa](capa.jpg)  

### MOTIVAÇÃO

Um aluno ficou implorando para o seu professor de FUP arredondar seu 6.9999999999 para 10 porque ele precisa de um 10 para passar de semestre. Seu trabalho é implementar as funções ceil, floor e round para ajudar o professor a calcular as notas dos alunos .

### Ação

Faça as funções round, ceil e floor. Todas recebem um float e retornam um inteiro. Ceil sempre arredonda pra cima, floor sempre arredonda pra baixo. Round arredonda pra baixo se a parte fracionada for menor que 0.5 e arredonda para cima se a parte fracionaria for maior ou igual a 0.5.  

  

Protótipos:  
int round(float num);  
int floor(float num);  
int ceil(float num);

  

### Entrada e Saida

Entrada:

*   Na main leia um char representando a operação (r, f, c) e um float.   
    

Saida  

*   imprima um inteiro de acordo com a operação pedida.  
    

  

### Exemplos:

  
```
>>>>>>>>   
c  
5.5  
========
6
<<<<<<<<


>>>>>>>>
f  
6.99  
========
6
<<<<<<<<


>>>>>>>>
c  
6.99  
========
7
<<<<<<<<


>>>>>>>>
r  
5.5  
========
6
<<<<<<<<


>>>>>>>>
r  
5.4  
========
5
<<<<<<<<


```

<!--- 
>>>>>>>> 
c
0.5
========
1
<<<<<<<<


>>>>>>>>
f
6.7
========
6
<<<<<<<<


>>>>>>>>
f
0.5
========
0
<<<<<<<<


>>>>>>>>
r
7.3
========
7
<<<<<<<<


>>>>>>>>
r
7.5
========
8
<<<<<<<<


>>>>>>>>
f
3.33
========
3
<<<<<<<<


>>>>>>>>
r
9.7
========
10
<<<<<<<<

--->