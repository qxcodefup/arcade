# Adivinhe o número entre dois limites

## Objetivo

Criar um jogo onde o computador sorteia um número secreto, e o jogador deve adivinhar esse número através de tentativas sucessivas. A cada tentativa, o programa ajusta os limites possíveis, ajudando o jogador a encontrar a resposta — **mas se o intervalo ficar pequeno demais, o jogador perde**!

---

## Regras do jogo

1. **O computador sorteia um número** entre dois valores (por exemplo, entre 1 e 99).
2. O jogador deve chutar um número **dentro de um intervalo aberto**, ou seja, **maior que o limite inferior e menor que o limite superior**.
3. A cada tentativa:
   - Se o jogador acertar o número, vence o jogo.
   - Se errar:
     - Se o chute for **maior** que o número sorteado, o limite superior será atualizado para o valor do chute.
     - Se o chute for **menor**, o limite inferior será atualizado para o valor do chute.
4. Se o intervalo entre os limites ficar tão pequeno que **só resta um número possível para tentar**, o jogador perde.

---

## Habilidades que você vai praticar

- ✅ Uso de **variáveis**
- ✅ **Laços de repetição** (`while`, `for`, etc.)
- ✅ **Condicionais** (`if`, `else`)
- ✅ **Entrada e saída de dados**
- ✅ **Geração de números aleatórios**

---

## Passo a passo sugerido

1. **Escolha os limites iniciais do intervalo**, por exemplo, `inferior = 0` e `superior = 100`.
2. **Sorteie um número secreto** entre os valores internos do intervalo (ex: de 1 a 99).
3. Inicie um **laço de repetição** que vai continuar até o jogador ganhar ou perder.
4. A cada repetição:
   - Mostre o intervalo atual (sem incluir os limites extremos).
   - Peça ao jogador para digitar um número dentro do intervalo.
   - Verifique se o número é igual ao número secreto:
     - Se for, mostre uma mensagem de vitória e pare o jogo.
   - Caso contrário, ajuste o limite inferior ou superior dependendo se o chute foi menor ou maior que o número sorteado.
   - Se só restar um número possível dentro do intervalo, mostre uma mensagem de derrota e encerre o jogo.

---

## Dicas

- Garanta que o jogador **só possa digitar números dentro do intervalo** aberto.
- Você pode usar uma **função de aleatoriedade** da sua linguagem para sortear o número.
- Use `break` (ou equivalente) para encerrar o laço quando o jogo terminar.

---

## Extensões (para quem quiser ir além)

- Conte o número de tentativas que o jogador usou.
- Permita que o jogador jogue novamente ao fim de cada partida.
- Adicione mensagens personalizadas com dicas ou provocações.

## Gerando números aleatórios

### Python

```python
import random
numero_secreto = random.randint(1, 99)  # Gera um número entre 1 e 99
```

### JavaScript

```javascript
let numero_secreto = Math.floor(Math.random() * 99) + 1; // Gera um número entre 1 e 99
```

### Go

```go
import (
    "fmt"
    "math/rand"
    "time"
)
func main() {
    rand.Seed(time.Now().UnixNano())
    numero_secreto := rand.Intn(99) + 1 // Gera um número entre 1 e 99
    fmt.Println(numero_secreto)
}
```

### C

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int numero_secreto = rand() % 99 + 1; // Gera um número entre 1 e 99
    printf("%d\n", numero_secreto);
    return 0;
}
```

## Exemplos de interação

```txt
Diga um numero entre ]0, 100[: 50
Diga um numero entre ]0, 50[: 23
Diga um numero entre ]23, 50[: 40
Diga um numero entre ]23, 40[: 28
Diga um numero entre ]28, 40[: 35
Diga um numero entre ]28, 35[: 30
Diga um numero entre ]30, 35[: 33
Diga um numero entre ]30, 33[: 31
Era 31, você ganhou!
```

```txt
Diga um numero entre ]0, 100[: 50
Diga um numero entre ]0, 50[: 23
Diga um numero entre ]23, 50[: 40
Diga um numero entre ]23, 40[: 28
Diga um numero entre ]28, 40[: 35
Diga um numero entre ]28, 35[: 30
Diga um numero entre ]30, 35[: 33
Diga um numero entre ]30, 33[: 31
Era 32, você perdeu!
```
