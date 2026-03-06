# Espaços duplicados

![_](cover.jpg)

## Contexto

Joãozinho chega na escola com o trabalho digitado e a professora pergunta:

- Porque esse trabalho com esses espaços desse jeito? "briofitas sao plantas e pteridofilas  sao dinossauros que voam"
- É que meu poodle quebrou a tecla espaço do meu notebook.
- Mas, número 1, pteridófilas são plantas, pterodáctilos que são dinossauros. E número 2, eu não aceito mais desculpas de cachorros pra não entregar a lição de casa.

Sua tarefa é ajudar Joãozinho a consertar seus trabalhos. Crie um programa que receba um texto e remova todos os espaços duplicados que aparecerem no meio da frase, deixando apenas um espaço entre as palavras.

### Entrada

- Um texto de até **200** caracteres, contendo apenas letras minúsculas e espaços.

### Saida

- O texto corrigido, sem espaços duplicados entre as palavras.

### Restrições

- O texto terá no máximo **200** caracteres.
- A entrada conterá apenas letras minúsculas e espaços.

### Testes

``` py
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

```py
>>>>>>>> INSERT
aiu  bbk cxmp
======== EXPECT
aiu bbk cxmp
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a  bola  ta furada
======== EXPECT
a bola ta furada
<<<<<<<< FINISH
```
