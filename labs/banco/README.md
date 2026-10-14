# Operações bancárias

![_](assets/cover.jpg)

## Contexto

Um sistema de conta bancária simplificado armazena o número da conta, o nome do titular e o saldo em conta corrente. A partir desse saldo inicial, o cliente realiza uma sequência de operações financeiras de depósito e saque.

Crie uma `struct` para representar a conta bancária. Para cada operação:
- Depósito (`D`): soma o valor ao saldo.
- Saque (`S`): deduz o valor do saldo caso haja saldo suficiente; se o valor solicitado for maior que o saldo atual, exibe a mensagem de saldo insuficiente e mantém o saldo inalterado.

Ao final de todas as operações, exiba os dados atualizados da conta.

### Entrada

- Linha 1: número da conta (inteiro), nome do titular (string sem espaços) e saldo inicial (ponto flutuante).
- Linha 2: um inteiro `Q`, a quantidade de operações a serem realizadas.
- Próximas `Q` linhas: tipo da operação (`D` para depósito ou `S` para saque) e o valor da transação (ponto flutuante).

### Saída

- Para cada saque sem saldo suficiente, imprima:
  `Saldo insuficiente`
- Ao final de todas as operações, imprima os dados da conta no formato:
  `Conta: <numero> | Titular: <titular> | Saldo: R$ <saldo>` (com saldo formatado em duas casas decimais).

## Restrições

- `1 <= Q <= 50`
- Todos os valores monetários são números positivos em ponto flutuante.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
101 Maria 100.00
2
D 50.00
S 30.00
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Conta: 101 | Titular: Maria | Saldo: R$ 120.00
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
102 Joao 50.00
2
S 80.00
S 20.00
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Saldo insuficiente
Conta: 102 | Titular: Joao | Saldo: R$ 30.00
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
103 Ana 0.00
3
D 100.00
D 50.00
S 150.00
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Conta: 103 | Titular: Ana | Saldo: R$ 0.00
</pre></td></tr>
</table>
<!-- end -->
