# L1 - @substring - Obter Substrings

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/substring/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup substring`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/substring/cover.jpg)

## Ação

Faça uma função que retorna uma substring dada a String passada, o ÍNDICE da posição inicial e o número de caracteres a serem obtidos. Se os valores de inicio forem inválidos, retorne uma String vazia. Retorne a quantidade de caracteres pedidos ou até terminar a palavra.

## Entrada

* Um texto, no máximo 100 chars.
* O índice do primeiro caractere.
* Quantidade de caracteres.

## Saída

* A substring.

## Exemplos

```txt

>>>>>>>> 01
Coralina
0
4
========
Cora
<<<<<<<<

>>>>>>>> 01
Coralina
1
4
========
oral
<<<<<<<<

>>>>>>>> 02
Power Ranger
4
20
========
r Ranger
<<<<<<<<

```

## Dicas

* Se estiver em Python, faça usando um laço para montar a substring.

* Crie uma variável resposta como String vazia.

* Faca um laço que percorra os caracteres que você precisa da palavra e adicione na String resposta.
