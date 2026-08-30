# Soldados e tamanhos

![_](assets/cover.jpg)

Major General Brigadeiro quer separar os pequenos soldados dos grandes soldados.

Depois de muito discutir com o Cabo Tigre Banguela qual o conceito de pequeno e grande eles chegaram em uma conclusão favorável. Primeiro precisam calcular a média de altura dos soldados. Então, pequenos são todos os que forem menores que a média e grandes são todos os que forem maiores que a média.


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

### Saída

* Média das altura com duas casas decimais.
* Para cada soldado, imprima 'P' se o mesmo tiver altura menor que a média, 'M' se for exatamente igual à média e 'G' se for maior que a média.  

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
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
<!-- load -->
