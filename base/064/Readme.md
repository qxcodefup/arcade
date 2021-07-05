## #repetição L3 - Conta Dígitos


![](__capa.jpg)

## Motivação

Joãozinho passou o dia visualizando os seus contatos no celular.  
Logo ele decidiu fazer um programa que calcula a quantidade de vezes que um determinado dígito aparece em um número de contato.  
Após passar uma semana tentando ele repassou esse problema para você.  

## Ação

Receba dois inteiros do usuário, o primeiro sendo o dígito que se quer saber quantas vezes aparece e o segundo sendo o número do contato.

### Entrada

*   Valor inteiro A (entre 1 e 9).
*   Valor inteiro B.

### Saída

*   Número de vezes que o dígito A aparece em B  

## Exemplos

```

>>>>>>>>
0
0
========
1
<<<<<<<<


>>>>>>>>
1
10
========
1
<<<<<<<<



>>>>>>>>
2
99102030
========
1
<<<<<<<<

>>>>>>>>
9
44902391
========
2
<<<<<<<<

>>>>>>>>
4
5939
========
0
<<<<<<<<

>>>>>>>>
0
51007140
========
3
<<<<<<<<
```

## Ajuda
Seu objetivo é utilizar operações de divisão e módulo para extrair a unidade até que o número acabe. 
```py
unidade = numero % 10  # operador de módulo
numero = numero // 10  # operação de divisão inteira
```

Faça isso enquanto o número for maior e zero e compare o resultado da extração da unidade com o número procurado.

Por exemplo, seja o número 239.

- 1a interação: unidade = 9, número = 23
- 2a interação: unidade = 3, número = 2
- 3a interação: unidade = 2, número = 0
- Acaba o laço

Observe que o laço deve ser executado pelo menos uma vez. Se o seu número for 0 e estiver contando quantos zeros o número possui, você vai precisar entrar no laço pelo menos uma vez. Então você pode fazer isso com um loop infinito e um controle ao final do laço, ou um do while, caso sua linguagem suporte.

```py
# python
while True:
  #faça o que tem que ser feito
  if num == 0:
    break
```

```c
//c
do {
  //faça o que tem que ser feito
} while(num != 0);
```