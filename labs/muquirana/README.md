# Busca máximo por critério

![_](assets/cover.jpg)

## Contexto

Um professor muquirana quer descobrir qual o aluno que tirou a maior nota. Para isso ele possui uma lista com as notas dos alunos. Por economia, ele codificou as informações do aluno e da nota em um único número. Cada número tem 6 dígitos. Os primeiros dois representam o número do aluno na
chamada e os outros 4, as notas da quatro provas realizadas. Os números de id não se repetem e os valores de nota são de 0 a 9. Esse professor pão duro nunca dá nota 10.

Por exemplo: 026897 quer dizer : aluno 02, notas 6, 8, 9 e 7.

Faça um programa para imprimir o id do aluno com a maior nota.

### Entrada

* 1a linha: A quantidade de elementos no vetor(1 a 50).
* 2a linha: O vetor com os ids e notas dos alunos.

### Saída

* O id do aluno com melhor média. Se vários alunos ficarem com a mesma média máxima. Imprima o id de maior número.

## Exemplos
<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
034444 024444
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
03
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
014444 024444
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
02
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
6
028888 047989 059999 072213 199989 019999
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
05
</pre></td></tr>
</table>
<!-- end -->
