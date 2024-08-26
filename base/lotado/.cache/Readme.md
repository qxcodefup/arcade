# L2 - @lotado - Ônibus dos alunos

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/lotado/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup lotado`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/lotado/cover.jpg)

## Motivação

Só quem depende do transporte público sabe o quanto um ônibus consegue desafiar a leis da física.
A quantidade de gente é tão grande que o motorista não consegue nem enxergar quantos entram ou quantos saem no busão.
Em uma viagem, ele pediu para você, estudante de TI, que fizesse um programa que o ajude a decidir quando é a hora de partir.

## Ação

Dado um inteiro **C**, que indica a capacidade do ônibus prevista pela legislação,
leia a **M** (quantidade de pessoas que entram ou saem)  e mostre o estado do busão.
Imprima (sem aspas) :

* "vazio"                     -se não houver passageiros.
* "ainda cabe"           -se houver passageiros, mas não está lotado ainda.
* "lotado"                   -se a quantidade de passageiros alcançar a capacidade.
* "hora de partir"     -se a quantidade de passageiros alcançar duas vezes a capacidade.

Seu programa deve encerrar quando for a hora de partir.

Você pode assumir:

* **C** > 0.
* Um número positivo representa a entrada de pessoas.
* Um número negativo representa a saída de pessoas.
* Nunca vão sair mais pessoas do que tem no ônibus

## Entrada

* O inteiro **C** (capacidade).
* O inteiro**M** (movimentação). Continue lendo até o ônibus partir.

## Saída

* O estado do ônibus para cada entrada ou saída de gente.

## Exemplos

``` txt
>>>>>>>>
5
0
3
2
4
1
========
vazio
ainda cabe
lotado
lotado
hora de partir
<<<<<<<<

>>>>>>>>
10
10
-10
30
========
lotado
vazio
hora de partir
<<<<<<<<

>>>>>>>>
3
1
1
1
-3
3
3
========
ainda cabe
ainda cabe
lotado
vazio
lotado
hora de partir
<<<<<<<<
```
