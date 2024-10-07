# @baruel - figurinhas repetidas

## Motivação

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/baruel/cover.jpg)

Baruel Ruel tem muitas figurinhas do álbum de futebol. Ele estava indo para uma feira de troca de figurinhas quando tropeçou e misturou as figurinhas todas. Ele não sabe mais quais figurinhas estão repetidas e tem pra trocar, nem quais estão faltando pra completar a coleção. Ajude Baruel Ruel com essa tarefa.

\[DS\]

### Entrada

- É composta da quantidade de figurinhas no álbum e da lista de figurinhas de Baruel de forma ORDENADA. A saída deve ser uma linha contendo as figurinhas repetidas e os números da figurinhas que faltam. Se não houver figurinhas repetidas ou não faltar nenhuma escreva 'N'.  

**Ex:**  

- linha 1: quantidade de figurinha total do album(1 a 50)  
- linha 2: quantidade de figurinhas que Baruel possui (1 a 100)  
- linha 3: números das figurinhas de forma ORDENADA.

## Saída

- linha 1: as figuras que ele tem pra trocar ou 'N' se nenhuma  
- linha 2: os números das figuras que faltam ou 'N' se nenhuma

## Exemplos

``` py
>>>>>>>> INSERT
5
8
1 1 1 1 2 2 3 5
======== EXPECT
1 1 1 2
4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
4
1 1 2 2
======== EXPECT
1 2
N
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
2
4 5
======== EXPECT
N
1 2 3
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
5
5
1 1 2 3 3
======== EXPECT
1 3
4 5
<<<<<<<< FINISH
```
