# L2 - @crushometro

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/crushometro/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup crushometro`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/crushometro/cover.jpg)

## Motivação

Depois de muitos Spotteds-VSF de amor no Facebook, um aluno fez um estudo e percebeu que os atributos necessários para comparar a compatibilidade entre você e o crush são:

- Se a primeira letra do nome for igual, ganha 20 pontos;
- Se tiver a mesma quantidade de letras nos nomes, ganha 30 pontos;
- Se tiver a mesma quantidade de vogais, ganha 30 pontos;
- Se ambos terminarem em vogal ou consoante, ganha 20 pontos.
- Se os nomes terminarem um em vogal e outro em consoante, perde 10 pontos;

Devolva a porcentagem de chances do crush funcionar com você (Lembrando que porcentagens não podem ser negativas!).

## Observação

Para fazer o cálculo, some todos os pontos e imprima da seguinte forma:

- "As chances do crush te dar bola sao: 100%!"
- para imprimir o '%', basta coloca-lo duas vezes, assim:

``` txt
printf("%%");
```

## Entrada

* Seu primeiro nome
* Primeiro nome do seu crush

## Saída

* Porcentagem de chances do crush te dar bola

## Exemplos

``` txt
>>>>>>>>
Yudi
Priscilla
========
As chances do crush te dar bola sao: 20%!
<<<<<<<<

>>>>>>>>
Shun
Hyoga
========
As chances do crush te dar bola sao: 0%!
<<<<<<<<

>>>>>>>>
Kratos
Athena
========
As chances do crush te dar bola sao: 20%!
<<<<<<<<

>>>>>>>>
Paula
Paulo
========
As chances do crush te dar bola sao: 100%!
<<<<<<<<

>>>>>>>>
Shun
Hyoga
========
As chances do crush te dar bola sao: 0%!
<<<<<<<<
```

