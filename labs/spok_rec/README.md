# Número palíndromo

![Capa da atividade sobre números palíndromos](assets/cover.jpg)

## Contexto

A bordo da Enterprise, Spok recebeu a missão de explorar novos planetas. Cada planeta tem um identificador (`ID`) único. Como o combustível da nave está acabando, ele decidiu explorar apenas os planetas cujo identificador é palíndromo.

Determine se o `ID` recebido é palíndromo.

### Entrada

- Um número inteiro que indica o `ID` do planeta.

### Saída

- Imprima `1` se o `ID` for palíndromo e `0` caso contrário.

### Restrições

- O `ID` do planeta é um número inteiro não negativo que cabe em uma variável do tipo `int`.

## Exemplos

<!-- tests tests.toml --limit 3 -->
<!-- end -->

## Orientações

Crie uma função recursiva que inverta os dígitos do número usando divisão e resto por `10`. Compare o resultado com o `ID` original. Uma assinatura Go possível é:

```go
func inverter(numero, invertido int) int
```

<!-- REVIEW_NOTE: A restrição descreve apenas IDs positivos, mas os testes incluem o valor 0 e esperam que ele seja aceito como palíndromo. Confirmar se a restrição deve incluir zero ou se o caso de teste precisa ser corrigido antes de marcar a atividade como revisada. -->