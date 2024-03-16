# L1 - @calculadora Numérica

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/calculadora/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup calculadora`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/calculadora/cover.jpg)

## Motivação

Quem nunca numa prova de matemática ou física no ensino médio escutou um coleguinha dizer: "Professor, pode usar a calculadora?" que atire a primeira pedra.

### Ação

Leia dois números inteiros e um símbolo e imprima o resultado.

## Entrada

* Leia do usuário dois valores inteiros e um operador em caractere ('+', '-', '\*' ou '/')

## Saída

* Imprima o resultado da operação em inteiro. Nunca haverá divisão por 0.

## Exemplos

``` txt
>>>>>>>>
5
2
/
========
2
<<<<<<<<

>>>>>>>>
3
5
+
========
8
<<<<<<<<

>>>>>>>>
7
9
/
========
0
<<<<<<<<
```

## Ajuda

Observação para quem está programando em **C** ou **C++**:

* O `operador` deve ser recebido em uma variável do tipo `char`. Exemplo:
  
```c
    // código em c
    char operador = 0;
    scanf(" %c", &operador);
```

```cpp
    // código em c++
    char operador { };
    cin >> operador;
```

[Resolução](https://www.youtube.com/watch?v=W5JJ_NccMkM)
