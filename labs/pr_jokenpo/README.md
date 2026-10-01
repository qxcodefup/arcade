# Jokenpô - Melhor de 5

![Capa da atividade Jokenpô](assets/cover.jpg)

## Objetivo

Implemente um jogo de Jokenpô entre uma pessoa e o computador. A partida termina quando um deles vence três rodadas.

## Regras

- Em cada rodada, a pessoa escolhe pedra, papel ou tesoura; o computador escolhe uma opção aleatoriamente.
- Pedra vence tesoura, tesoura vence papel e papel vence pedra.
- Se as escolhas forem iguais, a rodada empata e ninguém pontua.
- A partida termina assim que a pessoa ou o computador alcançar três pontos. Como empates não pontuam, podem ser necessárias mais de cinco rodadas.
- Ao final, mostre o placar e pergunte se a pessoa quer jogar novamente.
- Uma nova partida começa com o placar zerado.
- Se a pessoa informar uma opção inválida, mostre `Opção inválida.` e peça a entrada novamente.

## Interação

Em cada rodada, mostre o placar e as opções numeradas:

- `1`: Pedra
- `2`: Papel
- `3`: Tesoura

Leia a opção da pessoa, faça a escolha aleatória do computador e mostre as duas jogadas e o resultado da rodada. Depois da partida, ofereça `1` para jogar novamente e `0` para sair. Se a resposta não for uma dessas opções, mostre `Opção inválida.` e pergunte novamente.

## Exemplos de execução

A pessoa escolhe papel e o computador escolhe pedra:

```text
# JOKENPÔ #
Você: 0 | PC: 0
Round: 1

1 - Pedra
2 - Papel
3 - Tesoura
>> 2
Você jogou PAPEL e o PC PEDRA.
Você ganhou!
```

Uma partida pode continuar até um dos participantes chegar a três pontos. Ao final:

```text
PLACAR FINAL:
Você: 3 | PC: 1

JOGAR NOVAMENTE?
1 - Sim
0 - Sair
>> 0
```

## Etapas

1. Mostre as opções, leia a jogada da pessoa e repita a leitura até receber uma opção válida.
2. Sorteie a jogada do computador.
3. Compare as jogadas, informe o resultado e atualize o placar quando houver vencedor.
4. Repita as rodadas até alguém alcançar três pontos.
5. Mostre o placar final e permita iniciar outra partida.

## Critérios de conclusão

- Cada uma das três opções pode ser escolhida pela pessoa e pelo computador.
- As três regras de vitória e o empate são calculados corretamente.
- Empates não alteram o placar.
- A partida termina ao chegar a três pontos e o placar é exibido.
- Entradas inválidas são rejeitadas e solicitadas novamente.
- A opção de jogar novamente inicia uma partida com o placar zerado.
