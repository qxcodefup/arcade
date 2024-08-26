# L2 - @cobra - jogo da cobrinha

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/cobra/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup cobra`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/cobra/cover.jpg)

## Descrição

Marivaldo, mais conhecido como Zé da Carroça, é um agricultor bem sucedido do sertão de Quixadá. Só quando chove é claro. Mas o problema de Marivaldo é outro. Seu filho mais novo, Mavarildo, mais conhecido como Zezim da Carroça, tem uma fixação assustadora em bichos do mato, em especial cobras. O menino ajudado pelo seu irmão Marivanio vara o cercado procurando uma cobra pra bater uma foto no celular do pai e postar nas redes sociais para seus seguidores. O menino entretanto combinou com o pai que se ele ganhasse um celular com joguinhos, ele pararia de tal estripulias. O pai, então, por fraqueza, cedendo à chantagem, comprou um nokia 3310 super conservado na feirinha do centro pela bagatela de uma raspa de rapadura com coco e mamão num prato de coalhada.

O primeiro jogo que Mavarildo instalou foi o jogo da cobrinha. Mas ele é distraído. No meio do jogo, olha pro horizonte e passa vários segundo pensando em cascavéis, pítons e outros bichos. Enquanto, isso, a cobrinha no seu celular vai andando, andando, andando, fazendo loops na tela.

No jogo da cobrinha, quando a cabeça passa do limite direito, ela reaparece do lado esquerdo. Quando passa do limite inferior, reaparece na parte de cima. Imagine o jogo apenas com a cabeça da cobra. A tela é quadrada, formada por N quadrados de largura e N quadrados de altura. O quadrado de posição 0, 0 é o mais em cima na esquerda. O X cresce para direita e o Y para baixo de acordo com a seguinte figura.

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/cobra/pontos.jpg)

A cabeça da cobra pode estar apontada para 4 possíveis direções. \[U\] Up(Cima), \[D\] Down (Baixo), \[L\] Left (Esquerda), \[R\] Right (Direita). Mavarildo se distrai por S segundos. Imagine que cada segundo, a cabeça da cobra se move 1 posição. Você deve fazer um código que calcule a posição da cabeça da cobra dada a dimensão do tabuleiro N, a posição inicial X, Y, a direção da cabeça C e a quantidade de segundos S que Mavarildo passa distraído.

## Entrada

- N, X, Y, C, S, um por linha.

## Saída

- X Y da posição final da cobra

## Restrições

- 0 ≤ N, X, Y, C, S ≤ 1000

## Exemplos

``` txt
>>>>>>>>
10
4
3
R
1
========
5 3
<<<<<<<<

>>>>>>>>
10
4
3
R
8
========
2 3
<<<<<<<<

>>>>>>>>
10
4
5
U
1
========
4 4
<<<<<<<<
```
