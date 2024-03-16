# L3 - Nao se @bubula - Gagueira V2

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/bubula/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup bubula`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/bubula/cover.jpg)

## Motivação

Arnoldo filho trabalhava nos bastidores do filme. Matança no sertão de Quixadá. O primo dele tinha que interpretar um cangaceiro gago, mas o pobre coitado não sabia gaguejar.  
Desesperado e com medo de perder o papel ele pede:

Arnoldo, pega minhas falas e escreve já do jeito que eu tenho que falar. E mostrou um exemplo:  
_"Volte cá seu cabra safado!"_  
Se torna:  
_"VoVoVolte cá seu cacacabra sasasafado!"_

Arnoldo que tá se formando em computação aceitou cobrando metade do cachê!

## Ação

O código de Arnoldo pega as palavras e todas palavra que tem mais de uma sílaba, repete três vezes a mesma sílaba.  
Para uma "falsa" separação silábica Arnaldo definiu que toda vogal seguida de consoante separa sílaba.

Implemente o código de Arnoldo.

## Entrada

- Uma linha de texto.

## Saída

- A linha de texto gaguejada.

## Exemplos

``` txt
>>>>>>>>
Volte cá seu cabra safado
========
VoVoVolte cá seu cacacabra sasasafado
<<<<<<<<
  
>>>>>>>>
Morreu Maria Prea
========
MoMoMorreu MaMaMaria Prea
<<<<<<<<

>>>>>>>>
Solte essa faca ou eu arranco suas tripas no dente!
========
SoSoSolte eeessa fafafaca ou eu aaarranco suasuasuas tritritripas no dededente!
<<<<<<<<
```
