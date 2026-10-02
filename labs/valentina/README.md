# Valentina e Valdiskley

![Capa ilustrada da atividade Valentina e Valdiskley](assets/cover.jpg)

## Contexto

Valdiskley é muito nerd e, depois de estudar criptografia, bolou um plano infalível para conquistar o amor da sua vida, Valentina. Seu plano é o seguinte: ele vai escrever várias cartinhas criptografadas para ela e só revelará a senha se ela aceitar namorar com ele.

Sua tarefa é implementar a lógica de criptografia que Valdiskley usará. A operação funciona com base em uma cifra de caracteres, onde o alfabeto é tratado como uma lista circular ('a' vem depois de 'z'). Pense em 'a' como 0, 'b' como 1, e assim por diante, até 'z' como 25.

A cifragem soma os valores das letras e a decifragem subtrai esses valores, sempre mantendo o resultado no intervalo circular de `0` a `25`. O valor de `a` é `0`, o de `b` é `1`, e assim por diante até `z`, que vale `25`. Portanto, some ou subtraia os dois valores e aplique o resto da divisão por `26`.

**Exemplos de Soma (+):**

```text
a + a = a 
a + b = b   
b + a = b 
b + b = c 
c + c = e 
c + b = d 
d + e = h
...

z + a = z
z + b = a
```

**Exemplos de Subtração (-):**

```text
c - a = c
c - b = b
c - c = a
c - d = z
c - e = y  
```

Você deve criar um programa que receba dois caracteres e uma operação (+ ou -) e retorne o resultado.

### Entrada

- A primeira linha contém um caractere minúsculo.
- A segunda linha contém a operação: **'+'** ou **'-'**.
- A terceira linha contém um segundo caractere minúsculo.

### Saída

- O caractere resultante da operação de criptografia ou descriptografia.

## Restrições

- Os caracteres de entrada serão sempre letras minúsculas de `a` a `z`.

## Exemplos

<!-- tests tests.toml --limit 4 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
a
+
a
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
a
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
b
+
d
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
e
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
z
+
c
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
b
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
f
-
d
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
c
</pre></td></tr>
</table>
<!-- end -->
