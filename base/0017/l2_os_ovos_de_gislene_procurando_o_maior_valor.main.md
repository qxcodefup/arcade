###### @QC0017 #2_sel L2 - Ovos de galinha (Procurando o Maior valor)
## @qxcode
# Ovos de galinha (Procurando o Maior valor)

[![](capa.jpg)](capa.jpg)

### Motivação

Margarida Maria levantou Gislene com carinho. Olhou nos olhos da penosa e disse.

\- 4 ovinhos hoje ein! Pense Gislene, que hoje eu vou comer um super omeletão.

Ainda olhando pra penosa, sentiu dor e remorso. O olhar de Gislene parecia dizer:

\- Você realmente vai comer meus filhinhos?.

Mas a fome era mais forte que o remorso.

Então como que procurando uma solução pro doloroso conflito entre consciência

empática e fome, decidiu comer só o ovo maiorzinho.

### Ação

Leia 4 números e imprima o maior valor.

### Entrada e Saída

Entrada:

* Leia quatro valores inteiros do usuário.

Saída:

* Imprima o maior valor lido.
 
 

### Exemplos

```
>>>>>>>>
3
3
2
2
========
3
<<<<<<<<


>>>>>>>>
5
1
8
3
========
8
<<<<<<<<
```

<!--- 
>>>>>>>>

5
9
15
26
========
26
<<<<<<<<


>>>>>>>>

14
65
84
23
========
84
<<<<<<<<


>>>>>>>>

9
8
3
2
========
9
<<<<<<<<


>>>>>>>>

1
1
1
1
========
1
<<<<<<<<

--->


### Dica

Ao invés de fazer muitos ifs e elses que tal criar uma variável `vmaior` que guarda o primeiro valor.

```
vmaior recebe o primeiro valor lido
se o segundo valor lido for maior que vmaior
    vmaior recebe segundo
se o terceiro valor lido for maior que vmaior
    vmaior recebe terceiro
...

```

Autor: David Sena