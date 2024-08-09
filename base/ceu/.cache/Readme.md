# L0 - @ceu - Ingrid quer chegar no céu

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/ceu/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup ceu`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

Professora Ingrid conta que nas suas brinceiras de criança sempre estavam presentes atividades físicas lúdicas. Uma das suas favoritas era pular amarelinha.

Na versão simplificada, a criança joga a pedra em um número e depois tem que ir pulando um número por vez, sem pisar no número que caiu a pedra até chegar no fim da trilha. O primeiro número é o zero, o último número é o 10. Mas ao invés de dizer 10, as crianças dizem céu.

Vamos supor que a criança jogou a pedra no 8. A contagem fica assim:

0 1 2 3 4 5 6 7 9 ceu

Se a criança jogar a pedra no 10, a contagem fica assim:

0 1 2 3 4 5 6 7 8 9

## Entrada e Saída

- Entrada
  - 1a linha: número N que caiu a pedra
- Saída
  - lista dos números que a criança deve dizer, iniciando com \[ e terminando com \]

## Restrições

- Valor de N é um número inteiro de \[0, 10\].

## Testes

```txt
>>>>>>>>
8
========
[ 0 1 2 3 4 5 6 7 9 ceu ]
<<<<<<<<

>>>>>>>>
0
========
[ 1 2 3 4 5 6 7 8 9 ceu ]
<<<<<<<<

>>>>>>>>
0
========
[ 1 2 3 4 5 6 7 8 9 ceu ]
<<<<<<<<

>>>>>>>>
1
========
[ 0 2 3 4 5 6 7 8 9 ceu ]
<<<<<<<<

>>>>>>>>
2
========
[ 0 1 3 4 5 6 7 8 9 ceu ]
<<<<<<<<

>>>>>>>>
10
========
[ 0 1 2 3 4 5 6 7 8 9 ]
<<<<<<<<

```
