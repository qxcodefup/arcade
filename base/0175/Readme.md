## @0202 #6_str L3 - Separando tokens
## @qxcode

### Motivação

### Ação

Dada uma frase(max 100 char) com palavras(letras minusculas), números, espaço separe os elementos usando os tokens # e ;  
A frase sempre termina em um token ;

### Entrada e Saida

### 

Entrada:

* Uma frase(max 100 char) com palavras(letras minusculas), números, espaço

### Saida:

* n frases sepadas por token.  

### Exemplos  

```

>>>>>>>> 01
mamae me ama#15#1.76;
========
mamae me ama
15
1.76
<<<<<<<<


>>>>>>>> 02
o Brasil# nunca teve uma lona # gigantesca para #ter sido descoberto;
========
o Brasil
 nunca teve uma lona 
 gigantesca para 
ter sido descoberto
<<<<<<<<

```

<!--- 
>>>>>>>> 03
aa 4#1 -f; -2.0;
========
aa 4
1 -f
 -2.0
<<<<<<<<


>>>>>>>> 04
coca zero;1.75#8;U;
========
coca zero
1.75
8
U
<<<<<<<<

--->
