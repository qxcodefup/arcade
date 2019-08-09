## @142 #09_aloc L2 - Vetor de strings com tamanhos variados
## @qxcode

![](capa.jpg)

## Ação

Leia um conjunto de strings e aloque apenas a quantidade de memória necessária para armazenar estas strings. Em seguida ordene e imprima as strings. Somente serão aceitas respostas com alocação dinâmica das strings (verificação manual).

### Entrada

- Linha 1: número de strings.
- Uma linha para cada strings.
A linha começa com um inteiro indicando quantos caracteres tem a string,
seguido de um espaço e a string.
  
### Saída
    - Strings em ordem crescente (ou seja, na ordem do dicionário).
  
## Exemplos

```
>>>>>>>>
6
12 Gilberto Gil
14 Maria Betânia
18 Osvaldo Montenegro
14 Caetano Veloso
6 Djavan
12 Marisa Monte
========
Caetano Veloso
Djavan
Gilberto Gil
Maria Betânia
Marisa Monte
Osvaldo Montenegro
<<<<<<<<
```

## Dicas

- Declare um vetor com n ponteiros para char:
  char* v[n];
- Caso queira alocar este vetor dinamicamente, use um vetor contendo ponteiros para caracteres:
  char **v = (char**) malloc( n * sizeof(char*) );

- Para cada string,
      - leia o tamanho da string;
      - aloque memória para armazenar esta string (lembre de alocar um caractere a mais para o terminador);
      - armazene o endereço da memória alocada em v[i] (elemento do vetor);
      - leia a string e grave em v[i].

- Para ordenar,
      - use a função strcmp para verificar se duas strings consecutivas estão fora de ordem;
      - ao trocar duas strings, troque apenas o endereço de memória (não o conteúdo);
      - note que não é válido trocar o conteúdo, pois as strings não têm o mesmo tamanho.

      char* v[n];
          +--+        +-+-+-+-+-+
          | +-------->|J|O|A|O|0|    v[0] = (char*) malloc(5*sizeof(char));
          +--+        +-+-+-+-+-+
          | +-------->
          +--+        +-+-+-+-+-+-+
          | +-------->|M|A|R|I|A|0|  v[2] = (char*)malloc(6*sizeof(char));
          +--+        +-+-+-+-+-+-+
            .
            .
            .
          +--+
          |  |
          +--+

#