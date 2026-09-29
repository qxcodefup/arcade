# Quiz do Harry Potter

![_](assets/cover.jpg)


Um site sobre a série Harry Potter pediu para você criar um programa para medir o conhecimento de um visitante sobre a série e assim determinar o quão fã o visitante é.

O conhecimento do visitante deve ser medido através de 4 perguntas de múltiplas escolhas, sendo apenas uma escolha certa em cada questão.

A seguir as perguntas e a respostas:

1 - A que casa pertencia Harry Potter e seus amigos ?

- a) Hufflepuff  
- b) Ravenclaw  
- c) Slytherin  
- d) Gryffindor \[RESPOSTA CORRETA\]  

2 - Qual o nome verdadeiro do personagem o qual é conhecido por aquele que não deve ser nomeado ?

- a) Tom Riddle \[RESPOSTA CORRETA\]  
- b) Draco Malfoy  
- c) Bellatrix Lestrange  
- d) Pedro Pettigrew  

3 - Quais dessa opções não é uma Relíquia da Morte ?

- a) A varinha de sabugueiro  
- b) A pedra da ressurreição  
- c) A pedra filosofal \[RESPOSTA CORRETA\]  
- d) A capa de invisibilidade  

4 - O ministério da magia  proibiu o uso de três feitiços, conhecidos como as maldições imperdoáveis, por ela possuírem caráter maligno e o objetivo cruel. Marque opção abaixo que não corresponde a umas das maldições imperdoáveis:

- a) Crucio  
- b) Imperio  
- c) Avada Kedavra  
- d) Expecto Patronum \[REPOSTA CORRETA\]  

A saída do programa vai variar com o número de acerto, da seguinte maneira:

Número de acertos | Saída do programa
------------------|------------------
0                 | Nunca assistiu
1                 | Ja ouviu falar
2                 | Interessado no assunto
3                 | Fa
4                 | Super Fa

### Entrada

- 4 letras(abcd) uma por linha.

### Saída

- O texto correspondente ao número de acertos.

---

### Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code>
</th><th><code>      Saída      </code>
</th></tr><tr><td valign="top"><pre>
a
c
d
d
</pre></td><td valign="top"><pre>
Ja ouviu falar
</pre></td></tr></table>

<table><tr><th><code>Entrada</code>
</th><th><code>      Saída      </code>
</th></tr><tr><td valign="top"><pre>
d
a
c
d
</pre></td><td valign="top"><pre>
Super Fa
</pre></td></tr></table>

<table><tr><th><code>Entrada</code>
</th><th><code>      Saída      </code>
</th></tr><tr><td valign="top"><pre>
b
b
b
b
</pre></td><td valign="top"><pre>
Nunca assistiu
</pre></td></tr></table>
<!-- end -->
