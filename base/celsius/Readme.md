# L0 - Conversor de @celsius para Fahrenheit

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/celsius/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup celsius`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![Imagem Conversor Celsius para Fahrenheit](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/celsius/cover.jpg)

## Ação

No Brasil, a unidade de temperatura que utilizamos é o grau Celsius (ºC),
diferente dos países de origem inglesa. Nesses países, a unidade usual é o
Fahrenheit (ºF).

As análises matemáticas envolvendo situações comparativas entre temperaturas em
graus Celsius e temperaturas em Fahrenheit originaram uma expressão algébrica no
intuito de conversões de temperatura:

$$T_f = 1.8 \cdot T_c + 32$$

Implemente um programa que recebe a temperatura em graus Celsius e converte para
Fahrenheit. O valor fornecido será fracionário (double).

### Entrada

- Temperatura em Celsius  

### Saída

- Temperatura em Fahrenheit (6 casa decimais)

### Dicas

Caso você esteja programando em **C**:
- Use `double` em vez de `float` para evitar erro de precisão de ponto flutuante
- Use o `std::fixed` e `std::setprecision(6)` da biblioteca `iomanip` para fixar
o número de casas decimais
- Exemplo: std::cout << std::fixed << std::setprecision(6)
<< tFahrenheit << '\n';

Caso você esteja programando em **Python** existem diversas maneira para formatar uma saída de texto.

Exemplo:
```python
print("{:.6f}".format(temperatura))
```

[Veja outras opções na documentação oficial](https://docs.python.org/pt-br/3/tutorial/inputoutput.html#fancier-output-formatting)


## Exemplos

```txt
>>>>>>>> 0
43.000000
========
109.400000
<<<<<<<<

>>>>>>>> 1
55.000000
========
131.000000
<<<<<<<<

>>>>>>>> 2
99.000000
========
210.200000
<<<<<<<<

>>>>>>>> 3
69.000000
========
156.200000
<<<<<<<<

>>>>>>>> 4
64.000000
========
147.200000
<<<<<<<<

>>>>>>>> 5
84.000000
========
183.200000
<<<<<<<<

>>>>>>>> 6
95.000000
========
203.000000
<<<<<<<<

>>>>>>>> 7
56.000000
========
132.800000
<<<<<<<<

>>>>>>>> 8
36.000000
========
96.800000
<<<<<<<<

>>>>>>>> 9
13.000000
========
55.400000
<<<<<<<<

>>>>>>>> 11
31.000000
========
87.800000
<<<<<<<<

>>>>>>>> 12
18.000000
========
64.400000
<<<<<<<<

>>>>>>>> 13
98.000000
========
208.400000
<<<<<<<<

>>>>>>>> 14
63.000000
========
145.400000
<<<<<<<<
```
