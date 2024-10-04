# L2 - @gomos da cobrinha

![_](cover.jpg)

- Entrada:
  - Q, D, sendo Q a quantidade de "gomos" da cobra e D a direção que pode ser L(left), R(right), U(up), D(down)
  - Seguidas por Q linhas contendo a posição x, y de cada gomo, sendo o primeiro gomo a cabeça. O x aumenta para direita, o y aumenta para baixo.
- Saída:
  - A posição de cada gomo atualizada após a cobra andar uma posição

- Testes

``` py
#INPUT
1 L
5 5
#OUTPUT
4 5
#END

#INPUT
3 L
5 5
6 5
6 6
#OUTPUT
4 5
5 5
6 5
#END

#INPUT
4 U
5 5
6 5
6 6
6 7
#OUTPUT
5 4
5 5
6 5
6 6
#END

#INPUT
1 R
5 5
#OUTPUT
6 5
#END

#INPUT
1 D
5 5
#OUTPUT
5 6
#END

#INPUT
1 U
5 5
#OUTPUT
5 4
#END
```

Você deve implementar a função

```c
struct Pos{
    int x, y
};

void atualizar_cobra(struct Pos cobra[], int size, char direcao);
```
