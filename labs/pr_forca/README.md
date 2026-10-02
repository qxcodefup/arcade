# Jogo da Palavra Oculta

![Prévia do jogo da palavra oculta](assets/demo.gif)

## Objetivo

Descubra a palavra de uma fruta escolhida pelo computador, tentando uma letra por vez antes de acabarem as chances.

## Regras

- A palavra é escolhida aleatoriamente entre `banana`, `maracuja`, `morango`, `uva`, `siriguela`, `abacaxi`, `manga`, `goiaba`, `pera`, `damasco`, `caqui`, `laranja` e `abacate`.
- A palavra fica oculta por `*`; cada letra acertada é revelada em todas as posições em que aparece.
- O jogador começa com `6` chances. Uma letra que não está na palavra gasta uma chance; uma letra correta não gasta chance.
- Uma letra já tentada não pode ser usada novamente. Entradas inválidas ou repetidas são recusadas sem gastar chance.
- A partida termina quando todas as letras são reveladas ou quando acabam as chances. Ao terminar, o jogo revela a palavra e informa se o jogador ganhou ou perdeu.

## Interação

O jogo mostra as chances restantes, as letras já tentadas, as letras ainda disponíveis e a palavra codificada. Digite uma letra minúscula de `a` a `z` no prompt `>> Digite chute:`. Ao terminar, o jogo revela a palavra e informa o resultado.

Na pasta da tarefa, execute `tko run . -l go` para iniciar e validar a interação.

## Exemplos de execução

```text
-----------------------------------------------------------------------------------
Chances    : 6
Chutes     : [  ]
Disponíveis: [ abcdefghijklmnopqrstuvwxyz ]
Palavra codificada: *******
>> Digite chute: a
-----------------------------------------------------------------------------------
Chances    : 6
Chutes     : [ a ]
Disponíveis: [ bcdefghijklmnopqrstuvwxyz ]
Palavra codificada: ***a***
>> Digite chute: e
-----------------------------------------------------------------------------------
Chances    : 5
Chutes     : [ ae ]
Disponíveis: [ bcdfghijklmnopqrstuvwxyz ]
Palavra codificada: ***a***
>> Digite chute: i
-----------------------------------------------------------------------------------
Chances    : 4
Chutes     : [ aei ]
Disponíveis: [ bcdfghjklmnopqrstuvwxyz ]
Palavra codificada: ***a***
>> Digite chute: o
-----------------------------------------------------------------------------------
Chances    : 4
Chutes     : [ aeio ]
Disponíveis: [ bcdfghjklmnpqrstuvwxyz ]
Palavra codificada: *o*a**o
>> Digite chute: p
-----------------------------------------------------------------------------------
Chances    : 3
Chutes     : [ aeiop ]
Disponíveis: [ bcdfghjklmnqrstuvwxyz ]
Palavra codificada: *o*a**o
>> Digite chute: g
-----------------------------------------------------------------------------------
Chances    : 3
Chutes     : [ aeiopg ]
Disponíveis: [ bcdfhjklmnqrstuvwxyz ]
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
A palavra é morango, voce ganhou
```

## Etapas

1. Escolha uma fruta aleatória e prepare a palavra codificada.
2. Mostre o estado atual e leia uma letra.
3. Revele todas as ocorrências da letra ou desconte uma chance se ela estiver ausente.
4. Rejeite entradas inválidas e letras já tentadas sem alterar o estado da partida.
5. Encerre quando a palavra for revelada ou quando as chances acabarem.

## Critérios de conclusão

- A palavra escolhida pertence à lista de frutas e permanece a mesma durante a partida.
- Um acerto revela todas as posições da letra, e um erro desconta exatamente uma chance.
- Letras disponíveis e letras tentadas são atualizadas sem duplicatas.
- A partida termina nas condições descritas e informa o resultado.
