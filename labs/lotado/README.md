# Ônibus dos alunos

![_](assets/cover.jpg)

Quem utiliza transporte público sabe o quão cheio um ônibus pode ficar, muitas vezes desafiando as leis da física. A quantidade de passageiros entrando e saindo é tão grande que o motorista nem consegue contar. Durante uma viagem, o motorista pediu sua ajuda, como estudante de TI, para criar um programa que o auxilie a decidir quando o ônibus está pronto para partir.

Dado um número inteiro C, que representa a capacidade do ônibus prevista pela legislação, o programa deve ler a movimentação M (quantidade de pessoas que entram ou saem) e exibir o estado atual do ônibus. O programa encerra quando for a "hora de partir".

### Entrada

- Um número inteiro **C** indicando a capacidade do ônibus.
- Um número inteiro **M**, positivo ou negativo, representando as movimentações de entrada ou saída de pessoas. Continue lendo até o ônibus partir.

### Saída

- Para cada movimentação, o programa deve imprimir:
  - **"vazio"** - se o ônibus não tiver passageiros.
  - **"ainda cabe"** - se houver passageiros, mas o ônibus não está lotado.
  - **"lotado"** - se a quantidade de passageiros for igual à capacidade do ônibus.
  - **"hora de partir"** - se a quantidade de passageiros alcançar o dobro da capacidade, encerrando o programa.

### Restrições

- **C > 0**.
- Um número positivo representa a entrada de pessoas.
- Um número negativo representa a saída de pessoas.
- Nunca vão sair mais pessoas do que tem no ônibus

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code>
</th><th><code>      Saída      </code>
</th></tr><tr><td valign="top"><pre>
5
0
3
2
4
1
</pre></td><td valign="top"><pre>
vazio
ainda cabe
lotado
lotado
hora de partir
</pre></td></tr></table>

<table><tr><th><code>Entrada</code>
</th><th><code>      Saída      </code>
</th></tr><tr><td valign="top"><pre>
10
10
-10
30
</pre></td><td valign="top"><pre>
lotado
vazio
hora de partir
</pre></td></tr></table>

<table><tr><th><code>Entrada</code>
</th><th><code>      Saída      </code>
</th></tr><tr><td valign="top"><pre>
3
1
1
1
-3
3
3
</pre></td><td valign="top"><pre>
ainda cabe
ainda cabe
lotado
vazio
lotado
hora de partir
</pre></td></tr></table>
<!-- end -->
