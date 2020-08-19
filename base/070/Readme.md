## #vetores L3 - Cabeças vão rolar


![](__capa.jpg)

## Motivação

Um grupo de N amigos decidem brincar de um esporte sangrento. O vencedor leva a princesa bonita pra sua casa.  
Eles ficam em uma fila circular e escrevem em suas camisas números sequenciais onde o primeiro usa o número 1 e o último o número N.  
A mocinha vendada então diz um número entre 1 e N.  
O número escolhido pega a espada e decapita o companheiro da sua frente. Depois passa a espada para o próximo vivo que decapita o colega da frente.  
  
Assim continue até que só sobre um.  
Highlander Mode On!  
  
Dica: Não faça isso em casa.  
  
## Ação

Remova elementos intercaladamente em uma lista circular.  

**\*\*Simulação\*\***
  
Cinco pessoas e a princesa escolhe o 3.  
  
    1 2 3 4 5  : O 3 mata o 4 e a espada vai pro 5.  
    1 2 3 5     : O 5 mata o 1 e a espada vai pro 2.  
    2 3 5        : O 2 mata o 3 e a espada vai pro 5.  
    2 5           : O 5 mata o 2.  
    5  
  
Sobra o cinco.  
Dica: Não faça isso em casa.

### Entrada

*   O número N de participantes.  
*   O número X do participante que inicia o jogo.  

### Saída

*   O número do jogador vencedor.

## Exemplos

```
>>>>>>>>
5 
3
========
5
<<<<<<<<

>>>>>>>>
6
6
========
4
<<<<<<<<
```

## Ajuda

### Dica
- Inicialmente, vamos atribuir o valor `1` a todas as posições do vetor `v1`, e a medida que os jogadores forem "morrendo", seram adicionadas as suas posições o valor `0`.
  
- Será necessário utilizar o operador `%` (lê-se mod), que retorna o resto da divisão de um número por outro. Por exemplo:
```
5 % 2 retorna 3, pois o resto da divisão de 5 por 2 é igual a 3.
```

- O uso do operador `%` é necessário pois se trata de uma fila circular, e esse operador nos ajuda quando chegarmos no fim da fila. Por exemplo:
```
Tamanho do vetor = 5

[ 1 0 0 1 0 ]

Supondo que acabamos de "matar" o elemento da 5ª posição, devemos procurar então o próximo elemento vivo para que esse receba a espada. Esse próximo elemento está na primeira posição do vetor, como vamos fazer isso ? 

Primeiramente, vamos incrementar uma unidade no valor do participante já que ele está procurando o próximo elemento vivo:

    participante = participante + 1, ou seja, participante = 6

Após esse passo percebemos que o número do participante é maior que o tamanho do vetor. Para fazer com que o número do participante volte a 1ª posição, fazemos:

    participante = participante % tamanho do vetor, ou seja, 6 % 5 retorna 1

Após essse passo, o número do participante é igual a 1.
```

### Pseudocódigo
```
Ler quantidade_partipante
Ler participante

//todos participantes comecam vivos
Atribuir o valor a todos as posições do vetor v1

//repete o laco n-1 vezes, que eh o numero de pessoas a morrer
Para (auxiliar < quantidade_participante - 1) faca: 

    //mata a vitima
    v1[participante] = 0 

    //busca a quem entregar a espada
    Enquanto (v1[participante] == 0): 
        participante = participante + 1
        participante = participante % quantidade_participante

    
    //busca a proxima vitima
    participante = participante + 1
    participante = participante % quantidade_participante
    Enquanto (v1[participante] == 0):
        participante = participante + 1
        participante = participante % quantidade_participante


Mostrar a posição do vetor que é diferente de 0
```