# Torres de Hanoi

![Ilustração das três torres de Hanoi](assets/cover.jpg)

## Contexto

O objetivo do jogo das torres de Hanoi é mover todos os discos da torre inicial para a torre final, sem colocar um disco maior sobre um disco menor. Inicialmente, as torres auxiliar e final estão vazias; a torre auxiliar pode ser usada durante a solução.

Para resolver o caso geral com `N` discos, mova recursivamente `N-1` discos para a torre auxiliar, mova o disco restante para a torre final e, por fim, mova recursivamente os `N-1` discos da torre auxiliar para a torre final.

### Entrada

- Um número inteiro indicando quantos discos devem ser movidos da torre `A` para a torre `C`.

### Saída

- A sequência de movimentos, um por linha, no formato `origem -> destino`.

## Exemplos

```text
      ++                  ++                 ++
      ||                  ||                 ||
      ||                  ||                 ||
      ||                  ||                 ||
      ||                  ||                 ||
    +-++-+                ||                 ||
    |    |                ||                 ||
  +-+----+-+              ||                 ||
  |        |              ||                 ||
+-+--------+-+            ||                 ||
|            |            ||                 ||
+------------+            ++                 ++
Torre inicial        Torre auxiliar      Torre final
      A                   B                  C

Solução para três discos:
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
```

Você pode simular as jogadas neste [jogo de Hanoi](http://www.dynamicdrive.com/dynamicindex12/towerhanoi.htm).

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
5
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
A -> B
C -> B
C -> A
B -> A
C -> B
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
B -> A
C -> B
C -> A
B -> A
B -> C
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
A -> C
</pre></td></tr>
</table>
<!-- end -->

## Orientações

Implemente a solução como uma função recursiva que recebe a quantidade de discos e os rótulos das torres de origem, auxiliar e destino. O caso base ocorre quando não há discos a mover.
