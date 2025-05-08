# Ordenando vacinas e doentes

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/vacina/cover.jpg)

by @wladmir

Um novo vírus mortal infectando grande população de um planeta. Um brilhante cientista chamado Wladimir descobriu uma nova cepa de vírus que pode curar esta doença. A vacina produzida a partir desse vírus tem várias potências dependendo da contagem de células T. Uma pessoa é curada somente se a contagem de células T no lote da vacina for maior do que a contagem de células T em uma pessoa. Um médico recebe um novo conjunto de relatórios que contém a contagem de células T de cada paciente infectado, o laboratório QuixaVax armazena todas as vacinas que o médico possui e sua contagem de células T. Você precisa determinar se o médico pode salvar todos os pacientes com as vacinas que possui. O número de vacinas e pacientes são iguais.

### Entrada

A primeira linha contém o número de vacinas N.

A segunda linha contém N inteiros, representando a força das vacinas. A terceira linha contém N inteiros, que são a contagem média dos pacientes.

## Saída

Imprima uma única linha contendo Yes, se todos os pacientes podem ser salvos e No, caso contrário.

A força das vacinas e a contagem de células T de pacientes cabem em um número inteiro.

## Exemplo de entrada 1

```py
5
123 146 454 542 456
100 328 248 689 200
```

## Exemplo de Saída 1

```py
No
```

## Explicação 1

A vacina 1 (contagem 123) cura o paciente 1 (contagem 100).

 A vacina 2 (contagem 146) não cura nenhum outro.

## Exemplo de entrada 2

```py
5
123 690 454 150 456
100 328 248 689 145
```

## Exemplo de Saída 2

```py
Yes
```

## Explicação 2

- A vacina 1 (contagem 123) cura o paciente 1 (contagem 100).
- A vacina 2 (contagem 690) cura o paciente 4.
- A vacina 3 (contagem 454) cura o paciente 2.
- A vacina 4 (contagem 150) cura o paciente 5.
- A vacina 5 (contagem 150) cura o paciente 3.
