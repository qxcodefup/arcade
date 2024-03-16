# L1 - @valdiskley e a cifra V1

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/valdiskley/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup valdiskley`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/valdiskley/cover.jpg)

## Motivação

Valdisklei chegou em casa com sua tarefinha sobre o alfabeto.

* Mamãe, o que vem depois do p?
* O que? Diz Kleidiane. Valdiskei olha na tabela e vê que é verdade. Depois de alguns instantes de silêncio faz uma pergunta mais difícil:
* Mamãe, cinco letras antes do 'j'?
* Como é? Diz Kleidiane sem entender nada.
* De olhos arregalados, Valdisklei comprova o acerto do 'e'. Obstinado a derrotar sua mãe ele pergunta.
* Mamãe, pensando numa lista circular onde após o z voltamos a ter o 'a', o que temos 24 letras depois do 'm'? Kleidiane, cujas suposições sobre o comportamento do filho flutuavam entre marmota e o mungango fala baixinho.
* Kleizinho, vem cá!
* 'K' grita Valdisklei, é mesmo 'k' mamãe. 24 depois do 'm' é k.
* Mamãe, quando eu crescer quero ser que nem você! E os dois se abraçam celebrando a beleza da dupla ignorância.

## Ação

Dado uma letra e um valor de rotação retorne a letra resultante.

## Entrada

* Letra minuscula entre 'a' e 'z'
* Um valor inteiro positivo ou negativo onde negativo significa um rotação pra frente e negativo uma rotação pra trás.

## Saída

* A letra resultante

### Exemplos

``` txt
>>>>>>>> 01
a
0
========
a
<<<<<<<<

>>>>>>>> 02
b
3
========
e
<<<<<<<<

>>>>>>>> 03
z
2
========
b
<<<<<<<<

>>>>>>>> 04
f
-3
========
c
<<<<<<<<

>>>>>>>> 05
b
-2
========
z
<<<<<<<<
```
