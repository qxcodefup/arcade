# Jogo da Palavra Oculta

## Objetivo

Implementar um jogo semelhante à **Forca**, em que o jogador tenta descobrir uma palavra oculta, chutando letras. O jogador tem um número limitado de tentativas, e perde se errar muitas vezes. A palavra é escolhida aleatoriamente entre países do mundo.

---

## Regras do jogo

1. O computador escolhe aleatoriamente o nome de um país.
2. O jogador vê a palavra "codificada", com letras escondidas por `*`.
3. A cada rodada:
   - O jogador chuta uma letra.
   - Se a letra estiver na palavra, ela aparece na posição correta.
   - Se não estiver, o número de chances diminui.
   - Letras já tentadas não podem ser usadas novamente.
4. O jogo termina quando:
   - A palavra é completamente revelada (vitória);
   - O número de chances chega a 0 (derrota).

---

## Exemplo de execução

![gif](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/pr_forca/demo.gif)

A entrada do usuário acontece apenas na linha que começa com >>

```txt
-----------------------------------------------------------------------------------
Chances    : 6
Chutes     : [  ]
Disponíveis: [ abcdefghiojklmnopqrstuvwxyz ]
Palavra codificada: ******* 
>> Digite chute: a
-----------------------------------------------------------------------------------
Chances    : 6
Chutes     : [ a ]
Disponíveis: [ bcdefghiojklmnopqrstuvwxyz ]
Palavra codificada: ***a*** 
>> Digite chute: e
-----------------------------------------------------------------------------------
Chances    : 5
Chutes     : [ ae ]
Disponíveis: [ bcdfghiojklmnopqrstuvwxyz ]
Palavra codificada: ***a*** 
>> Digite chute: i
-----------------------------------------------------------------------------------
Chances    : 4
Chutes     : [ aei ]
Disponíveis: [ bcdfghojklmnopqrstuvwxyz ]
Palavra codificada: ***a*** 
>> Digite chute: o
-----------------------------------------------------------------------------------
Chances    : 4
Chutes     : [ aeio ]
Disponíveis: [ bcdfghjklmnopqrstuvwxyz ]
Palavra codificada: *o*a**o 
>> Digite chute: p
-----------------------------------------------------------------------------------
Chances    : 3
Chutes     : [ aeiop ]
Disponíveis: [ bcdfghjklmnoqrstuvwxyz ]
Palavra codificada: *o*a**o 
>> Digite chute: g
-----------------------------------------------------------------------------------
Chances    : 3
Chutes     : [ aeiopg ]
Disponíveis: [ bcdfhjklmnoqrstuvwxyz ]
Palavra codificada: *o*a*go 
>> Digite chute: m
-----------------------------------------------------------------------------------
Chances    : 3
Chutes     : [ aeiopgm ]
Disponíveis: [ bcdfhjklnoqrstuvwxyz ]
Palavra codificada: mo*a*go 
>> Digite chute: r
-----------------------------------------------------------------------------------
Chances    : 3
Chutes     : [ aeiopgmr ]
Disponíveis: [ bcdfhjklnoqstuvwxyz ]
Palavra codificada: mora*go 
>> Digite chute: n
-----------------------------------------------------------------------------------
A palavra é morango, voce ganhou
```
