# Separando vogais de consoantes

![Capa ilustrada da atividade Separando vogais de consoantes](assets/cover.jpg)

## Contexto

Imagine que você está encarregado de organizar a fila do Restaurante Universitário (RU) de uma forma um tanto inusitada. Em vez de separar por curso ou por quem chegou primeiro, você decide criar duas filas baseadas nas letras de uma palavra-chave: uma fila para as "vogais" e outra para as "consoantes".

Sua tarefa é criar um programa que aplique essa mesma lógica a qualquer frase. Ele deve extrair todas as vogais e exibi-las em uma linha, e fazer o mesmo com as consoantes em uma segunda linha, ignorando os espaços.

### Entrada

- Uma frase de até **100** caracteres, contendo apenas letras minúsculas e espaços.

### Saída

- A primeira linha deve conter todas as vogais da frase original, na ordem em que aparecem.

- A segunda linha deve conter todas as consoantes da frase original, na ordem em que aparecem.

## Restrições

- A frase terá no máximo **100** caracteres.
- A entrada conterá apenas letras minúsculas e espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
um abraco amigo
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
uaaoaio
mbrcmg
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
meteoro de pegasus
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
eeooeeau
mtrdpgss
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
hora de morfar
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
oaeoa
hrdmrfr
</pre></td></tr>
</table>
<!-- end -->
