# Número palíndromo

![_](assets/cover.jpg)

A bordo da Enterprise, Spok recebeu a missão de explorar novos planetas. Cada planeta tem um identificador (ID) único. Como o combustível da nave está acabando, Spok decidiu explorar apenas os planetas que possuem um ID palíndromo.

Sua tarefa é criar uma função que recebe um inteiro referente ao ID de um planeta e retorna 1 (true) se o ID for palíndromo e 0 (false) caso contrário.

### Estratégias

- Crie uma função recursiva que recebe o número e retorna ele invertido

**Dica:** Vá consumindo o número utilizando operadores de módulo e divisão por 10 enquanto monta o número invertido.

### Entrada

- Um número inteiro que indica o ID.

### Saída

- O número 1 se o ID for palíndromo e 0 caso contrário.

### Restrições

- O ID do planeta será um número inteiro positivo que cabe em uma variável do tipo `int`.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
121
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
123
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
122
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0
</pre></td></tr>
</table>
<!-- end -->
