# Melhor estudante

![_](assets/cover.jpg)

## Contexto

*Cuidado: Baseado em fatos reais!*

Alex Sandro foi até a sala do professor de informática pedir uma questão para usar como motivação do curso de informática para os alunos do ensino médio.

A questão é a seguinte: dado o nome completo de vários alunos e as 3 notas que cada um tirou no curso, sua tarefa é criar um programa que imprima uma lista dos alunos, ordenados da maior para a menor média.

### Entrada

- A primeira linha contém um número inteiro N, representando a quantidade de alunos.
- Para cada aluno, haverá duas linhas:
  - A primeira com o nome completo do aluno.
  - A segunda com suas três notas (n1, n2, n3), separadas por espaços.

### Saída

- A lista dos alunos ordenada pela média em ordem decrescente. Para cada aluno, imprima seu índice na lista, nome, média e as três notas formatadas com duas casas decimais.

### Restrições

- As notas serão números de ponto flutuante.
- O nome do aluno pode conter espaços.

## Testes

``` py
>>>>>>>> INSERT 01
3
Alameda do Anjos
4.5 4.1 8.9
Heleno Malino
4.7 4.3 8.2
Hartheobaudo Hidropolino
9.0 10.0 8.2
======== EXPECT
0: Hartheobaudo Hidropolino
   Media: 9.07
   N1: 9.00, N2: 10.00, N3: 8.20
1: Alameda do Anjos
   Media: 5.83
   N1: 4.50, N2: 4.10, N3: 8.90
2: Heleno Malino
   Media: 5.73
   N1: 4.70, N2: 4.30, N3: 8.20
<<<<<<<< FINISH

```
