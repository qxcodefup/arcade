# Soldados em Posição

![_](assets/cover.jpg)

## Contexto

Os soldados se posicionaram em formação no quartel, formando uma matriz. Cada soldado tem uma numeração única em sua farda. O Comandante, querendo testar sua atenção, deu a seguinte ordem: conte quantas vezes um soldado tem numeração menor que o soldado imediatamente acima dele na mesma coluna.

Sua tarefa é criar um programa que, dada a matriz da formação, conte o número total dessas ocorrências, analisando cada coluna verticalmente.

## Entrada e saída

### Entrada

- A primeira linha contém dois números inteiros, **nl** e **nc**, representando o número de linhas e colunas da matriz.
- As **nl** linhas seguintes contêm os nc valores da matriz, que representam as numerações dos soldados.

### Saída

- Um número inteiro que representa a quantidade total de vezes que um soldado com número menor foi encontrado atrás de um soldado com número maior na mesma coluna.

## Restrições

- A verificação deve ser feita apenas verticalmente (dentro de cada coluna).

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->
