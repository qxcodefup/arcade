## ©04_vetores L3 - Loucura de Marquinhos - Decompor um inteiro


![](__capa.jpg)

## Motivação

Marquinhos está para ficar louco. Hermeneutico o desafiou a fazer um código
que quebra inteiros em um vetor. Mas essa tarefa aparentemente simples está
acabando com os miolos de Marquinhos. Por favor, ajude Marquinhos a recuperar
sua paz de espírito fazendo esse código pra ele. Lembrando que a entrada deve
ser vários valores inteiros, e a saída um vetor com todos os inteiros da entrada.  
\[DS\]  

### Entrada

- Um valor que deve ser lido como vetor e não como string. O número tem até 8 casas decimais.

OBS: Use os operadores de divisão e módulo para obter os números.  

### Saida

- O valor decomposto em números(0 à 9).
  
## Exemplos

```
>>>>>>>>
12345
========
1 2 3 4 5
<<<<<<<<

>>>>>>>>
2357
========
2 3 5 7
<<<<<<<<

>>>>>>>>
567
========
5 6 7
<<<<<<<<

>>>>>>>>
4937
========
4 9 3 7
<<<<<<<<

>>>>>>>>
953
========
9 5 3
<<<<<<<<
```

## Ajuda

- O operador `%` (lê-se mod) retorna o resto da divisão de um número pelo outro. Exemplo:
```
5 % 3 retorna 2, ou seja, o resto da divisão de 5 por 3 é 2

4 % 2 retorna 0, ou seja, o resto da divisão de 4 por 2 é 0
```

- Você pode usar as operações de módulo e divisão para decompor o número. Com os dígitos "arrancados", você pode formar um novo número utilizando multiplicação e soma. Por exemplo:

```
54321 % 10 retorna 1, ou seja, o primeiro digito mais a direita

54321 % 100 retorna 21, ou seja, os dois digitos mais a direita
```

```
54321 / 10 retorna 5432, ou seja, o número retirando o primeiro digito mais a direita

54321 / 100 retorna 543, ou seja, o número retirando os dois digitos mais a direita

54321 / 100000 retorna 0, ou seja, o número retirando os cinco digitos mais a direta
```

```
2 * 10 + 1, caso queira formar o número 21         

21 * 10 + 15, caso queira formar o número 225
```

### Pseudocódigo

```
Ler valor

// incrementar valor de auxiliar
Para (auxiliar < 8):
    Se (valor != 0):
        vetor[auxiliar] = valor % 10
        valor = valor / 10
    Senao
        vetor[auxiliar] = 10000000

// decrementar valor de auxiliar
Para (auxiliar >= 0):
    Se (vetor[auxiliar] != 10000000):
        Mostrar (vetor[auxiliar])
    Se (auxiliar != 0 e vetor[auxiliar] != 10000000) // condição que insere espaços entre os digitos
        Mostrar " "
```
