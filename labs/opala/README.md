# Opala bebedor

![_](assets/cover.jpg)

Um amigo lhe deu a velocidade média do carro dele em km/h, o tempo da viagem em minutos e o consumo de combustível em litros. Sua tarefa é criar um programa que calcule o desempenho do motor em km por litro.

Para isso, siga os seguintes passos:

- Converta o tempo de minutos para horas (tempo em horas = tempo em minutos / 60).
- Calcule a distância percorrida (distância = velocidade * tempo em horas).
- Calcule o desempenho final (desempenho = distância / consumo).

### Entrada

- Três números, um por linha:
  - Velocidade média em km/h.
  - Tempo da viagem em minutos.
  - Consumo de combustível em litros.

### Saída

- O desempenho do motor em km/l, com duas casas decimais.

### Restrições

- Os valores de entrada (velocidade, tempo, consumo) serão números positivos.
- O consumo será sempre maior que zero.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code>
</th><th><code>  Saída  </code>
</th></tr><tr><td valign="top"><pre>
100
60
10
</pre></td><td valign="top"><pre>
10.00
</pre></td></tr></table>

<table><tr><th><code>Entrada</code>
</th><th><code>  Saída  </code>
</th></tr><tr><td valign="top"><pre>
60
40
10
</pre></td><td valign="top"><pre>
4.00
</pre></td></tr></table>

<table><tr><th><code>Entrada</code>
</th><th><code>  Saída  </code>
</th></tr><tr><td valign="top"><pre>
65
45
2.5
</pre></td><td valign="top"><pre>
19.50
</pre></td></tr></table>
<!-- end -->

### Resolução

[Explicação](https://youtu.be/d0nlVzjtMBE)
