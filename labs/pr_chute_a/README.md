# Adivinhe o número entre dois limites

## Objetivo

Crie um jogo em que o computador escolhe um número secreto e a pessoa tenta adivinhá-lo. Os limites do intervalo diminuem a cada tentativa incorreta.

## Regras

- O intervalo inicial é aberto: `]0, 100[`. O computador escolhe um número inteiro entre `1` e `99`.
- O chute deve ser um número inteiro estritamente entre os limites atuais.
- Se o chute estiver fora do intervalo, mostre `Chute fora do intervalo.` e peça outro sem alterar os limites.
- Se o chute for igual ao segredo, revele o número e informe que a pessoa venceu.
- Se o chute for maior que o segredo, ele passa a ser o novo limite superior. Se for menor, passa a ser o novo limite inferior.
- Depois de um chute incorreto, se restar apenas um inteiro possível dentro do intervalo, a pessoa perde sem receber outro chute. Revele o número secreto.

## Interação

A cada tentativa, mostre o intervalo aberto atual neste formato e leia o chute na mesma linha:

```text
Diga um número entre ]0, 100[: 50
```

Chutes fora do intervalo não alteram o jogo; o programa avisa e solicita outra entrada. Ao terminar, mostre `Era N, você ganhou!` ou `Era N, você perdeu!`, substituindo `N` pelo segredo.

## Exemplos de execução

Neste exemplo, o segredo é `31` e a pessoa vence:

```text
Diga um número entre ]0, 100[: 50
Diga um número entre ]0, 50[: 23
Diga um número entre ]23, 50[: 40
Diga um número entre ]23, 40[: 28
Diga um número entre ]28, 40[: 35
Diga um número entre ]28, 35[: 30
Diga um número entre ]30, 35[: 33
Diga um número entre ]30, 33[: 31
Era 31, você ganhou!
```

Neste exemplo, o segredo é `32`. Depois do chute `31`, resta apenas esse valor possível e a pessoa perde:

```text
Diga um número entre ]0, 100[: 50
Diga um número entre ]0, 50[: 23
Diga um número entre ]23, 50[: 40
Diga um número entre ]23, 40[: 28
Diga um número entre ]28, 40[: 35
Diga um número entre ]28, 35[: 30
Diga um número entre ]30, 35[: 33
Diga um número entre ]30, 33[: 31
Era 32, você perdeu!
```

## Etapas

1. Inicie os limites em `0` e `100` e escolha um segredo de `1` a `99`.
2. Mostre os limites e leia um chute.
3. Rejeite chutes que não estejam estritamente entre os limites atuais.
4. Compare um chute válido com o segredo e atualize o limite correspondente.
5. Encerre ao acertar ou quando um erro deixar somente um inteiro possível; revele o segredo.

## Critérios de conclusão

- O segredo está sempre entre `1` e `99`.
- Um chute fora do intervalo é rejeitado sem alterar os limites.
- Cada chute válido atualiza o limite correto.
- O jogo termina com vitória ao acertar ou derrota quando resta apenas um valor possível.
- A mensagem final revela o segredo e informa o resultado.

## Orientações

A função abaixo escolhe o número secreto no intervalo de `1` a `99`:

```go
func gerarSecreto() int {
	return int(time.Now().UnixNano()%99) + 1
}
```
