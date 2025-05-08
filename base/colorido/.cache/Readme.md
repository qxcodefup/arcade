# Paulo Victor e seu sapato colorido

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/colorido/cover.jpg)

## Contexto

Nas brincadeiras de infância, a professora Ingrid adorava pular amarelinha. Um dia, Paulo Victor apareceu com seu sapato colorido e inventou uma nova regra para a brincadeira: alternar os pés a cada pulo até chegar ao "céu". As crianças seguiram sua regra, onde o desafio não era apenas pular, mas também lembrar qual pé usar.

O jogo consiste em alternar os pés (direito ou esquerdo) a cada número, excluindo o número em que caiu a pedra e indo até o número 10, que é chamado de "céu". O jogador começa com um pé definido (direito ou esquerdo) e alterna até o fim.

Se a pedra cair no 8 e o jogador começar com o pé esquerdo, a sequência será:

```py
0e 1d 2e 3d 4e 5d 6e 7d 9e ceu
```

Agora, você deve programar esse jogo de acordo com as regras de Paulo Victor.

### Entrada

- **Primeira linha:** número **N** que caiu a pedra.
- **Segunda linha:** letra **"d"** ou **"e"**, indicando com qual pé o jogador começa (direito ou esquerdo).

### Saída

- Uma lista dos números e o pé correspondente que a criança deve pisar, entre colchetes, até o "céu". Se a pedra caiu no número 10, imprime os números até o 9 sem incluir "céu".

### Restrições

- O valor de **N** é um número inteiro entre **0** e **10**, inclusive.

## Testes

```py
>>>>>>>> INSERT
8
d
======== EXPECT
[ 0d 1e 2d 3e 4d 5e 6d 7e 9d ceu ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
e
======== EXPECT
[ 1e 2d 3e 4d 5e 6d 7e 8d 9e ceu ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
d
======== EXPECT
[ 1d 2e 3d 4e 5d 6e 7d 8e 9d ceu ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
d
======== EXPECT
[ 0d 2e 3d 4e 5d 6e 7d 8e 9d ceu ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
d
======== EXPECT
[ 0d 1e 3d 4e 5d 6e 7d 8e 9d ceu ]
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
10
e
======== EXPECT
[ 0e 1d 2e 3d 4e 5d 6e 7d 8e 9d ]
<<<<<<<< FINISH
```
