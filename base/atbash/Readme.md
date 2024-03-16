# L3 - Valdiskley e @atbash

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/atbash/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup atbash`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/atbash/cover.jpg)

## Motivação

Valdiskley está apaixonado por criptografia. Descobriu que codificar uma cifra genérica pode executar várias das antigas cifras históricas.

Para conhecer mais cifras históricas veja Atbash, Albam e Atbah.

## Ação  

Vamos fazer uma cifra de substituição genérica. Voce recebe um texto claro e duas palavras de cifragem. Se o caractere do texto claro estiver na palavra de cifragem 1, você deve substitui-lo pelo caractere correspondente da palavra de cifragem 2.

Exemplo. word1 = "abcdefghijlm" word2 = "nopqrtuvwxyz"

Ou seja, todo 'a' do texto deve ser trocado por 'n', e todo 'n' por 'a' Todo 'h' deve ser trocado por 'v', todo 'z' por 'm', etc.

texto "minha chinela" output "zwavn pvwaryn"

Observe que em word1 podem aparecer pontuação, numeros, etc. Se word1 = "123!\*ov" e word2 = "456?-ai" todo '!' vira '?' e vice versa.

## Entrada

* linha 1: minusculos, numeros e pontuacao.
* linha 2: palavra1 de cifragem.
* linha 3: palavra2 de cifragem.

## Saída

* o resultado da criptografia.

## Exemplos

``` txt
>>>>>>>>
Opa amigo xarles 2o
a
x
========
Opx xmigo axrles 2o
<<<<<<<<

>>>>>>>>
minha chinela
abcdefghijlm
nopqrtuvwxyz
========
zwavn pvwaryn
<<<<<<<<
```
