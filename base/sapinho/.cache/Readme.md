# Sapinho no Poço

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/sapinho/cover.jpg)

## Contexto

- *Mamãe, minha namorada, a Myrellah, disse que não vem mais aqui em casa.*
- *Por que, meu filho?*
- *Porque ela odeia sapo e o quintal tá cheio.*
- *Mas eles comem as muriçocas, meu filho.*
- *Mas ela disse, ou eles ou eu.*
- *Eu escolheria os sapos.*

Para resolver o problema, Zezim da Carroça decidiu pegar os sapos e jogá-los no fundo de um poço. Agora, o sapinho vai tentar sair do poço, e o seu programa precisa simular seus saltos e quedas até que ele consiga escapar.

O sapo começa no fundo de um poço de profundidade **P** centímetros. A cada salto, ele sobe **S** centímetros e, enquanto descansa, escorrega **E** centímetros. O programa deve mostrar as posições de aterrissagem dos saltos do sapinho até que ele saia do poço.

### Entrada

- **P**, **S**, **E** inteiros, um por linha, representando a profundidade do poço, a altura do salto e a queda durante o descanso, respectivamente. O valor de **S** sempre será maior que **E**.

### Saída

- As posições de salto e aterrissagem do sapinho até que ele saia do poço. O programa deve imprimir as posições, uma por linha, até que o sapinho escape. A última linha deve conter a posição do sapinho seguida da palavra **"saiu"**.

## Testes

``` py
>>>>>>>> INSERT
500
100
20
======== EXPECT
0 100
80 180
160 260
240 340
320 420
400 saiu
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
800
300
200
======== EXPECT
0 300
100 400
200 500
300 600
400 700
500 saiu
<<<<<<<< FINISH
```
