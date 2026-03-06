# Aniquilando Ultrons V3

![_](cover.jpg)

## Contexto

A batalha contra o exército de disfarces do Ultron continua. Desta vez, em vez de analisar indivíduos um a um, você recebeu um panorama completo do ambiente: o código genético do Ultron e uma lista de todos os códigos das pessoas presentes.

Sua missão é mapear o ambiente, identificando cada indivíduo. Para cada código na lista, você deve determinar se é uma **"pessoa"**, um **"ultron"** ou um potencial **"chefe"**, com base na porcentagem de letras que correspondem ao código do Ultron.

- **Chefe:** 100% de correspondência.
- **Ultron:** Mais de 50% de correspondência.
- **Pessoa:** 50% ou menos de correspondência.

Por exemplo, com o código Ultron **"ultron"** e o ambiente **"ruame ronuai Lion uuuaaaa ronia kkk luno"**, a saída esperada seria: **"pessoa ultron chefe pessoa ultron pessoa chefe"**.

### Entrada

- **Linha 1:** O código do Ultron.
- **Linha 2:** Uma linha contendo vários códigos de pessoas, separados por espaços.

### Saída

- Uma única linha contendo a classificação ("pessoa", "ultron" ou "chefe") para cada código de pessoa, na ordem em que aparecem, separadas por espaços.

### Restrições

- O código do Ultron terá entre 2 e 9 letras.
- A linha do ambiente terá no máximo 500 caracteres.
- Cada código de pessoa terá no máximo 20 caracteres.
- A verificação não diferencia maiúsculas de minúsculas.

### Testes

``` py
>>>>>>>> INSERT
aeiou  
arta euio auiaoauio riu pegasus
======== EXPECT  
pessoa chefe chefe ultron pessoa
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
aer
arta euio auiaoauio riu pegasus rea
======== EXPECT
ultron pessoa pessoa pessoa pessoa chefe
<<<<<<<< FINISH
```
