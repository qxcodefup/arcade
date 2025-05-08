# Converter segundos em h:m:s

![Imagem Tempo em Horas, Minutos e Segundos](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/segundos/cover.jpg)

## Contexto

Em muitas situações do dia a dia, é necessário converter um tempo em segundos
para horas e minutos.

Implemente um programa que recebe um tempo em segundos e transformar no formato:

Hora:Minuto:Segundo

- A hora pode ser obtida pela divisão inteira do tempo por 3600.
- Agora pegue o resto de tempo por 3600, isso é o que sobrou pra minutos e segundos.
- A quantidade de minutos é obtida pela divisão inteira do resto por 60.
- O resto da divisão por 60 é a quantidade de segundos.

### Entrada

- Um único número inteiro representando o tempo em segundos.

### Saída

- Tempo formatado em Horas:Minutos:Segundos

## Testes

```py
>>>>>>>> INSERT 0
3641
======== EXPECT
1:0:41
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 1
22067
======== EXPECT
6:7:47
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 2
9934
======== EXPECT
2:45:34
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 3
30100
======== EXPECT
8:21:40
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 4
22769
======== EXPECT
6:19:29
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 5
19324
======== EXPECT
5:22:4
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 6
15078
======== EXPECT
4:11:18
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 7
32958
======== EXPECT
9:9:18
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 8
30562
======== EXPECT
8:29:22
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 9
28064
======== EXPECT
7:47:44
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 10
9305
======== EXPECT
2:35:5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 11
31745
======== EXPECT
8:49:5
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 12
26881
======== EXPECT
7:28:1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 13
20427
======== EXPECT
5:40:27
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 14
13561
======== EXPECT
3:46:1
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Aqui está uma menira de realizar impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere `:` como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:

```c
int main() {
    printf("%d:%d:%d", hora, minuto, segundo)
}
```

### Programando em: Python

- Aqui estão duas maneiras de realizar a impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere `:` como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:

```py
print(f"{hora}:{minuto}:{segundos}")
```

```py
print("{}:{}:{}".format(hora, minuto, segundos))
```

### Programando em: TypeScript

- Aqui estão duas maneiras de realizar a impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere `:` como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:

```ts
console.log(hora + ":" + minuto + ":" + segundo);
```

```ts
write(hora + ":" + minuto + ":" + segundo);
```

```ts
console.log(`${hora}:${minuto}:${segundo}`);
```

```ts
write(`${hora}:${minuto}:${segundo}`);
```
