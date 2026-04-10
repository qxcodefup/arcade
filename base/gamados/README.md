# Verificar ordenação da frase

![_](assets/cover.jpg)

## Contexto

- Ei Manoel, saca só minha frase:
- "A alface do meu pé ta velha".
- Que é que tem ela?
- O que ela tem de legal?
- Alface cresce no chão e não no pé! Respondeu Manoel.
- Não Manoel, vou dizer outra, pensa mais:
- "Amei assistir elefantes ferindo gansos gamados no zoológico".
- É muito suspeita! Responde Manoel. Tô desconfiando de você.
- Deixa de ser burro Manoel, as palavras tão ordenadas lexicograficamente!

Sua tarefa é verificar se as palavras em umam determinada frase estão e ordem alfabética (lexicográfica). Você deve criar um programa que leia a frase e imprima "sim" se as palavras estiverem ordenadas e "nao" caso contrário.

### Entrada

- Uma frase de até **100** caracteres, contendo apenas letras minúsculas, sem acentos e espaços.

### Saída

- A palavra **"sim"** se a frase estiver ordenada lexicograficamente.
- A palavra **"nao"** caso contrário.

### Restrições

- A frase terá no máximo **100** caracteres.
- A entrada conterá apenas letras minúsculas e espaços.

## Testes

``` py
>>>>>>>> INSERT
a amora azul
======== EXPECT
sim
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
o rato roeu a roupa
======== EXPECT
nao
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a b c d e f
======== EXPECT
sim
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
a b c d a f
======== EXPECT
nao
<<<<<<<< FINISH
```
