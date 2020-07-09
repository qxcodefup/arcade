## ©02_seleção L2 - Ovos de galinha (Procurando o Maior valor)


![](__capa.jpg)

## Motivação

Margarida Maria levantou Gislene com carinho. Olhou nos olhos da penosa e disse.

\- 4 ovinhos hoje ein! Pense Gislene, que hoje eu vou comer um super omeletão.

Ainda olhando pra penosa, sentiu dor e remorso. O olhar de Gislene parecia dizer:

\- Você realmente vai comer meus filhinhos?.

Mas a fome era mais forte que o remorso.

Então como que procurando uma solução pro doloroso conflito entre consciência

empática e fome, decidiu comer só o ovo maiorzinho.

## Ação

Leia 4 números e imprima o maior valor.

### Entrada:

* Leia quatro valores inteiros do usuário.

### Saída:

* Imprima o maior valor lido.

## Exemplos

```
>>>>>>>>
3
3
2
2
========
3
<<<<<<<<

>>>>>>>>
5
1
8
3
========
8
<<<<<<<<
```

## Ajuda

* Ao invés de fazer muitos ifs e elses que tal criar uma variável `maior_valor` que guarda o primeiro valor.

Pseudocódigo
```
Leia primeiro_valor
Leia segundo_valor
Leia terceiro_valor
Leia quarto_valor
maior_valor = primeiro_valor

Se (segundo_valor for maior que maior_valor):
    maior_valor recebe segundo_valor
Se (terceiro_valor for maior que maior_valor):
    maior_valor recebe terceiro_valor
Se (quarto_valor for maior que maior_valor):
    maior_valor recebe quarto_valor

Mostrar (maior_valor)
