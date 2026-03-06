# Nao se bula - Gagueira V2

![_](cover.jpg)

## Contexto

Arnoldo trabalhava nos bastidores do filme "Matança no Sertão de Quixadá". O primo dele tinha que interpretar um cangaceiro gago, mas o pobre coitado não sabia gaguejar. Desesperado, ele pede ajuda:

- Arnoldo, pega minhas falas e escreve já do jeito que eu tenho que falar! Por exemplo, "Volte cá seu cabra safado!" tem que virar "VoVoVolte cá seu cacacabra sasasafado!".

Arnoldo, que está se formando em computação, aceitou o desafio cobrando metade do cachê!

Sua tarefa é implementar o código de Arnoldo. Para cada palavra com mais de uma sílaba, você deve repetir a primeira sílaba duas vezes antes da palavra original (totalizando três ocorrências da sílaba). Para simplificar, a "primeira sílaba" é definida como a sequência de letras até a primeira vogal seguida por uma consoante. Palavras com apenas uma sílaba não são alteradas.

### Entrada

- Uma linha de texto.

### Saída

- A linha de texto "gaguejada" de acordo com as regras.

### Restrições

- O texto conterá letras, espaços e pontuação.
- A regra de gagueira se aplica a palavras com mais de uma sílaba.

### Testes

``` py
>>>>>>>> INSERT
Volte cá seu cabra safado
======== EXPECT
VoVoVolte cá seu cacacabra sasasafado
<<<<<<<< FINISH
  
>>>>>>>> INSERT
Morreu Maria Prea
======== EXPECT
MoMoMorreu MaMaMaria Prea
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
Solte essa faca ou eu arranco suas tripas no dente!
======== EXPECT
SoSoSolte eeessa fafafaca ou eu aaarranco suasuasuas tritritripas no dededente!
<<<<<<<< FINISH
```
