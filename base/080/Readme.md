## #04_vetores L3 - Baruel Ruel trocando figurinhas!


## Motivação

![](__capa.jpg)

Baruel Ruel tem muitas figurinhas do álbum de futebol. Ele estava indo para uma feira de troca de figurinhas quando tropeçou e misturou as figurinhas todas. Ele não sabe mais quais figurinhas estão repetidas e tem pra trocar, nem quais estão faltando pra completar a coleção. Ajude Baruel Ruel com essa tarefa.

\[DS\]

### Entrada

- É composta da quantidade de figurinhas no álbum e da lista de figurinhas de Baruel de forma ORDENADA. A saída deve ser uma linha contendo as figurinhas repetidas e os números da figurinhas que faltam. Se não houver figurinhas repetidas ou não faltar nenhuma escreva 'N'.  
**Ex:**  
linha 1: quantidade de figurinha total do album(1 a 50)  
linha 2: quantidade de figurinhas que Baruel possui (1 a 100)  
linha 3: números das figurinhas de forma ORDENADA.

### Saída
- linha 1: as figuras que ele tem pra trocar ou 'N' se nenhuma  
- linha 2: os números das figuras que faltam ou 'N' se nenhuma

## Exemplos

```
>>>>>>>>
5
8
1 1 1 1 2 2 3 5
========
1 1 1 2
4
<<<<<<<<

>>>>>>>>
2
4
1 1 2 2
========
1 2
N
<<<<<<<<

>>>>>>>>
5
2
4 5
========
N
1 2 3
<<<<<<<<

>>>>>>>>
5
5
1 1 2 3 3
========
1 3
4 5
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
  Função bool verificar_next(int i, int sizeFig, int vet[sizeFig]){
    Laço inicia a = i, adiciona 1 enquanto a menor que sizeFig{
      Se( Vet[a] diferente de -1)
        Retorne true
    }
    Retorne false
  }

  Leia Size
  Leia NumFigurinhas
  Crie um vetor Album com tamanho Size
  Crie um vetor Figurinhas com tamanho NumFigurinhas
  Laço que inicia i = 1 e adiciona mais 1 enquanto i menor que Size{
    Album na posição[i - 1] = i  // isso vai criar um vetor em ordem crescente iniciando em 1
  }
  Laço que vai ler os elementos e guarda no vetor Figurinhas
  Crie um inteiro Tem = 0
  Laço que inicia i = 0, adiciona 1 enquanto i menor que NumFigurinhas{
    Laço que inicia x = 0, adiciona 1 enquanto i menor que size{
      Se Figurinhas na posição i for igual a Algum na posição x{
        Tem recebe +1
        Album na posição x = -1;
        Figurinhas na posição i = -1;
      }
    }
  }
  Crie booleano NaoTem = true;
  Laço que inicia i = 0, adiciona 1 enquanto i menor que NumFigurinhas{
    Se(Figurinhas na posição i for diferente de -1){
      Mostre Figurinhas na posição i
      NaoTem =  false;
      Se(verifica_next(i + 1, nFigurinhas, figurinhas)){
        Mostre " "; // espaço
      }
    }
  }
  Se (NaoTem == true){
    Mostre "N"
  }
  Quebri a linha
  Crie booleano NaoFalta = true
  Laço que inicia i = 0, adiciona 1 enquanto i menor que size{
    Se(Album na posição i for diferente de -1){
      Mostre Album na posição i
      NaoFalta =  false;
      Se(verifica_next(i + 1, Size, Album)){
        Mostre " "; // espaço
      }
    }
  }
  Se (NaoFalta == true){
    Mostre "N"
  }

```
#
