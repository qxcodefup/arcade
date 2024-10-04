# L0 - @segundos - converter segundos em h:m:s

[Ação](#ação) | [Shell](#shell) | [Dicas](#dicas)
-- | -- | --


![Imagem Tempo em Horas, Minutos e Segundos](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/segundos/cover.jpg)

## Ação

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


### Shell

```
#INPUT 0
3641
#OUTPUT
1:0:41
#END

#INPUT 1
22067
#OUTPUT
6:7:47
#END

#INPUT 2
9934
#OUTPUT
2:45:34
#END

#INPUT 3
30100
#OUTPUT
8:21:40
#END

#INPUT 4
22769
#OUTPUT
6:19:29
#END

#INPUT 5
19324
#OUTPUT
5:22:4
#END

#INPUT 6
15078
#OUTPUT
4:11:18
#END

#INPUT 7
32958
#OUTPUT
9:9:18
#END

#INPUT 8
30562
#OUTPUT
8:29:22
#END

#INPUT 9
28064
#OUTPUT
7:47:44
#END

#INPUT 10
9305
#OUTPUT
2:35:5
#END

#INPUT 11
31745
#OUTPUT
8:49:5
#END

#INPUT 12
26881
#OUTPUT
7:28:1
#END

#INPUT 13
20427
#OUTPUT
5:40:27
#END

#INPUT 14
13561
#OUTPUT
3:46:1
#END
```


### Dicas

- **C** -  Aqui está uma menira de realizar impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere `:` como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:
```c
int main() {
    printf("%d:%d:%d", hora, minuto, segundo)
}
```

- **Python** - Aqui estão duas maneiras de realizar a impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere `:` como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:
``` python
print(f"{hora}:{minuto}:{segundos}")
- ou -
print("{}:{}:{}".format(hora, minuto, segundos))

```

- **TypeScript** - Aqui estão duas maneiras de realizar a impressão de variáveis junto com textos (strings) no terminal, utilizando o caractere `:` como separador. Os dois pontos podem ser substituídos por qualquer outro caractere:
``` ts
console.log(hora + ":" + minuto + ":" + segundo);
- ou -
write(hora + ":" + minuto + ":" + segundo);
- ou -
console.log(`${hora}:${minuto}:${segundo}`);
- ou -
write(`${hora}:${minuto}:${segundo}`);
```
