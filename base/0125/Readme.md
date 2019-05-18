## @0073 #6_str L2 - Numerão Divisível por 11
## @qxcode

### Motivação

Algumas linguagens não suportam números muito grandes. O tipo inteiro (int), por exemplo, suporta 4294967295 números diferentes.   
Pensando nisso, uma alternativa é a representação de números grandes (Big numbers) é o uso de Strings.   
Mas como realizar operações com estes números?

### Ação

Comece com uma operação simples, faça uma função que receba um número gigante com até 20 casas e retorne true se ele é divisível por 11.  
Existem formas para se determinar essa divisibilidade. Pesquise um pouco.

[http://www.escolakids.com/divisibilidade-por-11.htm](http://www.escolakids.com/divisibilidade-por-11.htm)  

### Entrada e Saída

- Entrada:

  *   Um "número" com até 20 dígitos.

- Saída:

  *   "sim" se o numero for divisível por 11 e "nao" caso contrário.  
    

### Exemplos  
```
>>>>>>>>
11
========
sim
<<<<<<<<

>>>>>>>>
110
========
sim
<<<<<<<<
    
>>>>>>>>
123
========
nao
<<<<<<<<
```

<!---
>>>>>>>> 01
1
========
nao
<<<<<<<<

>>>>>>>> 02
110
========
sim
<<<<<<<<

>>>>>>>> 03
121
========
sim
<<<<<<<<

>>>>>>>> 04
120
========
nao
<<<<<<<<

>>>>>>>> 05
12100000000
========
sim
<<<<<<<<

>>>>>>>> 06
12109020000
========
sim
<<<<<<<<
--->