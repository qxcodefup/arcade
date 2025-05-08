# Campo de minhocas - OBI 2005

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/minhocas/cover.jpg)

## Motivação

Minhocas são muito importantes para a agricultura e como insumo para produção de ração animal. A Organização para Bioengenharia de Minhocas (OBM) é uma entidade não governamental que promove o aumento da produção, utilização e exportação de minhocas.  

Uma das atividades promovidas pela OBM é a manutenção de uma fazenda experimental para pesquisa de novas tecnologias de criação de minhocas. Na fazenda, a área destinada às pesquisas é de formato retangular, dividida em células quadrangulares de mesmo tamanho.

As células são utilizadas para testar os efeitos, na produção de minhocas, de variações de espécies de minhocas, tipos de terra, de adubo, de tratamento, etc.

Os pesquisadores da OBM mantêm um acompanhamento constante do desenvolvimento das minhocas em cada célula, e têm uma estimativa extremamente precisa da produtividade em cada uma das células.

A figura abaixo mostra um mapa da fazenda, mostrando a produtividade estimada de cada uma das células.  

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/minhocas/minhocas.jpeg)

Um pesquisador da OBM inventou e construiu uma máquina colhedeira de minhocas, e quer testá-la na fazenda.

A máquina tem a largura de uma célula, e em uma passada pelo terreno de uma célula colhe todas as minhocas dessa célula, separando-as, limpando-as e empacotando-as.

Ou seja, a máquina eliminará uma das etapas mais intensivas de mão de obra no processo de produção de minhocas. A máquina, porém, ainda está em desenvolvimento e tem uma restrição: não faz curvas, podendo movimentar-se somente em linha reta.

Decidiu-se então que seria efetuado um teste com a máquina, de forma a colher o maior número possível de minhocas em uma única passada, em linha reta, de lado a lado do campo de minhocas. Ou seja, a máquina deve colher todas as minhocas de uma 'coluna' ou de uma 'linha' de células do campo de minhocas (a linha ou coluna cuja soma das produtividades esperadas das células é a maior possível).
  
## Ação

Escreva um programa que, fornecido o mapa do campo de minhocas, descrevendo a produtividade estimada em cada célula, calcule o número esperado total de minhocas a serem colhidas pela máquina durante o teste, conforme descrito acima.  
  
### Entrada

- A primeira linha da entrada contém dois números inteiros N e M , representando respectivamente o número de linhas (1 ≤ N ≤ 100) e o número de colunas (1 ≤ M ≤ 100) de células existentes no campo experimental de minhocas.
- Cada uma das N linhas seguintes contém M inteiros, representando as produtividades estimadas das células correspondentes a uma linha do campo de minhocas.
- A entrada deve ser lida do dispositivo de entrada padrão (normalmente o teclado).  
  
## Saída

- A saída deve ser composta por uma única linha contendo um inteiro, indicando o número esperado total de minhocas a serem colhidas pela máquina durante o teste.
- A saída deve ser escrita no dispositivo de saída padrão (normalmente a tela).

## Exemplos

``` py
>>>>>>>> INSERT 01
3 5
81 28 240 10 1
40 10 100 240 4
20 180 111 35 2
======== EXPECT
451
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
9 9
2 1 1 1 1 1 1 1 2
1 2 1 1 1 1 1 2 1
1 1 2 1 1 1 2 1 1
1 1 1 2 1 2 1 1 1
1 1 1 1 5 1 1 1 1
1 1 1 2 1 2 1 1 1
1 1 2 1 1 1 2 1 1
1 2 1 1 1 1 1 2 1
2 1 1 1 1 1 1 1 2
======== EXPECT
13
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
10 10
3 5 5 5 5 5 5 5 5 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 1 1 1 1 1 1 1 1 5
3 5 5 5 5 5 5 5 5 5
======== EXPECT
50
<<<<<<<< FINISH
```
