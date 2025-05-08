# Jokenpo das tartarugas

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/jokenpo/cover.jpg)

## Contexto

Você está tentando ensinar sua tartaruga Rufus a jogar pedra, papel e tesoura. Quer proporcionar algo divertido para ela durante os longos banhos de sol no açude. Mas para isso, você precisará de um programa que retorne o resultado do jogo de "Jokenpô" para resolver as disputas de Rufus com seus amigos.

Implemente um programa que receba as jogadas de dois jogadores e determine quem ganhou a partida de "pedra, papel e tesoura", ou se houve empate. As opções de jogada são: R (pedra), P (papel), e S (tesoura). Lembrado que pedra vence tesoura, tesoura vence papel, e papel vence pedra.

### Entrada

- A entrada consiste em duas linhas, cada uma contendo um caractere representando a escolha de cada jogador:
  - O primeiro caractere representa a escolha do Jogador 1.
  - O segundo caractere representa a escolha do Jogador 2.

### Saída

- Imprima "jog1" se o primeiro jogador ganhar,
- Imprima "jog2" se o segundo jogador ganhar,
- Imprima "empate" se houver empate.

## Testes

```py
>>>>>>>> INSERT 01
R
P
======== EXPECT
jog2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
P
P
======== EXPECT
empate
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
S
P
======== EXPECT
jog1
<<<<<<<< FINISH
```
