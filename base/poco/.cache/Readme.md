# Sapinho 2 morrendo no poço

![sapinho](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/poco/cover.jpg)

## Motivação

* Mamãe, minha namorada, a Myrellah disse que não vem mais aqui em casa.
* Porquê meu filho?
* Porque ela odeia sapo e o quintal tá cheio.
* Mas eles comem as muriçocas meu filho.
* Mas ela disse, ou eles ou eu.
* Eu escolheria os sapos.

Mas Zezim da Carroça pegou o sapo e jogou no fundo do poço.
Sabendo que o sapinho vai tentar sair do poço, use as seguintes regras
para mostrar os saltos do sapo até a saída.

* O sapo começa no fundo de um poço de profundidade P cm.
* A cada salto ele sobe S centímetros.
* Enquanto se recupera para o próximo salto, ele escorrega E centímetros.
* A cada salto o sapinho fica mais cansado e o próximo salto será 10 cm menor.
* Se ele ficar abaixo da agua ele morrerá afogado.

### Entrada

* P, S, E inteiros, um por linhas.

## Saída

* as posições de salto e aterrissagem do sapinho até que ele saia ou morra afogado.

## Exemplos

``` py
>>>>>>>> INSERT
800
300
100
======== EXPECT
0 300
200 490
390 670
570 saiu
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
800
300
200
======== EXPECT
0 300
100 390
190 470
270 540
340 600
400 650
450 690
490 720
520 740
540 750
550 750
550 740
540 720
520 690
490 650
450 600
400 540
340 470
270 390
190 300
100 200
0 90
-110 morreu
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
100
50
30
======== EXPECT
0 50
20 60
30 60
30 50
20 30
0 0
-30 morreu
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
100
60
30
======== EXPECT
0 60
30 80
50 90
60 90
60 80
50 60
30 30
0 0
-30 morreu
<<<<<<<< FINISH
```
