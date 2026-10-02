# Criptografia de chave

![_](assets/cover.jpg)

## Contexto

Yara quer desvendar um enigma, diga-se de passagem é bem enigmático!!!

O enigma consiste em um conjunto de caracteres aparentemente sem sentido, esse enigma so passa a fazer sentindo quando processado com uma 'Key' composto por um número inteiro.

O processamento consiste em fazer operações short (^), bit a bit, entre cada caractere do
enigma e cada digito da 'key', se a quantidade de dígitos da 'key' for menor que a quantidade de caracteres do enigma, a 'key' se repete, se a quantidade de caracteres do enigma for menor que a quantidade de dígitos da 'key', a 'key' se converte ao tamanho do enigma , desprezando os dígitos adicionais.

## Exemplos

```text
Enigma = nnb!ovofl
Key = 123
```

Ao processar cada caractere do enigma acima com a 'key', temos:

```text
n n b ! o v o f l
1 2 3 1 2 3 1 2 3

o l a   m u n d o
```

Perceba que na prática os caracteres serão convertidos para o seu código decimal ASCII.

```text
'n' = 110 = 1101110
 1  =  1  = 0000001
            1101111 = 111 = 'o'
```

Ufaaa! Em fim... Ajude Yara nessa missao :)

Yara irá procurar a chave pra você.

Então dada a chave(KEY) e o enigma(E) de Yara retornar o enigma revelado.

### Entrada

Um conjunto de caracteres E, representando o enigma.

1 Inteiro KEY representando a chave do enigma.

## Saida

O enigma revelado.

## Restrições

1 < E <= 100.

1 < KEY <= 2147483647.

## Exemplos
<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
nnb!ovofl
123
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
ola mundo
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
Br'tbn+'qhdb'tfeb+'iht'tfebjht
777
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Eu sei, voce sabe, nos sabemos
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
jsmc*&cs&uis&ucs&vgo
666
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
luke, eu sou seu pai
</pre></td></tr>
</table>
<!-- end -->
