# L1 - @colorido - Paulo Victor e seu sapato colorido

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/colorido/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup colorido`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

Professora Ingrid conta que nas suas brinceiras de criança sempre estavam presentes atividades físicas lúdicas. Uma das suas favoritas era pular amarelinha.

Na versão simplificada, a criança joga a pedra em um número e depois tem que ir pulando um número por vez, sem pisar no número que caiu a pedra até chegar no fim da trilha. O primeiro número é o zero, o último número é o 10. Mas ao invés de dizer 10, as crianças dizem céu.

Um dia, ela estava brincando, quando Paulo Victor chegou com seu sapato colorido querendo fazer inveja. Depois de mostrar a roupinha nova que ele ganhou toda combinando, ele ainda quiz arengar dizendo que eles eram um bando de abestados que nem sabiam jogar direito.  E foi ensinar o jeito "certo dele" de jogar.

Se você começar com o pé direito, tem que ir alternando direito e esquerdo até chegar no céu.

Vamos supor que a criança jogou a pedra no 8 e começou com o pé esquerdo. A sequência fica assim:

0e 1d 2e 3d 4e 5d 6e 7d 9e ceu

Se a criança jogar a pedra no 0 e começa com o pé direito, a contagem fica assim:

1d 2e 3d 4e 5d 6e 7d 8e 9d ceu

## Entrada e Saída

- Entrada
  - 1a linha: número N que caiu a pedra
  - 2a linha: qual pé a criança começa
- Saída
  - lista dos números que a criança deve percorrer e qual pé ele deve pisar, iniciando com \[ e terminando com \]

## Restrições

- Valor de N é um número inteiro de \[0, 10\].

## Testes

```txt
>>>>>>>>
8
d
========
[ 0d 1e 2d 3e 4d 5e 6d 7e 9d ceu ]
<<<<<<<<

>>>>>>>>
0
e
========
[ 1e 2d 3e 4d 5e 6d 7e 8d 9e ceu ]
<<<<<<<<

>>>>>>>>
0
d
========
[ 1d 2e 3d 4e 5d 6e 7d 8e 9d ceu ]
<<<<<<<<

>>>>>>>>
1
d
========
[ 0d 2e 3d 4e 5d 6e 7d 8e 9d ceu ]
<<<<<<<<

>>>>>>>>
2
d
========
[ 0d 1e 3d 4e 5d 6e 7d 8e 9d ceu ]
<<<<<<<<

>>>>>>>>
10
e
========
[ 0e 1d 2e 3d 4e 5d 6e 7d 8e 9d ]
<<<<<<<<

```

## Extra

Depois que cresceu, Paulo deixou de arengar e virou mó gente boa, mas nunca perdeu o estilo.
