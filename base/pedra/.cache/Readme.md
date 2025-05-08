# Pedra na lua

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pedra/cover.jpg)

## Contexto

Em uma competição interplanetária de arremesso de pedras na lua, os competidores devem demonstrar precisão e força. Cada participante possui duas pedras:

- A **pedra A** e a **pedra B**.
- Para ser considerado um lançamento válido, ambas as pedras devem alcançar pelo menos 10 metros.
- Se alguma das pedras ficar abaixo dessa marca, o competidor será desclassificado.
- A pontuação de cada competidor é a diferença absoluta entre as distâncias das duas pedras. **Quanto menor a diferença, melhor a pontuação**.
- O competidor com a menor pontuação vence.
- Em caso de empate na pontuação, vence o competidor com o menor índice (ordem de entrada).
- Se todos os competidores forem desclassificados, **não haverá ganhador**.

Você deve escrever um programa que identifique o competidor vencedor.

### Entrada

- **1ª linha:** Um número inteiro **'N'** (1 ≤ N ≤ 100), representando o número de competidores.
- **Próximas 'N' linhas:** Cada linha contém dois números inteiros **A** e **B** (1 ≤ A, B ≤ 100), que indicam a distância das pedras **A** e **B** lançadas por cada competidor.

### Saida

- Imprima o índice **(começando em 0)** do competidor vencedor.
- Caso todos os competidores sejam desclassificados, imprima **"sem ganhador"**.

### Restrições

- Cada competidor arremessa duas pedras, cujas distâncias estão entre **1** e **100 metros**.
- Todos os competidores que lançarem **qualquer** pedra a **menos de 10 metros** são automaticamente **desclassificados**.

## Testes

```py
>>>>>>>> INSERT
2
8 11
10 15
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
9 12
11 13
10 11
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
12 15
16 14
10 9
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
12 15
20 23
10 9
35 35
======== EXPECT
3
<<<<<<<< FINISH
```

### Dicas

- Utilize a função `abs()` para calcular a diferença absoluta entre as distâncias das pedras A e B.
- Para resolver o problema de desclassificação, verifique se ambos os arremessos são **maiores ou iguais a 10 metros**.
- Caso múltiplos competidores tenham a mesma pontuação, escolha aquele que tiver o **menor índice**.
