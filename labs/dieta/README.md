# Rubens comendo no Brolio

![_](assets/cover.jpg)

## Contexto

Professor Rubens, ao notar que sua rotina alimentar no Broiler estava fazendo com que ele ganhasse peso rapidamente, consultou sua nutricionista, que recomendou uma meta diária de 2200 calorias. Rubens agora deseja monitorar seu consumo calórico nos dias da semana e calcular a média de calorias para verificar se está mantendo o controle adequado de sua dieta.

Dado o número de dias que Rubens registrou seu consumo calórico e as calorias consumidas em cada dia, escreva um programa que calcule a média de calorias consumidas ao longo desses dias.

### Entrada

- A primeira linha contém um inteiro **N** representando o número de dias que ele registrou as calorias.
- Nas próximas **N** linhas, cada linha contém um inteiro **X**, representando o consumo de calórico no dia.

### Saída

- A saída deve ser a média das calorias consumidas ao longo dos dias aferidos, com uma casa decimal.

## Restrições

- O valor de **N** (dias registrados) é um número inteiro positivo.
- Cada valor de calorias consumidas em um dia é um número inteiro não negativo.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
3000
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
3000.0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
3000
4000
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
3500.0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
2000
0
1000
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1000.0
</pre></td></tr>
</table>
<!-- end -->
