# Loop com continue e break

![_](assets/cover.jpg)

A compreensão do uso de loops infinitos e dos comandos continue e break é fundamental para otimizar a execução de loops em programação. Essa atividade vai te ajudar a exercitar essas habilidades através de uma sequência numérica, excluindo números pares e parando no ponto certo.

Leia dois números inteiros **A** e **B**, onde **A** será sempre menor ou igual a B. Utilize um loop infinito para imprimir todos os números ímpares entre **A** e **B**, excluindo **B** da impressão.

- Faça um loop infinito com `for` ou `while`.
- Utilize `continue` para pular os números pares.
- Utilize `break` para parar o loop ao atingir B.
- Cuide para não criar um loop infinito sem controle.

### Entrada

- Dois números inteiros **A** e **B**, separados por espaço.

### Saída

- Uma linha com os números ímpares entre **A** e **B**, excluindo **B**, dentro de colchetes

### Restrições

- **A** sempre será menor ou igual a **B**

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code> Entrada </code>
</th><th><code>          Saída          </code>
</th></tr><tr><td valign="top"><pre>
0 10
</pre></td><td valign="top"><pre>
[ 1 3 5 7 9 ]
</pre></td></tr></table>

<table><tr><th><code> Entrada </code>
</th><th><code>          Saída          </code>
</th></tr><tr><td valign="top"><pre>
5 10
</pre></td><td valign="top"><pre>
[ 5 7 9 ]
</pre></td></tr></table>

<table><tr><th><code> Entrada </code>
</th><th><code>          Saída          </code>
</th></tr><tr><td valign="top"><pre>
-5 10
</pre></td><td valign="top"><pre>
[ -5 -3 -1 1 3 5 7 9 ]
</pre></td></tr></table>
<!-- end -->
