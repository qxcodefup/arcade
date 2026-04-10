# Calipso e Jack Sparrow - Alternar Case

![_](assets/cover.jpg)

## Contexto

Tia Dalma (Calipso) e Jack Sparrow estavam conversando. Jack, depois da terceira garrafa de rum, diz:

- Ja QuE eStAmOs Só NóS nEsSe BaRrCo, SeRá QuE rOlA uM bEiJiNhO?
- Se você conseguir passar um dia sem beber, eu penso nisso.
- eU nAo QuEeRiA mEsMo.

Como você deve ter notado, Jack Sparrow fala de uma forma muito peculiar. Sua tarefa é criar um programa que imite esse estilo. Dada uma frase, o programa deve verificar o case da primeira letra e, a partir dela, alternar o case de todas as letras seguintes, ignorando os espaços no processo de contagem.

### Entrada

- A primeira linha contém um número inteiro **N**, a quantidade de casos de teste.
- As **N** linhas seguintes contêm um texto para cada caso de teste.

### Saída

- Para cada caso de teste, imprima o texto com o case das letras alternado, começando pelo case da primeira letra da frase original.

### Restrições

- O texto de cada linha terá no máximo **100** caracteres.
- A alternância de case deve ignorar os espaços, mas eles devem ser mantidos na saída.

## Testes

``` py
>>>>>>>> INSERT
1
a batata
======== EXPECT
a BaTaTa
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
AAAAAAAA
bBbBbBbB
======== EXPECT
AaAaAaAa
bBbBbBbB
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
Morra Prea
BigODE Aparado
======== EXPECT
MoRrA pReA
BiGoDe ApArAdO
<<<<<<<< FINISH
```
