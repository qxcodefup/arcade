# O computador tenta adivinhar seu número

## Objetivo

O jogador pensa em um número inteiro entre `0` e `100`, sem contar qual é. O computador tenta descobri-lo fazendo perguntas.

## Regras

- O número secreto deve estar entre `1` e `99`.
- Em cada rodada, o computador escolhe um número inteiro dentro do intervalo aberto `]inferior, superior[`.
- O jogador responde `=`, `>` ou `<`:
  - `=` indica que o computador acertou e encerra o jogo com `ganhei`.
  - `>` indica que o número secreto é maior que o palpite.
  - `<` indica que o número secreto é menor que o palpite.
- Qualquer outra resposta é inválida: o computador repete a pergunta para o mesmo palpite, sem alterar o intervalo.
- Se restar apenas um número possível no intervalo, o computador encerra o jogo com `perdeu`, sem tentar esse número.

## Interação

O computador exibe os limites atuais e seu palpite. O jogador informa `=`, `>` ou `<` de acordo com a relação entre o número secreto e o palpite.

## Exemplos de execução

```text
]0, 100[ É 53?
Acertei(=), É maior(>), É menor(<)? talvez
Acertei(=), É maior(>), É menor(<)? <
]0, 53[ É 25?
Acertei(=), É maior(>), É menor(<)? >
]25, 53[ É 42?
Acertei(=), É maior(>), É menor(<)? >
]42, 53[ É 46?
Acertei(=), É maior(>), É menor(<)? <
]42, 46[ É 44?
Acertei(=), É maior(>), É menor(<)? =
ganhei
```

## Etapas

1. Inicialize os limites inferior e superior como `0` e `100`.
2. Escolha um palpite inteiro dentro do intervalo aberto.
3. Leia e valide a resposta do jogador.
4. Atualize o limite correspondente ou encerre quando o computador acertar ou restar apenas um candidato.

## Critérios de conclusão

- O palpite sempre está estritamente entre os limites atuais.
- Uma resposta inválida não altera os limites nem gera um novo palpite.
- O jogo termina com `ganhei` ao receber `=` ou com `perdeu` quando resta um único candidato.

## Orientações

A função abaixo escolhe um número inteiro dentro do intervalo aberto `]inf, sup[`:

```go
func sortear(inf, sup int) int {
	return int(time.Now().UnixNano()%int64(sup-inf-1)) + inf + 1
}
```
