## @031 #02_sel L2 - Fiquei de final
## @qxcode

![Enzo de recuperação](capa.jpg)

## Descrição
Use o pseudocódigo a seguir para implementar o algoritmo de calcular nota e decidir se você ficou aprovado, reprovado, aprovado na final ou reprovado na final.

```
leia a primeira nota
leia a segunda nota
media = some as notas e divida por 2
se media maior igual a 7
  aprovado
se menor que 4 reprovado
  reprovado
se entre 4 e 7
  leia a final
  media\_final = (media\_parcial + final)/2
  se media\_final >= 5
      aprovado
  senao
      reprovado
```

### Entrada

* 3 notas: nota1, nota2 e nota\_final, uma por linha
 
### Saída
- aprovado, reprovado, aprovado na final ou reprovado na final  

Obs: descarte a nota da final se ela não for necessária.

## Exemplo

```
>>>>>>>>
8
8
9
========
aprovado
<<<<<<<<

>>>>>>>>
8
2
9
========
aprovado na final
<<<<<<<<

>>>>>>>>
4
2
9
========
reprovado
<<<<<<<<

>>>>>>>>
4
8
3
========
reprovado na final
<<<<<<<<
```

#

<!---
>>>>>>>>
4
8
3.99
========
reprovado na final
<<<<<<<<
--->