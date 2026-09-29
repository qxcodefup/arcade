# Contando ocorrência na cartela

![_](assets/cover.jpg)

Sua avó, uma frequentadora assídua do bingo dos idosos, estava tendo dificuldades para saber quantos números estava acertando por partida. Sendo o bom neto que você é, decidiu criar um programa para ajudá-la.

Sua tarefa é, dado um vetor de 6 números inteiros (os números sorteados), verificar quantos deles estão presentes na cartela de bingo fixa da sua avó, que é a matriz 4x4 abaixo:

```py
 1  9 27 23  
34 20 37 47  
30 87 55 69  
13 60 99 66
```

### Entrada

- Uma linha contendo 6 números inteiros, separados por espaços.

### Saída

- Um número inteiro representando a quantidade de números da entrada que se repetem na matriz 4x4.

### Restrições

- A entrada consistirá em 6 números inteiros.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>       Entrada       </code>
</th><th><code>Saída</code>
</th></tr><tr><td valign="top"><pre>
55 30 2 974 79 23
</pre></td><td valign="top"><pre>
3
</pre></td></tr></table>

<table><tr><th><code>       Entrada       </code>
</th><th><code>Saída</code>
</th></tr><tr><td valign="top"><pre>
2 7 88 31 19 40
</pre></td><td valign="top"><pre>
0
</pre></td></tr></table>

<table><tr><th><code>       Entrada       </code>
</th><th><code>Saída</code>
</th></tr><tr><td valign="top"><pre>
47 20 23 27 9 1
</pre></td><td valign="top"><pre>
6
</pre></td></tr></table>
<!-- end -->
