# Pegar do pé do vizinho

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/goiabas/cover.jpg)

## Contexto

Chico deseja coletar todas as frutas do quintal vizinho. Porém, sem que seu vizinho o veja.
Para isso, Chico precisa saber exatamente quanto tempo ele irá gastar na coleta.
Sabendo que você é um programador, Chico pediu sua ajuda nessa missão furtiva.

Há três tipos de frutas no quintal: bananas, goiabas e mangas.
Chico tem uma cesta que pode carregar até **C** frutas.
Ele gasta exatamente 1 minuto para ir ao quintal vizinho, encher a cesta e voltar.

Dada a capacidade **C** da cesta, a quantidade de frutas, calcule quantos minutos Chico precisará para coleta. Você pode considerar que há pelo menos uma fruta a ser coletada.

### Entrada

- A primeira linha contém um número inteiro C, que é a capacidade da cesta.
- A segunda linha contém um número inteiro que indica a quantidade de bananas.
- A terceira linha contém um número inteiro que indica a quantidade de goiabas.
- A quarta linha contém um número inteiro que indica a quantidade de mangas.

### Saída

- O programa deve imprimir um número inteiro representando a quantidade de minutos que Chico levará para coletar todas as frutas.

## Testes

```py
>>>>>>>> INSERT conta exata
3
1
1
1
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sobrando duas
10
4
4
4
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT sobrando uma
2
4
2
3
======== EXPECT
5
<<<<<<<< FINISH
```
