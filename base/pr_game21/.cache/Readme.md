# Blackjack 21

Você irá implementar uma versão simplificada do jogo **Blackjack 21**, também conhecido como “vinte e um”, onde um jogador humano enfrenta a mesa (computador). A atividade pode feita em três etapas, com aumento progressivo na complexidade.

Para conhecer melhor o jogo original, consulte:  

- <http://pt.wikipedia.org/wiki/Blackjack>  

![Blackjack](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pr_game21/blackjack.jpg)

---

## Regras Simplificadas

- Cartas de 2 a 10 valem seus próprios valores.
- Valete (J), Dama (Q) e Rei (K) valem 10 pontos.
- Ás (A) pode valer 1 ou 11, o que for mais vantajoso. Se a soma estourar 21, transforme o(s) Ás em 1 até que a soma fique válida ou estoure de vez.

---

## Funcionamento do Jogo

- O jogador começa com **2 cartas**. A mesa começa com **1 carta visível**.
- O jogador pode **pedir carta (1)** ou **parar (2)**. Se estourar 21, perde.
- Quando o jogador para, a mesa joga até vencer ou estourar.
- Em caso de empate de pontos, **a mesa vence**.

Linhas com `>>` indicam que o programa está esperando uma entrada do jogador.

---

## Etapa 1 – Primeira Versão

Implemente uma única rodada entre jogador e mesa, com as seguintes interações:

```text
Iniciando Rodada:
# Mesa recebe  7 - Total  7 [ 7 ]
# Voce recebe  A - Total 11 [ A ]
# Voce recebe  2 - Total 13 [ A 2 ]
Pedir = 1, Parar = 2 
>> 1
# Voce recebe  3 - Total 16 [ A 2 3 ]
Pedir = 1, Parar = 2 
>> 2
# Mesa joga, calcula e exibe o resultado final
```

---

## Etapa 2 – Apostas e Múltiplas Rodadas

Adicione:

- Sistema de apostas com **mínimo de 5 e máximo de 100**.
- Saldo inicial: **100** unidades de dinheiro.
- Se ganhar, recebe **o dobro da aposta**.
- O jogador pode sair a qualquer momento digitando **-1** como valor da aposta.

```text
Rodada 1:
Dinheiro: 100
Digite valor da aposta ou -1 para sair: 25
...
Rodada 2:
Dinheiro: 75
Digite valor da aposta ou -1 para sair: 50
...
```

---

## Etapa 3 – Validação de Entradas

Adicione verificação de entradas em todos os momentos:

- Apostas devem ser numéricas e dentro dos limites.
- Opções de ação devem ser válidas (1 ou 2).
- Tratamento de erros como textos, valores fora do intervalo, negativos etc.

```text
Digite valor da aposta ou -1 para sair: vinte
Valor inválido.
Digite valor da aposta ou -1 para sair: 300
Valor inválido.
...
Pedir = 1, Parar = 2
>> batatas
Valor inválido.
```

---

## Desafio Opcional

Se quiser ir além:

- Adicione **múltiplos jogadores**, com turnos alternados.
- Implemente regras extras como **dobrar aposta** ou **dividir cartas** (“split”).

---

Bom trabalho e divirta-se programando!
