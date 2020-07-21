## ©04_vetores L3 - Zoologico Entrando na Arca de Noé


![](__capa.jpg)

## Motivação

O Dono do zoológico que fazer uma grande arca e colocar os animais dentro. Acontece que os animais só podem entrar na arca aos pares. Um número representa uma espécie. Se esse número for positivo, é um animal macho e se for um número negativo, é um animal fêmea. Um casal precisa ter um macho e uma fêmea da mesma espécie.

### Entrada

*   linha 1: um número com a quantidade de elementos do vetor (até 50)
*   linha 2: o vetor de inteiros

### Saída

*   A quantidade de casais formados.

## Exemplos

```
>>>>>>>>
3
1 -1 2
========
1
<<<<<<<<

>>>>>>>>
5
1 3 2 2 -3
========
1
<<<<<<<<

>>>>>>>>
10
1 9 -3 3 3 2 -1 4 -1 1`
========
3
<<<<<<<<
```

## Ajuda

### Dica
- Procure elementos que tenham o mesmo valor mas com o sinal oposto `(valor = -valor)` e se encontra-los, troque os seus valores para 0. Isso evita que eles sejam contabilizados novamente por outra busca.


### Pseudocódigo
```
Ler tamannho_vetor
Ler vetor
casais = 0

Para (auxiliar_1 < tamanho_vetor):
    Para (auxiliar_2 < tamanho_vetor):
        Se (vetor[auxiliar_2] != 0):
            Se (-vetor[auxiliar_1] == vet[auxiliar_2]):
                Incrementar casais
                vet[auxiliar_1] = 0 e vet[auxiliar_2] = 0;

Mostrar (casais)
```

- Lembrando que para ler um vetor é necessário o laço/estrutura de repetição. Exemplo:
```
Ler quantidade

Enquanto (auxiliar < quantidade ):
    Ler entrada
    vetor[auxiliar] = entrada
```
#
