# Vigenere e Valdiskley

![_](assets/cover.jpg)

No capítulo 3 da saga de Valdiskey você vai escrever o algoritmo que faz a criptografia e descriptografia. Valentina aceitou o namoro e vai usar o seu código para ler o conteúdo das cartinhas de amor de Valdiskley. Se você quiser pesquisar o nome dessa cifra é cifra de Vigenere.

[http://pt.wikipedia.org/wiki/Cifra_de_Vigen%C3%A8re](http://pt.wikipedia.org/wiki/Cifra_de_Vigen%C3%A8re)


Primeiro a criptografia:

Dado um texto claro e uma chave você deve:

- Repetir a chave até que ela tenha o mesmo tamanho do texto claro. No caso abaixo, repetimos a palavra princesa até completar a frase.  
- Você soma os caracteres 2 a 2 como aprendeu a fazer no segundo capítulo da história de Valdiskley. Ignore a pontuação e opere apenas as letras.

```py
Exemplo 1: chave: "abac"  
texto: batata? sim! Frita!!  
senha: abacab aca bacab  
saida: bbtctb? skm! Grktb!!

Exemplo 2:  
chave: "princesa"  
texto: "quando vi voce eu buguei"  
senha: "prince sa prin ce saprin"  
saida: "fliafs ni kfkr gy tuvlmv"
```

### Entrada

- A frase a ser operada, apenas caracteres minúsculos e pontuação.
- A palavra chave, apenas caracteres minúsculos e sem espaços ou pontuação.
- A operação de '+' para cifrar ou '-' para descifrar.

A operação de descifrar é o contrário da cifragem.

### Saída

- O resultado da operação.

## Exemplos

<!-- tests tests.toml --limit 4 -->
<table><tr><th><code>          Entrada          </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
batata? sim! frita!!
abac
+
</pre></td><td valign="top"><pre>
bbtctb? skm! grktb!!
</pre></td></tr></table>

<table><tr><th><code>          Entrada          </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
quando vi voce eu buguei
princesa
+
</pre></td><td valign="top"><pre>
fliafs ni kfkr gy tuvlmv
</pre></td></tr></table>

<table><tr><th><code>          Entrada          </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
a data ua bbfrua
ab
-
</pre></td><td valign="top"><pre>
a casa ta aberta
</pre></td></tr></table>

<table><tr><th><code>          Entrada          </code>
</th><th><code>           Saída           </code>
</th></tr><tr><td valign="top"><pre>
o bobe!
ab
+
</pre></td><td valign="top"><pre>
o coce!
</pre></td></tr></table>
<!-- end -->
