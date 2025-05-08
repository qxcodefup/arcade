# Calculando aumento

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/salario/cover.jpg)

## Contexto

No mês de março, todos os funcionários da empresa recebem um aumento salarial, com percentuais maiores para quem ganha menos, para promover a equidade. O percentual de aumento depende da faixa salarial do funcionário, conforme as regras abaixo:

- Funcionários que ganham até **1000,00 reais** recebem **20%** de aumento.
- Funcionários que ganham até **1500,00 reais** recebem **15%** de aumento.
- Funcionários que ganham até **2000,00 reais** recebem **10%** de aumento.
- Funcionários que ganham mais de **2000,00 reais** recebem **5%** de aumento.

Os funcionários estão ansiosos para saber quanto vão ganhar após o aumento. Como você sabe programar, decidiu criar um programa que recebe o salário atual e informa o novo salário.

Receba o valor do salário atual do funcionário e imprima o novo salário de acordo com as regras informadas na descrição.

### Entrada

- O programa recebe um único valor **float**, representando o **salário atual** do funcionário, com até duas casas decimais.

### Saída

- O programa deve imprimir o **novo salário** do funcionário, também com duas casas decimais.

## Testes

```py
>>>>>>>> INSERT
900.00
======== EXPECT
1080.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1500.00
======== EXPECT
1725.00
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
2005.20
======== EXPECT
2105.46
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Para exibir um número de ponto flutuante, do tipo `float`, com duas casas decimais em C, utilize o especificador de formato `%.2f` na função `printf`. O número **2** após o ponto indica a quantidade de casas decimais a serem exibidas.

```c
int main() {
    float resultado;
    printf("%.2f\n", resultado);
}
```

### Programando em: Python

- Para exibir um número de ponto flutuante com duas casas decimais em Python, utilize o formato `:.2f` dentro da função `print`. O número **2** após o ponto indica o número de casas decimais que serão exibidas:

```py
print(f"{resultado:.2f}")
```

```py
print("{:.2f}".format(resultado))
```

### Programando em: TypeScript

- Para exibir um número com duas casas decimais em TypeScript, utilize o método `toFixed(2)` do objeto `Number`. O número **2** especifica a quantidade de casas decimais que serão exibidas após o ponto decimal:

```ts
console.log(resultado.toFixed(2)); 
```

```ts
write(resultado.toFixed(2));
```
