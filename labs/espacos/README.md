# Espaços duplicados

![_](assets/cover.jpg)

Crie um programa que receba um texto e remova todos os espaços duplicados que aparecerem no meio da frase, deixando apenas um espaço entre as palavras.

### Entrada

- Um texto de até **200** caracteres, contendo apenas letras minúsculas e espaços.

### Saida

- O texto corrigido, sem espaços duplicados entre as palavras.

### Restrições

- O texto terá no máximo **200** caracteres.
- A entrada conterá apenas letras minúsculas e espaços.

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
a  almofada ta muito  fofa
======== EXPECT
a almofada ta muito fofa
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
ai  bb cx
======== EXPECT
ai bb cx
<<<<<<<< FINISH
```
<!-- load -->
