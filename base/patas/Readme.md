# L1 - @patas - Chico Bento e Cebolinha

Chico Bento fez uma aposta com o Cebolinha para ver quem conseguia estimar melhor o total de patas que tinha na fazenda.

Leia os animais e some as patas de todos eles.

## Entrada e Saída

- Entrada
  - 1a linha: chute do Chico Bento
  - 2a linha: chute do Cebolinha
  - 3a linha: quantidade de animais
  - Linhas seguintes: letra de cada animal, sendo:
    - v: vaca com quatro patas
    - g: galinha com duas patas
    - c: cavalo com quatro patas
- Saída
  - 1a linha: Somatório das patas dos animais.
  - 2a linha: O nome de quem chegou mais perto ou empate.

## Testes

```txt
#INPUT um animal
4
4
1
c
#OUTPUT
4
empate
#END

#INPUT
7
8
2
g
c
#OUTPUT
6
Chico Bento
#END

#INPUT
15
15
5
c
c
g
v
g
#OUTPUT
16
empate
#END

#INPUT
15
17
5
c
c
g
v
g
#OUTPUT
16
empate
#END

#INPUT
17
15
5
c
c
g
v
g
#OUTPUT
16
empate
#END

#INPUT
18
15
5
c
c
g
v
g
#OUTPUT
16
Cebolinha
#END

#INPUT
15
18
5
c
c
g
v
g
#OUTPUT
16
Chico Bento
#END
```
