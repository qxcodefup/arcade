# Procurando melhor pizzaria

![_](cover.jpg)

## Contexto


Davi adora comer pizza. Mas ele está preocupado porque a qualidade da pizza feita pela maioria dos restaurantes em Quixadá está piorando. As últimas pizzas pedidas por ele não estavam tão boas. Davi está com muita fome e quer comer pizza. Mas ele está indeciso sobre o restaurante de onde deveria pedir. Como sempre, ele pede ajuda a Edvadlo.

Edvaldo sugere que Davi atribua alguns pontos a cada restaurante e, em seguida, escolha o restaurante com o máximo de pontos. Se mais de um restaurante tiver os mesmos pontos, Davi pode escolher aquele com o menor nome na ordem lexicográfica.

Davi atribuiu pontos a todos os restaurantes, mas não consegue descobrir qual restaurante satisfaz os critérios de Edvaldo. Você pode ajudá-lo?

**Dicas de Implementação**
Crie uma `struct` para representar um `Restaurante` e faça uma função que receba a lista de restaurantes e retorne o nome do vencedor.

### Entrada

- A primeira linha contém um número inteiro **N**, o total de restaurantes.
- As **N** linhas seguintes contêm o nome do restaurante e sua pontuação, separados por um espaço.

### Saída

- O nome do restaurante que Davi deve escolher.

## Restrições

- O número total de restaurantes **N** estará entre **1** e **100.000**.
- Os pontos de cada restaurante estarão entre **1** e **1.000.000**.
- O nome do restaurante terá no máximo **20** caracteres, contendo apenas letras minúsculas e sem espaços.

## Exemplo de Entrada

``` py
>>>>>>>> INSERT
3
fornoalenha 108
burguery 145
qsabor 49
======== EXPECT
burguery
<<<<<<<< FINISH
```
