# L2 - @mumia - criança, jovem, adulto

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/mumia/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup mumia`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/mumia/cover.jpg)

Leia o nome da pessoa e um inteiro que representa a idade de uma pessoa e escreva:

* crianca se menor que 12 (não use o ç),
* jovem se menor que 18,
* adulto se menor que 65,
* idoso se menor que 1000,
* mumia caso contrario (não ponha o acento).

OBS: por simplificações, não faça flexão de gênero (idoso, idosa, adulto, adulta), não use acento, nem ç, nem maiúscula.

## Exemplos

``` txt
>>>>>>>>
mario
4
========
mario eh crianca
<<<<<<<<

>>>>>>>>
jose
65
========
jose eh idoso
<<<<<<<<
```

## Dica

Utilize a técnica do seleção intervalada e termine com um else sem condição.

```c
if(x < 12)  
    ...  
else if(x < 18)  
    ...
else if(x < 65)  
    ...
else
    ...
```
