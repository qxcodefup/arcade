# Soldados e tamanhos

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pmg/cover.jpg)

## Motivação

Major General Brigadeiro Pretinho quer separar os pequenos soldados dos grandes soldados.

Depois de muito discutir com o Cabo Tigre Banguela qual o conceito de pequeno e grande eles chegaram em uma conclusão favorável.

Primeiro precisam calcular a média de altura dos soldados.

Então, pequenos são todos os que forem menores que a média e grandes são todos os que forem maiores que a média.

## Ação

Leia um vetor de inteiros, calcule a média e imprima para cada valor do vetor se ele é menor(P), igual(M) ou maior(G) que a média.  
  
Sugestão: Faça um função que calcula a média:  

```c
double media(int vet[], int qtd){  
    //seu código aqui
}  
```

### Entrada

* Quantidade de soldados.
* Altura em double de cada soldado.  

## Saída

* Média das altura com duas casas decimais.
* Para cada soldado, imprima 'P' se o mesmo tiver altura menor que a média, 'M' se for exatamente igual à média e 'G' se for maior que a média.  

## Exemplos

``` py
>>>>>>>> INSERT
1
1.30
======== EXPECT
1.30
M
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
1.70 1.60
======== EXPECT
1.65
G P
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
3
1.70 1.60 1.8
======== EXPECT
1.70
M P G
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
1.00 1.70 1.60 1.80
======== EXPECT
1.53
P G G G
<<<<<<<< FINISH
```

## Dicas

Você pode começar criando um vetor de tamanho N e atribuindo a ele todos os valores.
Depois você pode percorrer e somar todos os elementos para descobrir o valor total, dividindo por N terá a média. Logo depois é só percorrer o vetor verificando se cada elemento é menor igual ou maior que a média.
