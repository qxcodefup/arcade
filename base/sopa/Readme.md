# L3 - @sopa de coelho

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/sopa/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup sopa`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sopa/cover.jpg)

## Motivação

Zé da Carroça comprou um casal de coelhos. Ele gosta muito de sopa de coelho. Muito mesmo. Só tem uma coisa maior em Zé da Carroça do que a vontade de tomar sopa de coelho. É o sonho de ser um Cuniculturista vendendo carne de coelho para todo sertão central. Ele ainda está decidindo se come o casal de coelhos na sopa de hoje ou espera até que eles procriem o suficiente pra que Marivaldo fique rico.

Estudando um pouco ele descobriu uma regra interessante criado por Leonardo de Pisa no ano de 1200.

1\. No primeiro mês nasce somente um casal;
2\. Casais amadurecem sexualmente após o segundo mês de vida;
3\. Não há problemas genéticos no cruzamento consanguíneo;
4\. Todos os meses, cada casal dá à luz a um novo casal;

![Sopa](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sopa/sopa.jpg)

Por incrível que pareça, essas regras geram a seguinte sucessão de números: 1, 1, 2, 3, 5, 8, 13, ...

Leonardo de Pisa também é conhecido como Fibonacci. Se quiser entender melhor como se chega na sequência veja : https://brasilescola.uol.com.br/matematica/sequencia-fibonacci.htm

Dado o número N, imprima o enésimo termo da série.

Sugestão: Não use recursão. Observe que o resultado não cabe em um inteiro, se estiver programando em c, use um long int.

## Entrada

- N, um por linha.

## Saída

- O enésimo termo de Fibonacci.

## Restrições

* 0 ≤ X ≤ 50

## Exemplos

``` txt
>>>>>>>>
1
========
1
<<<<<<<<

>>>>>>>>
6
========
8
<<<<<<<<

>>>>>>>>
50
========
12586269025
<<<<<<<<
```
