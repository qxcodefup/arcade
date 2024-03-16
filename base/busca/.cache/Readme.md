# L2 - @busca Intervalada

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/busca/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup busca`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/busca/cover.jpg)

## Motivação

No jogo de amarelinha é necessário jogar a pedrinha no número certo. Não vale jogar no número maior nem no número menor. Pra ficar mais divertido, dois amigos decidiram reformular as regras do jogo permitindo jogar a pedrinha dentro do intervalo estabelecido. Funcionava, assim:  
  
\- "João, joga, é tua vez. Entre 6 e 8. Vai. Vai maxu! Bora miséria. Deixa de olhar o Zap carniça."  
  
Moral da história: maldito zap que não deixa mais o povo brincar de nada divertido!  

## Ação

Dado uma lista de número e um intervalo, calcule quantas vezes um número cai dentro do intervalo fechado. Em um intervalo fechado os valores inferior e superior também fazem parte do intervalo.  

## Entrada

* 1a linha Quantidade N de elementos do vetor, Limite inferior e limite superior.
* Próximas linhas: N números inteiros.

## Saída

* Números inteiros que estão dentro do intervalo, incluindo os limites.

### Exemplos

``` txt
>>>>>>>>
4 1 3
1
5
3
7
========
2
<<<<<<<<

>>>>>>>>
5 3 5
1
2
4
6
8
========
1
<<<<<<<<

>>>>>>>>
4 3 5
1
2
7
8
========
0
<<<<<<<<
```
