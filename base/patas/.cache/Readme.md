# Chico Bento e Cebolinha

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/patas/cover.jpg)

## Contexto

Chico Bento fez uma aposta com o Cebolinha para ver quem conseguia estimar melhor o número total de patas dos animais na fazenda. Eles listaram vários animais, e o objetivo é calcular quantas patas existem ao todo e descobrir quem fez a estimativa mais precisa.

Dado o chute de Chico Bento e Cebolinha, e a lista de animais com suas respectivas patas, escreva um programa que calcule o somatório das patas e determine quem chegou mais perto do valor correto.

### Entrada

- A primeira linha contém um inteiro representando o **chute do Chico Bento**.
- A segunda linha contém um inteiro representando o **chute do Cebolinha**.
- A terceira linha contém um inteiro representando a **quantidade de animais**.
- As próximas linhas contêm uma letra por linha, representando o tipo de animal:
  - **v:** vaca com 4 patas.
  - **g:** galinha com 2 patas.
  - **c:** cavalo com 4 patas.

### Saída

- A primeira linha deve conter o **somatório total das patas dos animais**.
- A segunda linha deve conter o nome de quem chegou mais perto, ou **"empate"**.

### Restrições

- O número de animais será um inteiro positivo.
- Os chutes de Chico Bento e Cebolinha são inteiros positivos.

## Testes

```py
>>>>>>>> INSERT
18
15
5
c
c
g
v
g
======== EXPECT
16
Cebolinha
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
15
18
5
c
c
g
v
g
======== EXPECT
16
Chico Bento
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
17
15
5
c
c
g
v
g
======== EXPECT
16
empate
<<<<<<<< FINISH
```

## Dicas

- **Somatório de patas:** Lembre-se de que vacas e cavalos têm 4 patas, enquanto galinhas têm 2. Crie um somatório iterando pela lista de animais.

- **Diferença absoluta:** Para saber quem está mais próximo, calcule a diferença absoluta entre o chute de cada um e o número real de patas.

