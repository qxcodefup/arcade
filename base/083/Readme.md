## #04_vetores L3 - Anfíbios e Batráquios - Está contido


![](__capa.jpg)

## Motivação

Todo batráquio é anfíbio, mas nem todo anfíbio é batráquio. Todo sapo, rã e perereca são tanto anfíbios
como batráquios.

Assim, o conjunto dos sapos está contido no de batráquios que está contido no de anfíbio.

Não entendeu? Quem mandou gazear a aula de biologia. -_-

\[DS\]

## Ação

Dados dois vetores, verifique se o primeiro está contido no segundo.

### Entrada

- 1a linha: Número de elementos do primeiro vetor(1 a 50) seguido dos elementos.  
- 2a linha: Número de elementos do segundo vetor(1 a 50) seguido dos elementos.

### Saída

- "sim" se o primeiro está condido no segundo e não caso contrário.

- Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.
  
## Exemplos

```
>>>>>>>>
2 1 3
3 1 5 3
========
sim
<<<<<<<<

>>>>>>>>
2 1 3
3 6 5 3
========
nao
<<<<<<<<

>>>>>>>>
3 1 3 2
6 1 5 3 6 8 2
========
sim
<<<<<<<<
```

## Ajuda

### Dica 
- Os valores de `v1` não precisam estar de forma contínua em `v2`. Por exemplo:
```
v1 =  1 2 3 7 6 5

v2 = 3 32 10 5 21 7 2 30 1 50 6

No exemplo em questão, v1 está contido em v2
```
- Que tal criar duas variáveis ? `achei` e `esta_contido`, onde uma indica se um determinado elemento de `v1` foi encontrado em `v2`, e a outra indica se `v1` está contido em `v2`.
  
- A resolução dessa questão consiste em fixar um elemento de `v1` e procurar em todo `v2` se existe algum outro elemento igual, se esse elemento não existir, então significa que `v1` não está contido em `v2`

### Pseudocódigo

```
    Ler tamanho_v1
    Ler v1
    Ler tamanho_v2
    Ler v2

    esta_contido = verdade
    Para (auxiliar_1 < tamanho_v1) faca:
        achei = falso
        Para (auxiliar_2 < tamanho_v2) faca:
            Se (v1[auxiliar_1] == v2[auxliar_2]):
                achei = verdade
                break
        Se (achei == falso):
            esta_contido = false

    Se (esta_contido == verdade):
        Mostrar "sim"
    Se (esta_contido == falso):
        Mostrar "nao"
```

- Lembrando que para ler um vetor, é necessário um laço/estrutura de repetição. Exemplo:
```
Ler tamanho_v1

Para (auxiliar_1 < tamanho_v1) faca:
    Ler entrada
    v1[auxiliar_1] = entrada
```