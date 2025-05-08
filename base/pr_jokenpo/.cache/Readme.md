# Jokenpô - Melhor de 5

![cover](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pr_jokenpo/cover.jpg)

Este trabalho tem como objetivo que você desenvolva habilidades de
desenvolvimento de jogos, como contagem de pontos, jogadas aleatórias,
rounds e início e fim do game.

Para realizar este trabalho você precisará lidar com entrada e saída de
informações e com geração de dados aleatórios.

O jogo Jokenpô - ou Pedra, Papel e Tesoura - é jogado por dois jogadores
em que ambos escolhem, aleatoriamente dentre as três opções, a sua
jogada e as exibem ao mesmo tempo vencendo aquele que a opção escolhida
ganha a do adversário, ou empatando quando ambos escolhem a mesma opção.
As regras definem as vitórias do seguinte modo:

1. **Pedra** ganha da **tesoura**

2. **Tesoura** ganha do **papel**

3. **Papel** ganha da **pedra**

O jogo deverá ser entre um jogador e o computador, em que este deverá
fazer suas jogadas aleatoriamente após as do jogador, que então serão
comparadas, informado quem venceu e incrementado o número de vitórias do
atual vitorioso. Cada jogo será dividido em 5 rounds, que deverá ser
exibido em qual estará no momento e ao fim o jogo deverá perguntar se o
jogador deseja jogar novamente ou sair, sempre exibindo o número de
vitórias de cada participante - jogador e computador.

## Exemplo

Exemplo em execução. Os símbolos `>>` significam a entrada de dados do
usuário.

    # JOKENPÔ #
    Você: 0 | PC: 0
    Round: 1 / 5

    1 - Pedra
    2 - Papel
    3 - Tesoura
    >> 1
    Você jogou PEDRA e o PC PAPEL.
    O PC ganhou!

    # JOKENPÔ #
    Você: 0 | PC: 1
    Round: 2 / 5

    1 - Pedra
    2 - Papel
    3 - Tesoura
    >> 3
    Você jogou TESOURA e o PC PAPEL.
    Você ganhou!

    # JOKENPÔ #
    Você: 1 | PC: 1
    Round: 3 / 5

    1 - Pedra
    2 - Papel
    3 - Tesoura
    >> 2
    Você jogou PAPEL e o PC PAPEL.
    Ninguém ganhou!

    # JOKENPÔ #
    Você 1 | PC: 1
    Round: 4 / 5

    1 - Pedra
    2 - Papel
    3 - Tesoura
    >>

    .
    .
    .

    # JOKENPÔ #
    Você: 2 | PC: 1
    Round: 5 / 5

    1 - Pedra
    2 - Papel
    3 - Tesoura
    >> 3
    Você jogou TESOURA e o PC PAPEL.
    Você ganhou!

    PLACAR FINAL:
    Você: 3 | PC: 1

    JOGAR NOVAMENTE?
    1 - Sim
    0 - Sair

## Dicas

Você pode fazer o computador gerar números entre 0 e 2 e utilizar esses números como as jogadas.

- 0: pedra
- 1: papel
- 2: tesoura

## Jokenpô V2

### Pedra, Papel, Tesoura, Lagarto e Spock

![spock](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pr_jokenpo/spock.jpg)

Nesta segunda versão você deverá implementar o modo do jogo mais recente
em que duas novas opções foram adicionadas, **Lagarto e Spock**,
conforme as regras clássicas e as adicionais:

1. **Tesoura** ganha do **papel**
2. **Papel** ganha da **pedra**
3. **Pedra** ganha do **lagarto**
4. **Lagarto** ganha do **Spock**
5. **Spock** ganha da **tesoura**
6. **Tesoura** ganha do **lagarto**
7. **Lagarto** ganha do **papel**
8. **Papel** ganha do **Spock**
9. **Spock** ganha da **pedra**
10. **Pedra** ganha da **tesoura**
