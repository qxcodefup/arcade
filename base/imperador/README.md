# Deu a louca no imperador

![_](assets/cover.jpg)

## Contexto

Na Roma antiga, o imperador Cyzar, cansado dos combates 1x1 no Coliseu, resolveu fazer uma única e gigante batalha. Ele juntou todos os Gladiadores (**G**) e Condenados à morte (**C**) na arena para um espetáculo sangrento.

Os Gladiadores, que podiam se defender, tinham mais chances de vitória. Já os Condenados entravam desarmados. Para equilibrar, Cyzar definiu regras de pontuação. Às vezes, para "esquentar" as coisas, ele soltava um Leão (**L**) na arena!

Sua tarefa é determinar o vencedor com base na configuração da arena, representada por uma matriz.

**Regras do cálculo:**

- Cada **G** vale **2** pontos.
- Cada **C** vale **1** ponto.
- **Exceção:** Um **C** posicionado na diagonal secundária da matriz é mais valente e tem seu valor dobrado, valendo 2 pontos.
- **Reviravolta:** Se um **L** (Leão) aparecer, toda a linha e a coluna onde ele se encontra são aniquiladas, e ninguém naquela linha ou coluna pontua.

Some os pontos e determine o vencedor.

### Entrada

- A primeira linha contém um número inteiro **N**, representando o tamanho da matriz quadrada (N x N).
- As **N** linhas seguintes contêm os caracteres que preenchem a matriz, separados por espaços.
  - **G** para Gladiadores
  - **C** para Condenados a morte
  - **L** para Leão.

### Saída

- **"Gladiadores"** se a pontuação deles for maior.
- **"Condenados a morte"** se a pontuação deles for maior.
- **"Ninguem"** se houver um empate.

### Restrições

- A matriz será quadrada.
- Haverá no máximo um **L** (Leão) na arena.

## Testes

``` py
>>>>>>>> INSERT
3
G L G
C C C
C G G
======== EXPECT
Condenados a morte
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
G G C
C C C
G C C
======== EXPECT
Condenados a morte
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
C C G
C G C
G C C
======== EXPECT
Ninguem
<<<<<<<< FINISH
```
