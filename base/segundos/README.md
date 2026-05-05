# Converter segundos em h:m:s

![Imagem Tempo em Horas, Minutos e Segundos](assets/cover.jpg)

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

## Exemplos

<!-- load tests.toml --tests 2 -->
```py
>>>>>>>> INSERT
3641
======== EXPECT
1:0:41
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
22067
======== EXPECT
6:7:47
<<<<<<<< FINISH
```
<!-- load -->
