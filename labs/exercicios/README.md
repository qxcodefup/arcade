# Diário fitness

![_](assets/cover.jpg)

## Contexto

Um aplicativo de saúde registra os treinos realizados ao longo do dia para monitorar o tempo total e as calorias gastas, comparando o resultado com a meta diária estabelecida pelo usuário.

Cada modalidade possui uma taxa específica de queima calórica por minuto:
- `corrida`: 10 kcal/min
- `natacao`: 9 kcal/min
- `ciclismo`: 8 kcal/min
- `musculacao`: 5 kcal/min
- `caminhada`: 4 kcal/min

Crie uma `struct` para armazenar cada treino (modalidade e duração em minutos). Calcule o tempo total exercitado e o total de calorias queimadas, verificando se a meta diária foi alcançada.

### Entrada

- A primeira linha contém dois números inteiros: `N` (quantidade de treinos realizados) e `meta` (meta de calorias do dia).
- As próximas `N` linhas contêm a modalidade (string) e a duração em minutos (inteiro positivo).

### Saída

- Linha 1: `Tempo total: <total_min> min`
- Linha 2: `Calorias queimadas: <total_cal> kcal`
- Linha 3: `Meta atingida! Parabens!` se `total_cal >= meta`, ou `Faltam <faltam> kcal para atingir a meta` caso contrário.

## Restrições

- `1 <= N <= 50`
- A duração de cada treino e a meta são números inteiros positivos.
- A modalidade informada sempre será uma das cinco válidas.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1 250
corrida 30
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Tempo total: 30 min
Calorias queimadas: 300 kcal
Meta atingida! Parabens!
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1 400
corrida 30
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Tempo total: 30 min
Calorias queimadas: 300 kcal
Faltam 100 kcal para atingir a meta
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2 300
natacao 20
caminhada 30
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Tempo total: 50 min
Calorias queimadas: 300 kcal
Meta atingida! Parabens!
</pre></td></tr>
</table>
<!-- end -->
