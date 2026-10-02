# Melhor estudante

![_](assets/cover.jpg)

## Contexto

*Cuidado: Baseado em fatos reais!*

Alex Sandro foi até a sala do professor de informática pedir uma questão para usar como motivação do curso de informática para os alunos do ensino médio.

A questão é a seguinte: dado o nome completo de vários alunos e as 3 notas que cada um tirou no curso, sua tarefa é criar um programa que imprima uma lista dos alunos, ordenados da maior para a menor média.

## Entrada e saída

### Entrada

- A primeira linha contém um número inteiro N, representando a quantidade de alunos.
- Para cada aluno, haverá duas linhas:
  - A primeira com o nome completo do aluno.
  - A segunda com suas três notas (n1, n2, n3), separadas por espaços.

### Saída

- A lista dos alunos ordenada pela média em ordem decrescente. Para cada aluno, imprima seu índice na lista, nome, média e as três notas formatadas com duas casas decimais.

## Restrições

- As notas serão números de ponto flutuante.
- O nome do aluno pode conter espaços.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
Alameda do Anjos
4.5 4.1 8.9
Heleno Malino
4.7 4.3 8.2
Hartheobaudo Hidropolino
9.0 10.0 8.2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0: Hartheobaudo Hidropolino
   Media: 9.07
   N1: 9.00, N2: 10.00, N3: 8.20
1: Alameda do Anjos
   Media: 5.83
   N1: 4.50, N2: 4.10, N3: 8.90
2: Heleno Malino
   Media: 5.73
   N1: 4.70, N2: 4.30, N3: 8.20
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
Alameda do Anjos
4.5 4.1 8.9
Heleno Malino
4.7 4.3 8.2
Hartheobaudo Hidropolino
10.0 10.0 8.2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0: Hartheobaudo Hidropolino
   Media: 9.40
   N1: 10.00, N2: 10.00, N3: 8.20
1: Alameda do Anjos
   Media: 5.83
   N1: 4.50, N2: 4.10, N3: 8.90
2: Heleno Malino
   Media: 5.73
   N1: 4.70, N2: 4.30, N3: 8.20
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
4
Kimberly
8.5 4.9 8.9
Jason
4.5 4.9 8.9
Passamento
7.5 8.9 8.9
Heleno Malino
4.7 9.1 8.2
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
0: Passamento
   Media: 8.43
   N1: 7.50, N2: 8.90, N3: 8.90
1: Kimberly
   Media: 7.43
   N1: 8.50, N2: 4.90, N3: 8.90
2: Heleno Malino
   Media: 7.33
   N1: 4.70, N2: 9.10, N3: 8.20
3: Jason
   Media: 6.10
   N1: 4.50, N2: 4.90, N3: 8.90
</pre></td></tr>
</table>
<!-- end -->
