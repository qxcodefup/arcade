# Pensando letras como números

![_](assets/cover.jpg)

Três irmãos da Califórnia, um distrito da cidade de Quixadá, estavam debaixo do pé de jambo entediados quando iniciam o seguinte diálogo.

```txt
- Pedro: Bó brincar de adedonha?
- Tiago: Qual tema?
- João: Adjetivos que mamãe usa lá em casa.
- Pedro: Xou!
- Pedro, Tiago e João: Adedoooooooooonha!
- 10, 9, 8 dedos: A, B, C, D, ............., A
- Abestado
- Azilado
- Abufelado
- Aloprado
- Abirobado  
- Azucrinado
- Amufinado
- Arretado
- Avexado
- Arrombado
- Tiago: Perdeu, mamãe nunca te chamou disso!
- João: mas ontem ela disse "o ladrão deixou o cadeado todo arrombado".
```

Leia a soma dos dedos dos três irmãos e diga qual a letra L que será utilizada no jogo.

### Entrada

- Um inteiro representando a soma dos dedos dos 3 irmãos

### Saída

- A letra correspondente ou "Joguem de novo" se ninguém colocou nenhum dedo.

### Limites

0 <= SOMA (D1 + D2 + D3) <= 100.

## Exemplos

<!-- load tests.toml --tests 6 -->
```py
>>>>>>>> INSERT
0 
======== EXPECT
joguem de novo
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
======== EXPECT
a
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2
======== EXPECT
b
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
26
======== EXPECT
z
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
27
======== EXPECT
a
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
28
======== EXPECT
b
<<<<<<<< FINISH
```
<!-- load -->

[Explicação](https://youtu.be/qKkmrLZfYcA)
