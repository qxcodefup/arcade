# L3 - Perto do @medico

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/medico/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup medico`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/medico/cover.jpg)
![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/medico/solver.cpp)

## Motivação

Os soldados formaram uma fila no quartel. Essa fila está representada por um vetor de inteiros. O 1 representa um médico e o 0 soldado de combate. Todo soldado de combate perto de um médico tem mais chances de sobreviver. A pergunta é quantos soldados NÃO estão adjacentes a um médico.  

## Entrada

* 1ª linha:  quantidade de elementos do vetor.
* 2ª linha:  elementos do vetor.

## Saída

* A quantidade de soldados que não tem médico à sua direita ou à sua esquerda.

## Exemplos

``` txt
>>>>>>>>
3
0 0 1
========
1
<<<<<<<<

>>>>>>>>
7
1 0 0 0 1 0 1
========
1
<<<<<<<<
```
