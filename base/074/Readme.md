## ©04_vetores L3 - OBI 2017 - Fase 1 - Botas Trocadas


![](__capa.jpg)

## Motivação

A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de pares de botas de vários tamanhos para seus soldados. No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada pé. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembalá-las, desta vez corretamente.

Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um programa que, dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão ser formados no total.

### Entrada

- A primeira linha da entrada contém um inteiro N indicando o número de botas individuais entregues. Cada uma das N linhas seguintes descreve uma bota, contendo um número inteiro M e uma letra L, separados por um espaço em branco. M indica o número do tamanho da bota e L indica o pé da bota: L= 'D' indica que a bota é para o pé direito, L= 'E' indica que a bota é para o pé esquerdo.

### Saída

- Seu programa deve imprimir uma única linha contendo um único número inteiro indicando o número total de pares corretos de botas que podem ser formados.

## Restrições

*   2 ≤ N ≤ 104
*   N é par
*   30 ≤ M ≤ 60
*   L é o caractere 'D' ou o caractere 'E'

## Exemplos

```
>>>>>>>>
4
40 D
41 E
41 D
40 E
========
2
<<<<<<<<

>>>>>>>>
6
38 E
39 E
40 D
38 D
40 D
37 E
========
1
<<<<<<<<
```

## Ajuda

### Dica
- Que tal criar dois vetores? Onde um armazena os valores do `pé direito` e o outro do pé `esquerdo`, e ambos tenham o mesmo tamanho.

### Pseudocódigo
```
Ler N
sum recebe 0

Enquanto (auxiliar menor N):
    Ler numero
    Ler lado

    Se ( lado igual 'D' ):
        Incrementar pe_direito[numero]
    Senao:
        Incrementar pe_esquerdo[numero]

Para( auxiliar menor ou igual MMAX ):
    Se ( pe_esquerdo[i] menor pe_direito[i] ):
        soma recebe pe_esquerdo[i] + soma
    Senao:
        soma recebe pe_direito[i] + soma

Mostrar (sum)
```

- Observação: `MMAX` se trata do maior número que `M` pode assumir e, pelo enunciado da questão, esse número é igual a 60.
