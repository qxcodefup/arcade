# Número palíndromo

![_](assets/cover.jpg)

## Contexto

A bordo da Enterprise, Spok recebeu a missão de explorar novos planetas. Cada planeta tem um identificador (ID) único. Como o combustível da nave está acabando, Spok decidiu explorar apenas os planetas que possuem um ID palíndromo.

Sua tarefa é criar uma função que recebe um inteiro referente ao ID de um planeta e retorna 1 (true) se o ID for palíndromo e 0 (false) caso contrário.

### Estratégias

- **Obs 1:** Faça essa questão sem usar vetores ou strings.  
- **Obs 2:** Um número é `palíndromo` quando o seu inverso é igual a ele.
- Por exemplo: 121 é palíndromo pois seu inverso é 121.
- Vá consumindo o número utilizando operadores de módulo e divisão por 10 enquanto monta o número invertido.
- Tente criar uma função que gera o número invertido.

### Entrada

- Um número inteiro que indica o ID.

### Saída

- O número 1 se o ID for palíndromo e 0 caso contrário.

### Restrições

- O ID do planeta será um número inteiro positivo que cabe em uma variável do tipo `int`.

## Testes

``` py
>>>>>>>> INSERT
121
======== EXPECT  
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
123
======== EXPECT
0
<<<<<<<< FINISH
```
