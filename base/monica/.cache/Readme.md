# L2 - @monica - A idade do filho mais velho - OBI 2019 - F1PJ

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/monica/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup monica`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/monica/cover.jpg)

Dona Mônica é mãe de três filhos que têm idades diferentes. Ela notou que, neste ano, a soma das idades dos seus três filhos é igual à idade dela. Neste problema, dada a idade de dona Mônica e as idades de dois dos filhos, seu programa deve computar e imprimir a idade do filho mais velho.

Por exemplo, se sabemos que dona Mônica tem 52 anos e as idades conhecidas de dois dos filhos são 14 e 18 anos, então a idade do outro filho, que não era conhecida, tem que ser 20 anos, pois a soma das três idades tem que ser 52. Portanto, a idade do filho mais velho é 20.

Em mais um exemplo, se dona Mônica tem 47 anos e as idades de dois dos filhos são 21 e 9 anos, então o outro filho tem que ter 17 anos e, portanto, a idade do filho mais velho é 21.

## Entrada

- A primeira linha da entrada contém um inteiro M representando a idade de dona Mônica.  
- A segunda linha da entrada contém um inteiro A representando a idade de um dos filhos.
- A terceira linha da entrada contém um inteiro B representando a idade de outro filho.

## Saída

- Seu programa deve imprimir uma linha, contendo um número inteiro, representando a idade do filho mais velho de dona Mônica.

Restrições:

- 40 ≤ M ≤ 110
- 1 ≤ A < M
- 1 ≤ B < M
- A !=B

## Exemplo

``` txt
>>>>>>>>
52
14
18
========
20
<<<<<<<<

>>>>>>>>
47
21
9
========
21
<<<<<<<<

```

## Dica

Após a descobrir qual a idade do filho que falta você precisará descobrir qual dos filhos é o mais velho. Um operador ternário pode simplificar a conta. Ele é da seguinte forma:

```c
// x = condicao ? valor_verdade : valor_falso

// leia assim: se 5 for maior que 4, então 5, senão 4.
int maior = (5 > 4) ? 5 : 4; 

// você pode utilizar isso pra pegar o maior valor de duas variáveis

int maior = A > B ? A : B; //pega o maior de A e B
maior = C > maior ? C : maior; //pega o maior de maior e C
```

Em python teríamos assim:

```python
# deixe 5, se 5 for maior que 4, senão deixe 4
int x = 5 if 5 > 4 else 4

# deixe A, se A for maior que B, senão deixe B
int x = A if A > B else B
```
