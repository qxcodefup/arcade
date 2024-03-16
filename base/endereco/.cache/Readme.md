# L2 - Função que retorna vários valores por @endereco

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/endereco/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup endereco`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/endereco/cover.jpg)

## Motivação

Quando precisamos que uma função retorne vários valores, temos duas opções:

1) Retornar uma estrutura, onde cada campo armazena um valor que desejamos retornar na função; ou

2) Passar variáveis por referência, que receberão os valores que desejamos retornar.

Neste exemplo vamos considerar o 2o caso (passar resultados por referência).
Implemente a função 'converte_tempo', que recebe o tempo em segundos e retorna em 3 variáveis passadas por referência este tempo convertido em horas, minutos e segundos.

O arquivo de envio já terá parte do código preenchido, veja abaixo:

```C
#include <stdio.h>

// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.
void converte_tempo(int segundos, int *hor, int *min, int *seg){

}

int main(){
   int tempo, h, m, s;
   scanf("%d", &tempo);

   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.

   printf("%d:%d:%d", h, m, s);
}
```

## Ação

Você deverá:

- Implementar a função 'converte_tempo'.
- Chamar a função 'converte_tempo' dentro da função 'main'.

## Exemplos

``` txt
>>>>>>>>
7384
========
2:3:4
<<<<<<<<

>>>>>>>>
3601
========
1:0:1
<<<<<<<<

>>>>>>>>
60
========
0:1:0
<<<<<<<<
```
