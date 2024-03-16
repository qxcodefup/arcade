# L1 - @duelo

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/duelo/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup duelo`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/duelo/cover.jpg)

## Motivação

Considere o seguinte formato de dicionário que deve ser usada em seu programa:  
  
personagem = {"Vida: \*\*\*, "Ataque": \*\*\*}  
  
Usando a definição acima, crie um programa que leia os dados (vida e ataque) de dois personagens, representados por um dicionário do tipo mostrado acima, e implemente a função duelo:  
  
A função duelo recebe como entrada dois dicionários, onde cada um deles representa um personagem. Ela deve imprimir "Personagem 1" se o primeiro personagem venceu o duelo, "Personagem 2" se o segundo personagem venceu o duelo e "Empate" caso nenhum deles tenha vencido o duelo. O duelo consiste em uma sequência de rodadas onde em cada rodada o primeiro personagem ataca o segundo (tira-se da vida do 2o personagem o valor do ataque do 1o personagem) e o segundo ataca o primeiro (tira-se da vida do 1o personagem o valor do ataque do 2o personagem) ao mesmo tempo. O duelo acaba quando pelo menos um dos personagens fica com vida menor ou igual a 0.  
  
## Entrada

- 1a linha - vida do 1o personagem  
- 2a linha - ataque do 1o personagem
- 3a linha - vida do 2o personagem  
- 4a linha - ataque do 2o personagem  

## Exemplos

``` txt
>>>>>>>>
100  
20  
100  
1
========
Personagem 1
<<<<<<<<

>>>>>>>>
100
20
100
1
========
Personagem 1
<<<<<<<<

>>>>>>>>
100
20
1000
10
========
Personagem 2
<<<<<<<<

>>>>>>>>
100
100
1000
10
========
Empate
<<<<<<<<
```
