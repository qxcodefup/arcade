# L2 - @pintando a casa

[Motiv](#motivação) | [Shell](#shell) | [Dicas](#dicas) | [Resol](#resolução)
-- | -- | -- | --

![Casa](cover.jpg)


### Motivação

Fernando comprou uma casa triangular. Ao tentar calcular a quantidade de tinta necessária para pintar as paredes, ele percebeu que precisava saber como calcular a área de um triângulo. Felizmente, ele encontrou a Fórmula de Heron, que permite calcular a área de um triângulo a partir do tamanho de seus lados.

Implemente um programa que, dado o tamanho dos três lados de um triângulo, calcule a área utilizando a Fórmula de Heron:

![formula](heron.jpg)​

### Entrada

- Três números em ponto flutuante representando os lados do triângulo, um por linha.

### Saída

- A área do triângulo com duas casas decimais.


### Shell

``` py
#INPUT
4
3
5
#OUTPUT
6.00
#END

#INPUT
10
12
16
#OUTPUT
59.92
#END
```


### Dicas

- **C** - Para exibir um número de ponto flutuante do tipo `double`, recomendado por sua maior precisão, com seis casas decimais em C, utilize o especificador de formato `%.6f` na função `printf`. O número **6** após o ponto indica a quantidade de casas decimais a serem exibidas:
``` c
int main() {
    double resultado;
    printf("%.6f\n", resultado);
}
```

- **Python** - Para exibir um número de ponto flutuante com seis casas decimais em Python, utilize o formato `:.6f` dentro da função `print`. O número **6** após o ponto indica o número de casas decimais que serão exibidas:
``` python
print(f"{resultado:.6f}")
- ou -
print("{:.6f}".format(resultado))
```

- **TypeScript** - Para exibir um número com seis casas decimais em TypeScript, utilize o método `toFixed(6)` do objeto `Number`. O número **6** especifica a quantidade de casas decimais que serão exibidas após o ponto decimal:
``` ts
console.log(resultado.toFixed(6)); 
- ou -
write(resultado.toFixed(6));
```


### Resolução

- [C++](https://youtu.be/nlgT_jAtmy4)


[Resolução](https://youtu.be/sWg893W5r_w)
