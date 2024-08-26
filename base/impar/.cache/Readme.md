# L2 - @impar ou par - OBI 2016 - F1P1

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/impar/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup impar`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/impar/cover.jpg)

## Motivação

Dois amigos, Alice e Bob, estão jogando um jogo muito simples, em que um deles grita ou "par" ou "ímpar" e o outro imediatamente responde ao contrário, respectivamente "ímpar" ou "par". Em seguida, ambos exibem ao mesmo tempo uma mão cada um, em que alguns dedos estão estendidos e outros dobrados. Então eles contam o número total de dedos estendidos. Se a soma for par, quem gritou "par" ganha. Se a soma for ímpar, quem gritou "ímpar" ganha. Por exemplo, suponhamos que a Alice gritou "par" e o Bob respondeu "ímpar". Em seguida, Alice não deixou nenhum dos seus dedos estendidos, ao passo que Bob deixou três dedos estendidos. A soma então é três, que é ímpar, portanto Bob ganhou. Seu programa deve determinar quem ganhou, tendo a informação de quem gritou par e o número de dedos estendidos de cada um.

## Entrada

- A entrada contém três linhas, cada uma com um número inteiro, P, D\_1 e D\_2, nesta ordem. Se P = 0 então Alice gritou "par", ao passo que se P=1 então Bob gritou "par". Os números D\_1 e D\_2 indicam, respectivamente, o número de dedos estendidos da Alice e do Bob.

## Saída

- Seu programa deverá imprimir uma única linha, contendo um único número inteiro, que deve ser 0 se Alice foi a ganhadora, ou 1 se Bob foi o ganhador.

## Restrições

- P = 0 ou P = 1
- 0 ≤ D\_1 ≤ 5
- 0 ≤ D\_2 ≤ 5

## Exemplos

``` txt
>>>>>>>>
0
0
3
========
1
<<<<<<<<

>>>>>>>>
1
0
3
========
0
<<<<<<<<

>>>>>>>>
0
1
5
========
0
<<<<<<<<
```
