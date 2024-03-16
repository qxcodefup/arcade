# L3 - @eh-permutacao

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/eh-permutacao/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup eh-permutacao`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

Verifique se um número é permutacao de outro

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/eh-permutacao/cover.jpg)

## Motivação

Júlia está no mundo da matemática, e tem um problema bem curioso ela
pretende reordenar dígitos de uma determinada sequência para gerar outra
sequência com os mesmos dígitos gerando uma permutação.

Tendo em mãos
uma sequência ordenada qualquer com um número N de elementos distintos,
qualquer outra sequência formada pelos mesmos N elementos reordenados é
chamada de permutação. Exemplo: 123,321,213,231...

Sabendo disso, ajude Júlia nessa missão e retorne se um número é ou não permutação de outro.

### Ação

Dados 2 Inteiros, retornar se ambos são permutação entre si.

## Entrada

- 2 Inteiros , A e B.

## Saída

- "True", se A é permutação de B.
- "False", se A não é permutação de B.

## Testes

``` txt
>>>>>>>>
123 321
========
True
<<<<<<<<

>>>>>>>>
544 45
========
False
<<<<<<<<

>>>>>>>>
12354 45312
========
True
<<<<<<<<
```

@spinosa