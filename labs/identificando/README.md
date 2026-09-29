# Identificando tipos

![_](assets/cover.jpg)

Sua tarefa é criar um programa que analise uma frase e identifique o tipo de cada "palavra" ou elemento contido nela. Você deve classificar cada elemento como **str**, **int** ou **float**, seguindo um conjunto de regras específicas.

Regras de Classificação:

- **str:** Se o elemento contiver pelo menos uma letra.
- **float:** Se o elemento for um número e contiver um ponto (`.`).
- **int:** Se o elemento for um número e não contiver um ponto.
- Números (int e float) podem ser negativos.

### Entrada

- Uma frase com palavras (letras minúsculas), números, espaços e pontos.

### Saída

- Uma linha contendo o tipo de cada elemento da frase ("str", "float" ou "int"), separado por espaços.

### Restrições

- A frase terá no máximo **100** caracteres.
- Cada palavra/elemento terá no máximo **10** caracteres.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>                                   Entrada                                   </code>
</th><th><code>                         Saída                         </code>
</th></tr><tr><td valign="top"><pre>
tenho 15 4nos 1.75 altur4 -15 conto p0rr4 -4.04
</pre></td><td valign="top"><pre>
str int str float str int str str float
</pre></td></tr></table>

<table><tr><th><code>                                   Entrada                                   </code>
</th><th><code>                         Saída                         </code>
</th></tr><tr><td valign="top"><pre>
a proxima eleição presidencial no Brasil ocorrerá em 2 de outubro de 2018
</pre></td><td valign="top"><pre>
str str str str str str str str int str str str int
</pre></td></tr></table>

<table><tr><th><code>                                   Entrada                                   </code>
</th><th><code>                         Saída                         </code>
</th></tr><tr><td valign="top"><pre>
aa 1 -2.0
</pre></td><td valign="top"><pre>
str int float
</pre></td></tr></table>
<!-- end -->
