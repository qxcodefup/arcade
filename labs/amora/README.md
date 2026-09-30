# Contar Substrings

![_](assets/cover.jpg)

Amora está apaixonada e quer descobrir quantas vezes em sua cartinha de amor aparecem palavras amorosas. Na cartinha, estava escrito:

"amo o amor que me amou, oh amora que me enamora amolecendo minha alma."

Ela descobriu que o subtexto "amo" aparecia 6 vezes nessa frase.

Ajude Amora a verificar suas cartas. Faça um programa que recebe duas entradas: a primeira linha contendo o texto completo e a segunda, o trecho a ser buscado. Conte e imprima quantas vezes o trecho aparece no texto maior.

### Entrada

- A primeira linha contém uma frase.
- A segunda linha contém um trecho da frase.

### Saída

- Um número inteiro representando o total de ocorrências do trecho na frase.

### Restrições

- A frase terá no máximo **100** caracteres.
- O trecho terá no máximo **20** caracteres.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
amo o amor que me amou, oh amora amortecida
amo
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
5
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
o rato ratificou o carate que rateamos no cerato.
rat
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
5
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
lua de cristal que me faz sonhar menos
me
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2
</pre></td></tr>
</table>
<!-- end -->
