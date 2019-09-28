## ©02_sel L3 - Formiga da bundona
## @qxcode

## Motivação

Uma formiginha está andando na borda de um relógio redondo analógico. Como sua dieta é muito baseada em açúcar, sua nutricionista recomendou que ela caminhasse todos os dias para
emagrecer.

![formiga](__capa.jpg)

A distância entre os dois marcadores em horas consecutivas é 6 centímetros. Ou seja, se a formiga sai do ponto 12:00 e anda até 01:00, ela anda 6 centímetros, o que equivale a dizer que cada 10 min para o ponteiro das horas equivale a 1 cm. De 02:00 até 03:30 são então 9 centímetros. Para simplificar, a formiga sempre vai iniciar sua caminhada em valores múltiplos de 10 nos minutos.

Dado a posição inicial da formiga no relógio, a direção que ela está caminhado H(horário) A(Anti-horário) e quantos centímetros ela caminhou em inteiro, informe em que posição do relógio ela vai terminar sua caminhada.

### Entrada

- Posição da Hora 'H' e do Minuto 'M' que a formiga começa sua caminhada. O sentido 'S' que ela anda, sendo Horário(H) ou Anti-horário(A) e distância D caminhada em centímetros. Para simplificar, o meio dia será representado pelo horário 00:00 e não por 12:00.

### Saída

- Posição hora e minuto que ela termina sua caminhada.

## Exemplos

```
>>>>>>>>
00
00
H
8
========
01 20
<<<<<<<<

>>>>>>>>
00
10
A
74
========
11 50
<<<<<<<<
```



## Dicas

* Converta inicialmente tudo para centímetro como se estivesse calculando a distancia entre o ponto 00:00 e o ponto atual. Depois faça a operação de forma modular utilizando o operador de módulo. Então reconverta para hora.
* Para converter para centímetro, multiplique a hora por 6, e divida os minutos por 10. 04:20 equivale a 4 \* 6 + 20 / 10 = 26 centímetros do ponto meio dia.
* Após isso, opere utilizando soma (horário) ou subtração(anti horário) o valor obtido com a distância percorrida pela formiga.
* Você precisará fazer uma operação modular para "recolocar" esse valor dentro do relógio novamente.
* Perceba que o relógio inteiro possui 12 \* 6 = 72 centímetros. Talvez o valor que você calculou, seja maior que 72 ou menor que 0. Você pode "consertá-lo" fazendo valor % 72. Se esse valor for negativo, some com 72 para reposicionar dentro do relógio. 
* Agora você precisa converter esses centímetros de volta pra um horário válido.
* Divida por 6 para saber quantas horas você possui.
* O resto da divisão por 6 equivale aos minutos. Pegue o resto da divisão e multiplique por 10. 
* Pronto. Para imprimir, utilize o "%02d" no printf para forçar escrever com duas casas decimais incluindo zeros a esquerda se preciso for.
---