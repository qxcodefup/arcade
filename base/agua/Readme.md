# L3 - Abastecimento de @agua

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/agua/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup agua`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/agua/cover.jpg)

## Motivação

Para amenizar os efeitos da seca, o prefeito contratou uma quantidade **Q** de caminhões-pipa para abastecer uma quantidade **N** de casas em uma certa rua.

Nessa rua, as casas são todas vizinhas e são numeradas de 0,1,2...**N**\-1.  
Cada caminhão tem uma rota (ponto **A** e **B**) e uma quantidade de água **L** que deve abastecer em cada casa. Ou seja, um caminhão começa na casa **A**, e acrescenta  a quantidade **L** de água em cada casa até chegar em **B** (inclusive).

O prefeito quer saber exatamente como a distribuição de água está sendo feita, então ele pediu sua ajuda para relatar a quantidade de água de cada casa.

## Ação

Imprima o vetor com a quantidade de água que cada casa foi abastecida.

## Entrada

* **N** (quantidade de casas) e **Q** (quantidade decaminhões)

* Nas próximas **Q** linhas: o ponto **A**, **B** e a quantidade inteira **L** de água de cada caminhão.

## Saída

* Vetor com o total de água de cada casa.

## Exemplos

``` txt
>>>>>>>>
5 1
0 2 1  
========
1 1 1 0 0
<<<<<<<<
  
>>>>>>>>
5 2
0 2 1
2 4 2
========
1 1 3 2 2
<<<<<<<<

>>>>>>>>
10 5
1 4 5
5 8 2
0 9 1
8 9 3
4 8 2
========
1 6 6 6 8 5 5 5 8 4
<<<<<<<<

>>>>>>>>
4 4
0 0 1
1 1 2
2 2 3
3 3 4  
========
1 2 3 4
<<<<<<<<
```
