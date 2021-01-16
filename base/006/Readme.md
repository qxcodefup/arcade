## #operações L3 - Zerinho ou um americano - Decifrando a fórmula

![](__capa.jpg)

## Motivação

- Chico: Time de fora é meu.
- Alberto: Eu cheguei primeiro.
- Chico: Minhas ventas.
- Francisco e Elias: Nós tamo aqui bando de cego, tamo esperando também.
- Ruan: Bora bando de lesado, vagou aqui, qual dos 4 entra no jogo?
- Chico: Bora rápido, zerim ou 1.
- Alberto: Ei moi de chifre, zerim ou um só funciona direito com com 3, bora logo o americano.

No zerim ou um americano cada participante coloca quantos dedos quiser na roda. Um dos participantes soma os dedos e aponta para cada participante enquanto conta. Ganha aquele cujo dedo apontar no último número.

Suponha que existem 4 jogadores. O contador, o jogador 1, aponta pra cima e diz "zero", e então aponta pra si mesmo e diz "um", aponta pro jogador 2 e diz "dois", pro jogador 3 e diz "três", pro jogador 4 e diz "quatro", volta a apontar pra si e diz "cinco" e assim até que os números acabem.

### Entrada
- Os números dos 4 jogadores, um por linha.

### Saída
- "nenhum" se a soma deu 0, jog1, jog2, jog3 ou jog4.

## Exemplos

```
>>>>>>>>
0
0
0
0
========
nenhum
<<<<<<<<

>>>>>>>>
0
0
2
0
========
jog2
<<<<<<<<

>>>>>>>>
2
2
2
2
========
jog4
<<<<<<<<
```

## Dicas

Tente primeiro verificar se a soma é igual a 0, se for ninguém ganhou, caso contrário haverá um vencedor. Se usar o mod para tirar o resto da divisão por a quantidade de jogadores, você terá um número entre 0 e 3, esses valores representam o vencedor. Lembre-se que ao tirar o resto da divisão de um múltiplo de 4, o resto é 0, logo o valor 0 representa o jogador 4. 


