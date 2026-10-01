# Qual a coluna de maior valor

![_](assets/cover.jpg)

## Contexto

Ygor está trabalhando em sua matriz nesse exato momento! Ele quer saber qual coluna tem o maior valor. O valor de uma coluna é dado pela **soma dos quadrados (n²)** dos seus elementos.

Sua tarefa é criar um programa que, dada uma matriz quadrada, determine qual coluna possui o maior valor de acordo com essa regra.

**Exemplo:**
Para a matriz abaixo:

```text
4 2 2
3 1 3
2 0 3
```

O valor da coluna 0 é `4² + 3² + 2² = 16 + 9 + 4 = 29`. Após calcular para todas as colunas, a de maior valor seria a coluna 0.

## Entrada e saída

### Entrada

- A primeira linha contém um número inteiro **N**, o tamanho da matriz.
- As **N** linhas seguintes contêm os **N** elementos de cada linha da matriz, separados por espaços.

### Saída

- O índice da coluna que possui o maior valor.

## Restrições

- Se duas ou mais colunas tiverem o mesmo valor máximo, retorne o índice da primeira que foi encontrada.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->
