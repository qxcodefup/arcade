# Valentina e Valdiskley

![_](assets/cover.jpg)

## Contexto

Valdiskley é muito nerd e, depois de estudar criptografia, bolou um plano infalível para conquistar o amor da sua vida, Valentina. Seu plano é o seguinte: ele vai escrever várias cartinhas criptografadas para ela e só revelará a senha se ela aceitar namorar com ele.

Sua tarefa é implementar a lógica de criptografia que Valdiskley usará. A operação funciona com base em uma cifra de caracteres, onde o alfabeto é tratado como uma lista circular ('a' vem depois de 'z'). Pense em 'a' como 0, 'b' como 1, e assim por diante, até 'z' como 25.

A cifragem é uma "soma" de caracteres e a decifragem é uma "subtração":

**Exemplos de Soma (+):**

``` py
a + a = a 
a + b = b   
b + a = b 
b + b = c 
c + c = e 
c + b = d 
d + e = h
...

z + a = z
z + b = a
```

**Exemplos de Subtração (-):**

``` py
c - a = c
c - b = b
c - c = a
c - d = z
c - e = y  
```

Você deve criar um programa que receba dois caracteres e uma operação (+ ou -) e retorne o resultado.

### Entrada

- A primeira linha contém um caractere minúsculo.
- A segunda linha contém a operação: **'+'** ou **'-'**.
- A terceira linha contém um segundo caractere minúsculolo.

### Saída

- O caractere resultante da operação de criptografia ou descriptografia.

### Restrições

- Os caracteres de entrada serão sempre letras minúsculas de **'a'** a **'z'**.

## Testes

``` py
>>>>>>>> INSERT
a
+
a
======== EXPECT
a
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
b
+
d
======== EXPECT
e
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
z
+
c
======== EXPECT
b
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
f
-
d
======== EXPECT
c
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
b
-
c
======== EXPECT
z
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
b
+
b
======== EXPECT
c
<<<<<<<< FINISH
```
