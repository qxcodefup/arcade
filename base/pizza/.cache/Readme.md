# Procurando melhor pizzaria

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pizza/cover.jpg)

Davi adora comer pizza. Mas ele está preocupado porque a qualidade da pizza feita pela maioria dos restaurantes em Quixadá está piorando. As últimas pizzas pedidas por ele não estavam tão boas. Davi está com muita fome e quer comer pizza. Mas ele está indeciso sobre o restaurante de onde deveria pedir. Como sempre, ele pede ajuda a Edvadlo.

Edvaldo sugere que Davi atribua alguns pontos a cada restaurante e, em seguida, escolha o restaurante com o máximo de pontos. Se mais de um restaurante tiver os mesmos pontos, Davi pode escolher aquele com o menor nome na ordem lexicográfica.

Davi atribuiu pontos a todos os restaurantes, mas não consegue descobrir qual restaurante satisfaz os critérios de Edvaldo. Você pode ajudá-lo?

### Entrada

A primeira linha possui N, o número total de restaurantes.

As próximas N linhas contêm o nome do restaurante e os pontos atribuídos por Davi, separados por um espaço. O nome do restaurante não tem espaços, é apenas em letras minúsculas e não terá mais de 20 caracteres.

## Saída

Imprima o nome do restaurante que Joey deve escolher.

## Restrições

- 1 <= N <= 10^5
- 1 <= pontos <= 10^6

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

## Sugestão

Crie a struct Restaurante e faça uma função que receba a lista de restaurantes e retorne o resultado.
