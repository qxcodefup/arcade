# Calipso e Jack Sparrow - Alternar Case

![Capa ilustrada da atividade Calipso e Jack Sparrow - Alternar Case](assets/cover.jpg)

## Contexto

Tia Dalma (Calipso) e Jack Sparrow estavam conversando. Jack, depois da terceira garrafa de rum, diz:

- Ja QuE eStAmOs Só NóS nEsSe BaRcO, SeRá QuE rOlA uM bEiJiNhO?
- Se você conseguir passar um dia sem beber, eu penso nisso.
- eU nAo QuEeRiA mEsMo.

Como você deve ter notado, Jack Sparrow fala de uma forma muito peculiar. Sua tarefa é criar um programa que imite esse estilo. Dada uma frase, comece pelo case da primeira letra e alterne o case das letras seguintes. Espaços, números e pontuação são preservados e não afetam a alternância.

### Entrada

- A primeira linha contém um número inteiro **N**, a quantidade de casos de teste.
- As **N** linhas seguintes contêm um texto para cada caso de teste.

### Saída

- Para cada caso de teste, imprima o texto com o case das letras alternado, começando pelo case da primeira letra da frase original.

## Restrições

- O texto de cada linha terá no máximo **100** caracteres.
- A alternância de case deve ignorar os espaços, mas eles devem ser mantidos na saída.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
a batata
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
a BaTaTa
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
AAAAAAAA
bBbBbBbB
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
AaAaAaAa
bBbBbBbB
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
Morra Prea
BigODE Aparado
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
MoRrA pReA
BiGoDe ApArAdO
</pre></td></tr>
</table>
<!-- end -->
