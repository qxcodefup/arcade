# Substituições de substrings

![Capa ilustrada da atividade Substituições de substrings](assets/cover.jpg)

## Contexto

O traficante Aldemir liga para seu comparsa Valdemiro por um telefone que estava grampeado. Aldemir fala:

- "preciso de tutu pra comprar uma tutuda porque o Carlos nao me entutu mais".

Valdemiro retruca:

- "nao me axreca aqui, a xrada que voce me xssou xrece que foi xssada na *****".

O que os guardas não sabiam era que "tutu" significava "grana" e todos os "x" eram um "pa".

Inspirado pela necessidade de decifrar a mensagem, sua tarefa é criar uma ferramenta de substituição de texto. O programa deve ler três informações: um texto completo, o trecho que você quer encontrar e o novo trecho usado na substituição. Ao final, exiba o texto com todas as ocorrências não sobrepostas trocadas, da esquerda para a direita.

### Entrada

- A primeira linha contém um texto.
- A segunda linha contém a palavra a ser substituída.
- A terceira linha contém a palavra que irá substituí-la.

### Saída

- Imprima o texto com as substituições realizadas.

## Restrições

- Todos os caracteres da entrada são minúsculos e sem pontuação.
- **Desafio:** Não use nenhuma função pronta de substituição da sua linguagem de programação para resolver o problema.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a aba absorveu
ab
c
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
a ca csorveu
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a almofada esta mofada e molhada
mo
bigode
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
a albigodefada esta bigodefada e bigodelhada
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a bd abda
bd
abc
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
a abc aabca
</pre></td></tr>
</table>
<!-- end -->
