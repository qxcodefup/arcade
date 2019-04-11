## @0028 #2_sel L2 - Cadê a cabeça da cobra
## @qxcode

![Cobrinha](capa.jpg)

### Descrição

Marivaldo, mais conhecido como Zé da Carroça, é um agricultor bem sucedido do sertão de Quixadá. Só quando chove é claro. Mas o problema de Marivaldo é outro. Seu filho mais novo, Mavarildo, mais conhecido como Zezim da Carroça, tem uma fixação assustadora em bichos do mato, em especial cobras. O menino ajudado pelo seu irmão Marivanio vara o cercado procurando uma cobra pra bater uma foto no celular do pai e postar nas redes sociais para seus seguidores. O menino entretanto combinou com o pai que se ele ganhasse um celular com joguinhos, ele pararia de tal estripulias. O pai, então, por fraqueza, cedendo à chantagem, comprou um nokia 3310 super conservado na feirinha do centro pela bagatela de uma raspa de rapadura com coco e mamão num prato de coalhada.







O primeiro jogo que Mavarildo instalou foi o jogo da cobrinha. Mas ele é distraído. No meio do jogo, olha pro horizonte e passa vários segundo pensando em cascavéis, pítons e outros bichos. Enquanto, isso, a cobrinha no seu celular vai andando, andando, andando, fazendo loops na tela.

No jogo da cobrinha, quando a cabeça passa do limite direito, ela reaparece do lado esquerdo. Quando passa do limite inferior, reaparece na parte de cima. Imagine o jogo apenas com a cabeça da cobra. A tela é quadrada, formada por N quadrados de largura e N quadrados de altura. O quadrado de posição 0, 0 é o mais em cima na esquerda. O X cresce para direita e o Y para baixo de acordo com a seguinte figura.

![Pontos na tela](pontos.jpg)

A cabeça da cobra pode estar apontada para 4 possíveis direções. \[U\] Up(Cima), \[D\] Down (Baixo), \[L\] Left (Esquerda), \[R\] Right (Direita). Mavarildo se distrai por S segundos. Imagine que cada segundo, a cabeça da cobra se move 1 posição. Você deve fazer um código que calcule a posição da cabeça da cobra dada a dimensão do tabuleiro N, a posição inicial X, Y, a direção da cabeça C e a quantidade de segundos S que Mavarildo passa distraído.

### Entrada

N, X, Y, C, S, um por linha.

### Saída

X Y da posição final da cobra

### Restrições

* 0 ≤ N, X, Y, C, S ≤ 1000

### Exemplos

```

>>>>>>>>
10
4
3
R
1
========
5 3
<<<<<<<<


>>>>>>>>
10
4
3
R
8
========
2 3
<<<<<<<<


>>>>>>>>
10
4
5
U
1
========
4 4
<<<<<<<<

```

<!---

>>>>>>>>

20
6
12
L
21
========
5 12
<<<<<<<<


>>>>>>>>

7
5
6
D
13
========
5 5
<<<<<<<<


>>>>>>>>

11
9
10
R
36
========
1 10
<<<<<<<<


>>>>>>>>

16
8
7
L
32
========
8 7
<<<<<<<<


>>>>>>>>

15
2
13
D
35
========
2 3
<<<<<<<<


>>>>>>>>
14
0
10
U
19
========
0 5
<<<<<<<<


>>>>>>>>

12
1
4
D
42
========
1 10
<<<<<<<<


>>>>>>>>

14
11
5
D
34
========
11 11
<<<<<<<<


>>>>>>>>

22
4
20
D
20
========
4 18
<<<<<<<<


>>>>>>>>

18
10
1
R
6
========
16 1
<<<<<<<<


>>>>>>>>

18
14
14
R
31
========
9 14
<<<<<<<<


>>>>>>>>

10
5
4
D
36
========
5 0
<<<<<<<<


>>>>>>>>

10
6
9
L
7
========
9 9
<<<<<<<<


>>>>>>>>

9
0
0
L
14
========
4 0
<<<<<<<<


>>>>>>>>

12
2
8
D
0
========
2 8
<<<<<<<<


>>>>>>>>

12
0
0
U
38
========
0 10
<<<<<<<<


>>>>>>>>

9
6
2
U
49
========
6 7
<<<<<<<<


>>>>>>>>

17
16
15
R
39
========
4 15
<<<<<<<<


>>>>>>>>

17
12
4
U
39
========
12 16
<<<<<<<<


>>>>>>>>

20
10
14
U
17
========
10 17
<<<<<<<<


>>>>>>>>

6
5
2
L
42
========
5 2
<<<<<<<<


>>>>>>>>

17
0
8
R
36
========
2 8
<<<<<<<<


>>>>>>>>

6
3
5
R
19
========
4 5
<<<<<<<<


>>>>>>>>

5
4
1
L
47
========
2 1
<<<<<<<<


>>>>>>>>

16
1
3
L
27
========
6 3
<<<<<<<<


>>>>>>>>

12
4
5
L
36
========
4 5
<<<<<<<<


>>>>>>>>

10
6
3
D
24
========
6 7
<<<<<<<<


>>>>>>>>

13
5
0
L
3
========
2 0
<<<<<<<<


>>>>>>>>

24
6
0
R
15
========
21 0
<<<<<<<<


>>>>>>>>

5
4
1
D
18
========
4 4
<<<<<<<<


>>>>>>>>

10
6
1
L
5
========
1 1
<<<<<<<<


>>>>>>>>

24
16
20
R
41
========
9 20
<<<<<<<<


>>>>>>>>

15
13
10
U
14
========
13 11
<<<<<<<<


>>>>>>>>

9
7
5
R
43
========
5 5
<<<<<<<<


>>>>>>>>

16
3
13
D
36
========
3 1
<<<<<<<<


>>>>>>>>

17
9
9
R
25
========
0 9
<<<<<<<<


>>>>>>>>

12
6
1
U
45
========
6 4
<<<<<<<<


>>>>>>>>

14
11
1
L
18
========
7 1
<<<<<<<<


>>>>>>>>

13
6
12
R
29
========
9 12
<<<<<<<<


>>>>>>>>

21
13
4
D
13
========
13 17
<<<<<<<<


>>>>>>>>

23
14
21
R
18
========
9 21
<<<<<<<<


>>>>>>>>

13
4
0
L
17
========
0 0
<<<<<<<<


>>>>>>>>

21
14
0
U
33
========
14 9
<<<<<<<<


>>>>>>>>

15
14
7
L
44
========
0 7
<<<<<<<<


>>>>>>>>

15
5
14
U
36
========
5 8
<<<<<<<<


>>>>>>>>

14
12
4
R
47
========
3 4
<<<<<<<<


>>>>>>>>

12
3
4
R
11
========
2 4
<<<<<<<<


>>>>>>>>

7
2
6
D
46
========
2 3
<<<<<<<<


>>>>>>>>

13
8
1
D
10
========
8 11
<<<<<<<<

--->