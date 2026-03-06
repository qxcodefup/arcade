# Contar Substrings

![_](cover.jpg)

## Contexto

Amora está apaixonada e quer descobrir quantas vezes em sua cartinha de amor aparecem palavras amorosas. Na cartinha, estava escrito:

"amo o amor que me amou, oh amora que me enamora amolecendo minha alma."

Ela descobriu que o subtexto "amo" aparecia 6 vezes nessa frase.

Ajude Amora a verificar suas cartas. Faça um programa que recebe duas entradas: a primeira linha contendo o texto completo e a segunda, o trecho a ser buscado. Conte e imprima quantas vezes o trecho aparece no texto maior.

### Entrada

- A primeira linha contém uma frase.
- A segunda linha contém um trecho da frase.

### Saída

- Um número inteiro representando o total de ocorrências do trecho na frase.

### Restrições

- A frase terá no máximo **100** caracteres.
- O trecho terá no máximo **20** caracteres.

### Testes

``` py
>>>>>>>> INSERT
amo o amor que me amou, oh amora amortecida
amo
======== EXPECT
5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
o rato ratificou o carate que rateamos no cerato.
rat
======== EXPECT
5
<<<<<<<< FINISH
```
