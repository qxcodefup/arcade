# L3 - @josephus  - Cabeças vão rolar

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/josephus/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup josephus`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/josephus/cover.jpg)

## Motivação

Um problema clássico da matemática e da história é o problema de Josephus. Nele, várias pessoas estão disputando e apenas uma será a vencedora.

As pessoas estão em uma fila circular e a cada rodada, a pessoa que está com a espada mata a pessoa da frente e passa a espada para a próxima pessoa viva. O processo continua até que apenas uma pessoa esteja viva.

Imagine N pessoas em círculo, sendo que o primeiro tem o número 1 na camisa e o último o número N.  

Em seguida, um número X é sorteado.

A pessoa X sorteada pega a espada e decapita o companheiro da sua frente. Depois passa a espada para o próximo vivo que decapita o colega da frente.  
  
Assim continue até que só sobre um.

Highlander Mode On!  
  
Atenção: Não faça isso em casa.  
  
## Ação

Remova elementos intercaladamente em uma lista circular.  

### Simulação
  
Cinco pessoas e é sorteado o 3.  

```txt
1 2 3 4 5  : O 3 mata o 4 e a espada vai pro 5.  
1 2 3 5     : O 5 mata o 1 e a espada vai pro 2.  
2 3 5        : O 2 mata o 3 e a espada vai pro 5.  
2 5           : O 5 mata o 2.  
5  
```

Sobra o cinco.  

## Entrada

* O número N de participantes.  
* O número X do participante que inicia o jogo.  

## Saída

* O número do jogador vencedor.

## Exemplos

``` txt

>>>>>>>>
5 
3
========
5
<<<<<<<<

>>>>>>>>
6
6
========
4
<<<<<<<<

```
