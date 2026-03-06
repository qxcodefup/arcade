# O computador tenta adivinhar seu número

## Objetivo

Criar um jogo onde **o jogador pensa em um número secreto** e o **computador tenta adivinhar** esse número. A cada palpite, o jogador informa se o número secreto é maior, menor ou igual ao chute feito pelo computador. Se o intervalo ficar impossível, o computador perde!

---

## Regras do jogo

1. O jogador pensa em um número entre dois valores (ex: entre 1 e 99), **sem contar ao computador**.
2. O computador chuta um número dentro do intervalo aberto `]inferior, superior[`.
3. A cada palpite:
   - O computador pergunta: "É maior (>), menor (<) ou igual (=)?"
   - O jogador responde:
     - `=` → o computador acertou e vence.
     - `>` → o número secreto é maior → atualiza o limite inferior.
     - `<` → o número secreto é menor → atualiza o limite superior.
4. Se o intervalo ficar tão pequeno que não há mais nenhum número possível para chutar, o computador declara derrota.

---

## Exemplo de execução

```txt
]0, 100[ É 53?
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

## Como gerar números aleatórios dentro de um intervalo aberto `]inf, sup[`

### Python

```python
def rand_interval(inf: int, sup: int) -> int:
    return random.randint(inf + 1, sup - 1)
```

### C

```c
int rand_interval(int inf, int sup) {
    return (rand() % (sup - inf - 1)) + inf + 1;
}
```

### Go

```go
func RandInterval(inf, sup int) int {
    return rand.Intn(sup-inf-1) + inf + 1
}
```
