# Identificando Ultrons V2

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/disfarce/cover.jpg)

## Motivação

O Ultron copiou os poderes da Mística e está se disfarçando para surpreender os vingadores.  

Como o homem de ferro está muito ocupado lutando, o computador dele vai enviar os dados pra você e você vai informar pra ele quais são pessoas verdadeiras e quais são ultrons disfarçados.

## Ação

Você receberá letras que correspondem ao rastro genético magnético do ultron e o código da pessoa analisada. Se o código da pessoas tiver MAIS de 50% das letras iguais ao código do ultron, ela é ultron.

Se a correspondência for 100% ela é chefe.

Suponha que o código do Ultron é "abcd".

Significa que sempre que a pessoa tiver um desses caracteres, maiúsculo ou minúsculo, conte uma ocorrência.

A pessoa de código "David", tem 3 letras repetidas: 'D', 'a', e 'd'.

Como são 3 ocorrências em 5 letras, isso dá mais de 50%, o que garante que o David é um Ultron.

### Entrada

* A quantidade X de casos de teste ( 1 <= X <= 50) Cada caso de teste contém
* Código ultron com N letras( 1 <= N <=26).  As letras não se repetem dentro do código.
* Código da pessoa.

## Saída

* "pessoa" se a correspondência for menor ou igual a 50%.  
* "ultron" se a correspondência for maior do que 50%.  
* "chefe" se a correspondência for 100%.

## Exemplos

``` py
>>>>>>>> INSERT
4
aeiou
axx
aeiou
bbaa
ultron
ronluo
ultron
rrrrrrrrra
======== EXPECT
pessoa
pessoa
chefe
ultron
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
aeiou
axo
aeiou
bba
======== EXPECT
ultron
pessoa
<<<<<<<< FINISH
```
