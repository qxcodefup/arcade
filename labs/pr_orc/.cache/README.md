# Batalha Orc: todos contra todos

## Objetivo

Simule uma arena com dez Orcs em que cada sobrevivente ataca um adversário por rodada. A atividade progride da luta básica para a inclusão de nomes e atributos de reação.

## Regras

### Nível Aprendiz

- Crie dez Orcs identificados por uma letra, cada um com força e vida sorteadas de `1` a `10`.
- Em cada rodada, cada Orc ataca um adversário escolhido aleatoriamente, sem poder escolher a si mesmo.
- O alvo revida imediatamente com metade da própria força, arredondada para baixo.
- Ao fim da rodada, remova os Orcs com vida menor ou igual a zero.
- Repita as rodadas até restar no máximo um Orc. Se não restar nenhum, não há vencedor.

### Nível Experiente

Evolua o mesmo jogo com estas regras:

- Os nomes têm quatro letras, começam com maiúscula e têm vogais nas posições pares (segunda e quarta letras). Exemplos: `Cona`, `Bifu`, `Gori` e `Hijo`.
- Cada Orc também tem `revidar` e `raiva`. O valor sorteado de `revidar` é seu máximo por rodada; `raiva` define o aumento permanente de força.
- Ao ser atacado, um Orc com ao menos uma reação disponível revida e gasta uma reação. Sem reações, aumenta sua força em `raiva`.
- No início de cada rodada, restaure as reações ao máximo.
- Mantenha a luta todos contra todos e as condições de encerramento do nível Aprendiz.

O enunciado original não define faixas para força, vida, reações ou raiva, nem como arredondar metade da força. A solução de referência sorteia força e vida entre `1` e `10`, reações máximas entre `0` e `3` e raiva entre `1` e `3`; arredonda a metade para baixo. Essas faixas são escolhas da referência, não limites obrigatórios para outras soluções.

## Interação

Na pasta da atividade, execute `tko run . -l go`. O programa mostra os atributos dos Orcs, os ataques e o vencedor, se houver.

## Exemplos de execução

Os atributos e os alvos são aleatórios; portanto, cada execução pode produzir uma sequência diferente. Ao concluir, mostre uma mensagem equivalente a:

```text
Vencedor: Gori
```

Se todos os Orcs forem eliminados na mesma rodada, mostre:

```text
Não houve vencedor.
```

## Etapas

1. Represente um Orc com identificador, força e vida; crie os dez participantes.
2. Implemente um ataque e a reação do alvo.
3. Percorra os participantes em rodadas, removendo os derrotados ao fim de cada uma.
4. Acrescente nomes, reações e raiva como evolução do modelo.
5. Repita até haver um vencedor ou nenhum sobrevivente.

## Critérios de conclusão

- Nenhum Orc escolhe a si mesmo como alvo.
- Um ataque reduz a vida do alvo, e a reação reduz a vida do agressor conforme as regras.
- Orcs derrotados são removidos ao fim da rodada.
- No nível Experiente, reações são restauradas por rodada e a raiva aumenta a força permanentemente quando não há reação disponível.
- A simulação informa corretamente um vencedor ou a ausência dele.
