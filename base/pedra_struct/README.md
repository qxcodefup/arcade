# Pedra na lua

![_](assets/cover.jpg)

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

Você deve implementar uma struct para guardar o resultado das jogadas e uma função de busca que retorno o índice do melhor jogador. Adapte a sintaxe para se adequar a sua linguagem de programação.

```go
type Jogada struct {
  p1, p2 int
}

// retorna se a jogada é valida e o pontuação dela
func calc_pontuacao (jogada Jogada) bool, int {
  // todo
}

func procurar_melhor_jogada(jogadas []Jogada) int {
  //todo
}
```

### Entrada

- **1ª linha:** Um número inteiro **'N'** (1 ≤ N ≤ 100), representando o número de competidores.
- **Próximas 'N' linhas:** Cada linha contém dois números inteiros **A** e **B** (1 ≤ A, B ≤ 100), que indicam a distância das pedras **A** e **B** lançadas por cada competidor.

### Saida

- Imprima o índice **(começando em 0)** do competidor vencedor.
- Caso todos os competidores sejam desclassificados, imprima **"sem ganhador"**.
- Caso vários jogadores empatem em primeiro lugar, imprima o que jogou primeiro.

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
