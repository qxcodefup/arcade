# Fatoração de um número

![_](assets/cover.jpg)

Dado um número inteiro, o objetivo é encontrar seus fatores primos e a quantidade de vezes que cada fator aparece na sua fatoração e montar um vetor com os fatores.

Crie uma função que retorna um mapa onde a chave é o fator primo e o valor é a quantidade de vezes que ele aparece.

```go
def calc_fatores(num int) map[int]int {
    ...
}
```

### Entrada

- Um número inteiro **N**.

### Saída

- Os fatores primos de **N** e a quantidade de vezes que eles aparecem na fatoração. Cada fator e sua quantidade devem ser impressos em uma linha, com o fator seguido pelo número de vezes que aparece.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
8
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2 3
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
40
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2 3
5 1
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
55
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
5 1
11 1
</pre></td></tr>
</table>
<!-- end -->
