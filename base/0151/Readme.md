## @0151 #02_sel L1 - OBI 2015 - Fase 2 - Nível 1 - Impedido!
## @qxcode
# @qxcode

Impedido!
=========

A regra do impedimento no futebol pode parecer estranha, mas sem ela, se a gente pensar bem, o jogo ficaria muito chato! Ela funciona dadas as posições de três jogadores: L o jogador atacante que lança a bola; R o jogador atacante que recebe a bola; e D o último jogador defensor. E a regra vale somente se o jogador R está no seu campo de ataque; se o jogador R está no seu campo de defesa ou na linha divisória do meio campo, ele não está em impedimento. Neste problema o campo tem 100 metros de comprimento. Dadas as posições desses três jogadores, no momento exato do lançamento, haverá impedimento se e somente se a seguinte condição for verdadeira: **(R>50) e (L< R) e (R >D)**.

A regra parece estranha, não é mesmo? Mas a gente nem precisa entender a lógica dela. O seu programa deve apenas determinar, dadas as três posições L,R e D, se há ou não impedimento, implementando exatamente a condição acima. A figura abaixo mostra um exemplo onde \\bf não há impedimento:

![](capa.png)

### Entrada

A entrada é composta de apenas uma linha, contendo os três inteiros L, R e D.

### Saída

Seu programa deve produzir uma única linha, contendo um único caractere, que deve ser "S" caso haja impedimento, ou "N" caso contrário.

### Restrições

*   0 ≤ L ≤ 100
*   0 ≤ R ≤ 100
*   0 ≤ D ≤ 100

### Exemplos

```
>>>>>>>>
35 60 75
========
N
<<<<<<<<

>>>>>>>>
55 68 67
========
S
<<<<<<<<

>>>>>>>>
66 80 80
========
N
<<<<<<<<
```

<!---
>>>>>>>> 01
35 60 75
========
N
<<<<<<<<


>>>>>>>> 02
33 40 20
========
N
<<<<<<<<


>>>>>>>> 03
80 80 40
========
N
<<<<<<<<


>>>>>>>> 04
40 40 30
========
N
<<<<<<<<


>>>>>>>> 05
55 68 67
========
S
<<<<<<<<


>>>>>>>> 06
66 80 80
========
N
<<<<<<<<


>>>>>>>> 07
71 47 15
========
N
<<<<<<<<


>>>>>>>> 08
62 55 27
========
N
<<<<<<<<


>>>>>>>> 09
0 0 0
========
N
<<<<<<<<


>>>>>>>> 10
33 50 60
========
N
<<<<<<<<


>>>>>>>> 11
44 50 20
========
N
<<<<<<<<


>>>>>>>> 12
33 60 50
========
S
<<<<<<<<


>>>>>>>> 13
71 32 32
========
N
<<<<<<<<


>>>>>>>> 14
90 91 90
========
S
<<<<<<<<


>>>>>>>> 15
90 91 91
========
N
<<<<<<<<


>>>>>>>> 16
90 91 94
========
N
<<<<<<<<


>>>>>>>> 17
2 18 48
========
N
<<<<<<<<


>>>>>>>> 18
61 62 60
========
S
<<<<<<<<


>>>>>>>> 19
61 60 62
========
N
<<<<<<<<


>>>>>>>> 20
80 80 80
========
N
<<<<<<<<


>>>>>>>> 21
30 28 32
========
N
<<<<<<<<


>>>>>>>> 22
40 50 45
========
N
<<<<<<<<


>>>>>>>> 23
90 60 92
========
N
<<<<<<<<


>>>>>>>> 24
90 90 92
========
N
<<<<<<<<


>>>>>>>> 25
32 74 19
========
S
<<<<<<<<


>>>>>>>> 26
75 75 75
========
N
<<<<<<<<


>>>>>>>> 27
100 100 100
========
N
<<<<<<<<


>>>>>>>> 28
23 97 70
========
S
<<<<<<<<


>>>>>>>> 29
14 8 62
========
N
<<<<<<<<


>>>>>>>> 30
10 12 12
========
N
<<<<<<<<


>>>>>>>> 31
100 95 97
========
N
<<<<<<<<


>>>>>>>> 32
99 96 93
========
N
<<<<<<<<


>>>>>>>> 33
10 10 10
========
N
<<<<<<<<


>>>>>>>> 34
50 50 50
========
N
<<<<<<<<


>>>>>>>> 35
96 91 14
========
N
<<<<<<<<


>>>>>>>> 36
49 51 49
========
S
<<<<<<<<


>>>>>>>> 37
50 49 50
========
N
<<<<<<<<


>>>>>>>> 38
51 50 49
========
N
<<<<<<<<


>>>>>>>> 39
55 55 10
========
N
<<<<<<<<


>>>>>>>> 40
10 40 60
========
N
<<<<<<<<


>>>>>>>> 41
10 51 60
========
N
<<<<<<<<


>>>>>>>> 42
10 65 40
========
S
<<<<<<<<


>>>>>>>> 43
20 30 7
========
N
<<<<<<<<


>>>>>>>> 44
77 3 77
========
N
<<<<<<<<


>>>>>>>> 45
49 49 49
========
N
<<<<<<<<


>>>>>>>> 46
51 51 51
========
N
<<<<<<<<


>>>>>>>> 47
3 3 77
========
N
<<<<<<<<


>>>>>>>> 48
77 3 3
========
N
<<<<<<<<


>>>>>>>> 49
3 77 3
========
S
<<<<<<<<


>>>>>>>> 50
77 77 3
========
N
<<<<<<<<


>>>>>>>> 51
3 77 77
========
N
<<<<<<<<
--->