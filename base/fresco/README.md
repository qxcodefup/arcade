# Juntar palavras

![_](cover.jpg)

## Contexto

Você já percebeu que, na fala, quando o final de uma palavra termina com uma vogal e a próxima palavra começa com outra, nós tendemos a juntar os sons? Esse fenômeno tem um nome elegante em francês: *liaison*.

Sua tarefa é criar um programa que simule esse efeito. Dado um texto, você deve juntar palavras consecutivas se a primeira terminar com uma vogal e a segunda começar com uma vogal. Uma regra especial se aplica: se a junção resultar em três ou mais vogais seguidas, elas devem ser todas unificadas. Por exemplo, "amo o orvalho" se torna "amorvalho".

### Entrada

- Um texto de até **100** caracteres.

### Saída

- O texto com as palavras unidas pelo efeito de *liaison*.

### Restrições

- O texto conterá apenas letras minúsculas e espaços.
- Haverá apenas um espaço entre as palavras, sem espaços no início ou no fim da frase.
- Se a junção de palavras criar uma sequência de 3 ou mais vogais, todas devem ser unidas.

### Testes

``` py
>>>>>>>> INSERT
a porta amassou
======== EXPECT
a portamassou
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
carla almeida alencar
======== EXPECT
carlalmeidalencar
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a carla a ama
======== EXPECT
a carlama
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
o orvalho ouviu uniformemente e eu uivei
======== EXPECT
orvalhouviuniformementeuivei
<<<<<<<< FINISH
```
