# Aniquilando Ultrons V3

![Capa ilustrada da atividade Aniquilando Ultrons V3](assets/cover.jpg)

## Contexto

A batalha contra o exército de disfarces do Ultron continua. Desta vez, em vez de analisar indivíduos um a um, você recebeu um panorama completo do ambiente: o código genético do Ultron e uma lista de todos os códigos das pessoas presentes.

Sua missão é mapear o ambiente, identificando cada indivíduo. Para cada código na lista, você deve determinar se é uma **"pessoa"**, um **"ultron"** ou um potencial **"chefe"**, com base na porcentagem de letras que correspondem ao código do Ultron.

- **Chefe:** 100% de correspondência.
- **Ultron:** Mais de 50% de correspondência.
- **Pessoa:** 50% ou menos de correspondência.

Por exemplo, com o código Ultron `ultron` e o ambiente `ruame ronuai Lion uuuaaaa ronia kkk luno`, a saída esperada é `pessoa ultron ultron pessoa ultron pessoa chefe`. `Lion` tem três de suas quatro letras no código, correspondendo a `75%`, então sua classificação é `ultron`.

### Entrada

- **Linha 1:** O código do Ultron.
- **Linha 2:** Uma linha contendo vários códigos de pessoas, separados por espaços.

### Saída

- Uma única linha contendo a classificação ("pessoa", "ultron" ou "chefe") para cada código de pessoa, na ordem em que aparecem, separadas por espaços.

## Restrições

- O código do Ultron terá entre 2 e 9 letras.
- A linha do ambiente terá no máximo 500 caracteres.
- Cada código de pessoa terá no máximo 20 caracteres.
- A verificação não diferencia maiúsculas de minúsculas.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
aeiou  
arta euio auiaoauio riu pegasus
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
pessoa chefe chefe ultron pessoa
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
aer
arta euio auiaoauio riu pegasus rea
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
ultron pessoa pessoa pessoa pessoa chefe
</pre></td></tr>
</table>
<!-- end -->
