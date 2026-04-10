# Krueguer e Jason - Busca de maior ocorrência

![_](assets/cover.jpg)

## Contexto

- As pessoas perderam a fé na sexta-feira 13. Diz Jason por trás da máscara.
- A vida tá ficando difícil mesmo. Fala Freddy Krueguer.
- O jeito é estudar pra concurso então.
- Mas pra onde a gente vai?
- Ouvi falar de um canto que paga muito bem, não precisa de qualificação nenhuma e só tem gente assustadora.
- Qual cargo?
- 12.800 pra motorista, garçom e assessorista lá no tribunal de contas em Brasília.
- Boa, vamos lá.

Algum tempo depois...

- Duas vogais juntas é o que? Fala Jason.
- Ditongo!!! Grita Freddy.
- Ieie, pegadinha do malandro. Caiu na casca de banana: vogais juntas são um encontro vocálico!

Sua tarefa é criar um programa que, dada uma string, encontre e retorne a subsequência com a maior quantidade de vogais consecutivas.

### Entrada

- A primeira linha contém um número inteiro **N**, a quantidade de casos de teste.
- As **N** linhas seguintes contêm uma frase para cada caso de teste.

### Saida

- Para cada caso de teste, retorne uma linha contendo o subtexto com a maior sequência de vogais. Se houver empate no tamanho, retorne a sequência que aparece primeiro no texto.

### Restrições

- **1 ≤ N ≤ 50**
- A frase de cada caso de teste terá no máximo **50** caracteres e conterá apenas letras minúsculas.

## Testes

``` py
>>>>>>>> INSERT
1
aeb
======== EXPECT
ae
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
aebeiocdu
======== EXPECT
eio
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
abdeiuofaoi
xaeioux
======== EXPECT
eiuo
aeiou
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
aebaibaobaub
baeoxuoiazzz
oxau
======== EXPECT
ae
uoia
au
<<<<<<<< FINISH
```
