# Leitura de inteiros

![_](assets/cover.jpg)

## Contexto

[Explicação](https://youtu.be/r44oGh6gVU0)

Você não precisa saber o tamanho do vetor quando for ler uma linha com dados. Em Go, `bufio.NewScanner` pode ler a linha inteira, e `strings.Fields` separa os valores por espaços. Converta cada parte para inteiro, armazene os valores e percorra o vetor em ordem inversa.

```go
scanner := bufio.NewScanner(os.Stdin)
if scanner.Scan() {
	linha := scanner.Text()
	campos := strings.Fields(linha)
	valores := make([]int, len(campos))
}
```

Leia todos os inteiros de uma única linha e imprima o vetor na ordem inversa.

### Entrada

- Uma linha com um ou mais números inteiros, separados por espaços.

### Saída

- O vetor impresso ao contrário, entre colchetes e com os elementos separados por espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
19 12 32 11 17 15
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
[ 15 17 11 32 12 19 ]
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
15
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
[ 15 ]
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
15 12
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
[ 12 15 ]
</pre></td></tr>
</table>
<!-- end -->
