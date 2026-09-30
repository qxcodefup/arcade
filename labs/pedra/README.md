# Pedra na lua

![_](assets/cover.jpg)

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

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
2
8 11
10 15
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
9 12
11 13
10 11
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
2
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
3
12 15
16 14
10 9
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
1
</pre></td></tr>
</table>
<!-- end -->
