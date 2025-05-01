# Batalha Orc

Esse arquivo define as regras da arena Orc. A arena Orc é uma simulação de um combate entre Orcs. Pode ser implementado em vários níveis.

## Fase 1: Nível Aprendiz.

Início do jogo:

* O jogo começa com 10 Orcs.
* Todos devem ser aleatoriamente iniciados com atributos variados. 
* Cada Orc só tem os atributos char id, int forca e int vida.
* Em uma rodada todos os Orcs atacam um por vez sequencialemente.
* Em seu turno, um Orc ataca aleatoriamente outro Orc do jogo que não ele mesmo. O atacado sempre revida atacando o agressor com METADE da sua força.

Quando o round termina:

* Se um Orc ficar com vida negativa ou zero, ele é removido da
      batalha.
* Outro round reinicia até que só sobre um vencedor.
* Se no último round os dois Orcs morrerem, então não houve vencedor.
* Você deve mostrar o Orc vencedor se houver algum.

## Fase 2: Nível Experiente.


Vamos criar algumas reviravoltas no nosso jogo.

* Os nomes dos Orcs devem aleatórios e conter 4 letras. Deve iniciar com maiúsculo e as posições pares devem ser vogais. Ex: Cona, Bifu, Gori, Hijo.
* Um Orc tem dois novos atributos: revidar e raiva. 
* Revidar define quantas vezes ele pode revidar em um round. 
* Se um Orc é atacado e não puder revidar, ele aumenta sua força permanentemente. 
* O aumento da força é dado pelo seu atributo raiva. 
* Se o Orc atacado tiver ao menos 1 revidar, ele obrigatoriamente revida gastando 1 revidar. 
* A cada rodada revidar é reiniciado para o valor máximo.
* Execute a luta todos contra todos e mostre o vencedor se houver algum.

## Fase 3: Nível Avançado.

Vamos criar dois times:

* Orcs não lutam agora todos contra todos. Eles formam dois times de 4 Orcs. Chamemos de times A e B. 
* Os Orcs de um time atacam os Orcs de outro time. O lado A começa atacando. 
* Alterne os Orcs entre os lados A e B até que todos ataquem.
* As regras de revidar e raiva ainda são válidas. Porém agora, assim que a vida de um Orc fica negativa ele morre e sai do jogo, não apenas no fim do turno.
