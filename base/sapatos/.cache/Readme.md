# Sapatos para 2 e 3

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sapatos/cover.jpg)

## Contexto

Imagine que você tem uma pilha de sapatos e deseja separá-los em pares, mas também quer garantir que esses pares sejam especiais: só aqueles divisíveis por 2 e por 3. Vamos resolver isso somando todos os números que atendem a esses critérios entre dois valores dados.

Dado dois números inteiros **A** e **B**, some todos os números que são divisíveis por **2** e por **3** entre **A** e **B**, inclusive **A** e **B**.

### Entrada

- Dois números inteiros **A** e **B**, sendo **B** maior que **A**.

### Saída

- A soma de todos os números divisíveis por **2** e por **3** que estão entre **A** e **B**, inclusive **A** e **B**.
- Se **A** for maior que **B**, imprima **"invalido"**.

## Testes

```py
>>>>>>>> INSERT 01
1
20
======== EXPECT
36
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
1
10
======== EXPECT
6
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
10
1
======== EXPECT
invalido
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 04
6
6
======== EXPECT
6
<<<<<<<< FINISH
```

## Dicas

Para verificar se um número é divisível tanto por 2 quanto por 3, utilize o operador de módulo `%` em suas condições de checagem.
