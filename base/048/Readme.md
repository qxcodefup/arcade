## #03_repetição L2 - Cabo de Guerra Jedi


![](__capa.jpg)

## Motivação

* Hoje é Dia de gincana galeraaaaaaa!
* EEEEEEEE.
* A primeira competição do dia é cabo de guerra.
* A equipe mais forte vence. Prepara, 1, 2, 3, vai!!!

Um grupo de Jedis e Siths resolveram decidir de uma fez qual lado da força é o mais forte, então eles resolveram realizar uma competição de cabo de guerra para colocarem seus poderes a prova.

## Ação

Você recebe uma entrada que é um vetor de tamanho T de numeros positivos entre 1 e 10. (T, sempre par, entre 0 e 50). O valor do número representa a força do participante. A primeira metade do vetor representa os participantes do lado Jedi. A segunda metade do vetor representa os participantes do lado Sith. Analise o vetor somando a força dos participantes e escreva o nome do lado que ganhou ou empate ("Jedi", "Sith", "Empate").

### Entrada

* 1ª linha: número de elementos
 
* 2ª linha: vetor de elementos.

### Saída

* "Jedi", "Sith", ou "Empate"

## Exemplos

```
>>>>>>>>
2
1 1
========
Empate
<<<<<<<<

>>>>>>>>
2
2 1
========
Jedi
<<<<<<<<

>>>>>>>>
2
2 4
========
Sith
<<<<<<<<

>>>>>>>>
4
2 4 5 3
========
Sith
<<<<<<<<

>>>>>>>>
6
2 4 3 3 3 3
========
Empate
<<<<<<<<

>>>>>>>>
8
2 4 3 4 3 3 3 2
========
Jedi
<<<<<<<<
```

## Ajuda

- Que tal criar duas variáveis, `soma_jedi` e `soma_jedi`, que acumula os respectivos valores dos `jedi` e `sith`. 

Pseudocódigo

```
Ler tamanho_vetor
soma_jedi recebe 0
soma_sith recebe 0
auxiliar recebe 1

Enquanto (auxiliar for menor ou igual tamanho_vetor):
    Ler tropa

    Se (auxiliar for menor (tamanho_vetor / 2)):
        soma_jedi é incrementada com o valor de tropa
    Senao:
        soma_sith é incrementada com o valor de tropa

    Se (soma_jedi for maior soma_sith):
        Mostrar "Jedi"
    Se (soma_jedi for menor soma_sith):
        Mostrar "Sith"
    Se (soma_jedi for igual a soma_sith):
        Mostrar "Empate"
```
