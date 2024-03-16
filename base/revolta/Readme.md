# L2 - @revolta em Portugal

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/revolta/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup revolta`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/revolta/cover.jpg)

## Motivação

Um grupo de portugueses planejava fazer uma revolução armada.

* Pois, pois Manoel, como pretendes tomar de assalto a praça?
* Ora, bolas Joaquim, estamos nós a chegar por lá. Vamos estar a retirar nossas espadas de nossas bainhas e espada-lo-emos todos!
* Ótima ideia. Vamos pois, ora bolas!

## Ação

Verifique se o grupo de Manoel ou de Joaquim conseguirá vencer essa batalha. Dado um vetor de números, os números ímpares representam os soldados e os números pares representam os rebeldes infiltrados. Some as forças e descubra qual dos dois grupos é mais forte.

## Entrada

* 1ª linha: tamanho do vetor (1 a 50)

* Próximas linhas: valor dos números, cada número entre 1 e 50.

## Saída

* "soldados" se os soldados(impares) somados são mais fortes.

* "rebeldes" se os rebeldes(pares) somados são mais fortes.

* "empate" se ambas forças são iguais e todos morrerão.

### Exemplos

``` txt
>>>>>>>>
2
1
2
========
rebeldes
<<<<<<<<

>>>>>>>>
3
1
2
1
========
empate
<<<<<<<<

>>>>>>>>
2
2
3
========
soldados
<<<<<<<<

>>>>>>>>
4
1
2
3
1
========
soldados
<<<<<<<<

>>>>>>>>
5
1
2
3
1
4
========
rebeldes
<<<<<<<<
```
