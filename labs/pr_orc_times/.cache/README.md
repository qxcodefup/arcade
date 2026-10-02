# Batalha Orc: combate entre equipes

## Objetivo

Simule uma batalha entre duas equipes de quatro Orcs. Cada equipe ataca alternadamente até que uma delas não tenha sobreviventes.

## Regras

- Crie duas equipes, A e B, com quatro Orcs cada. Cada Orc recebe um nome com quatro letras, iniciado em maiúscula, com vogais na segunda e na quarta posições.
- Cada Orc tem força, vida, reações (`revidar`) e aumento de força (`raiva`).
- A equipe A começa. Em uma rodada, cada equipe realiza um ataque, alternando A e B, até cada Orc vivo ter tido sua vez. O atacante escolhe um Orc vivo da equipe adversária.
- O alvo com ao menos uma reação disponível revida imediatamente com metade da força atual, arredondada para baixo, e gasta uma reação. Sem reações, aumenta sua força em `raiva`.
- A cada rodada, restaure as reações de cada Orc ao valor máximo.
- Um Orc sai da batalha assim que sua vida fica negativa. Orcs com vida igual a zero continuam na batalha.
- Repita as rodadas até uma equipe não ter mais Orcs vivos. A outra equipe vence.

O enunciado original não define faixas para os atributos nem como escolher o alvo. A solução de referência sorteia força e vida entre `1` e `10`, reações máximas entre `0` e `3`, raiva entre `1` e `3` e um alvo adversário aleatório; arredonda a metade da força para baixo. São escolhas da referência, não limites obrigatórios para outras soluções.

## Interação

Na pasta da atividade, execute `tko run . -l go`. O programa mostra os ataques e informa a equipe vencedora.

## Exemplos de execução

Os nomes, atributos e alvos são sorteados, então cada partida pode variar. Ao concluir, mostre uma mensagem equivalente a:

```text
Equipe vencedora: A
```

## Etapas

1. Crie os Orcs e distribua quatro em cada equipe.
2. Implemente um ataque entre equipes e a reação do alvo.
3. Alterne as equipes e dê uma vez a cada Orc vivo por rodada.
4. Remova imediatamente quem ficar com vida negativa.
5. Repita até uma equipe ser eliminada e informe a vencedora.

## Critérios de conclusão

- Cada equipe começa com quatro Orcs e a equipe A ataca primeiro.
- Orcs atacam apenas adversários vivos e nunca o próprio time.
- As reações são restauradas no começo de cada rodada; a raiva aumenta a força quando não há reação disponível.
- Orcs com vida negativa saem imediatamente, e o combate termina quando uma equipe é eliminada.
