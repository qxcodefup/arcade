# Cadastro de pessoas

![_](assets/cover.jpg)

## Contexto

Um sistema de cadastro armazena os dados básicos de cidadãos contendo nome, CPF e idade. Para agilizar o atendimento, os atendentes buscam o cadastro de uma pessoa informando o seu CPF.

Crie uma `struct` para representar cada pessoa. Após ler a lista de cadastros, realize uma busca linear pelo CPF informado e exiba as informações completas da pessoa encontrada, ou avise caso ela não conste no cadastro.

### Entrada

- A primeira linha contém um número inteiro `N`, o número de pessoas cadastradas.
- As próximas `N` linhas contêm o nome (string sem espaços), o CPF (string de 11 dígitos) e a idade (número inteiro), separados por espaços.
- A última linha contém o CPF a ser pesquisado.

### Saída

- Se a pessoa for encontrada, imprima:
  `Nome: <nome> | Idade: <idade> anos | CPF: <cpf>`
- Caso contrário, imprima:
  `Pessoa nao encontrada`

## Restrições

- `1 <= N <= 50`
- O CPF é uma sequência de caracteres sem espaços.
- A idade é um número inteiro positivo.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
Maria 12345678900 28
Joao 98765432100 35
12345678900
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Nome: Maria | Idade: 28 anos | CPF: 12345678900
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
Maria 12345678900 28
Joao 98765432100 35
11111111111
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Pessoa nao encontrada
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
Ana 11122233344 19
Beto 55566677788 42
Carla 99988877766 61
55566677788
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Nome: Beto | Idade: 42 anos | CPF: 55566677788
</pre></td></tr>
</table>
<!-- end -->
