# Sistema de autenticação

![_](assets/cover.jpg)

## Contexto

Em sistemas com controle de acesso, o servidor armazena as contas cadastradas e valida as credenciais informadas pelo usuário ao tentar realizar login.

Cada conta possui um login único, uma senha e o nome do usuário. Crie uma `struct` para armazenar cada conta. Em seguida, dada uma tentativa de login com login e senha informados, verifique a existência do usuário e a validade da senha.

### Entrada

- A primeira linha contém um número inteiro `N`, a quantidade de usuários cadastrados.
- As próximas `N` linhas contêm o login, a senha e o nome do usuário (strings sem espaços), separados por espaços.
- A última linha contém o login e a senha da tentativa de acesso.

### Saída

- Se o login não existir na lista: imprima `Usuario nao encontrado`.
- Se o login existir mas a senha for incorreta: imprima `Senha incorreta`.
- Se o login e a senha estiverem corretos: imprima `Acesso permitido: <nome>`.

## Restrições

- `1 <= N <= 50`
- O login, a senha e o nome têm no máximo 30 caracteres cada e não contêm espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
maria 1234 Maria
maria 1234
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Acesso permitido: Maria
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
maria 1234 Maria
maria 9999
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Senha incorreta
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
1
maria 1234 Maria
joao 1234
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
Usuario nao encontrado
</pre></td></tr>
</table>
<!-- end -->
