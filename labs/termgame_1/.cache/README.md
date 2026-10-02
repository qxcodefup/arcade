# Modelo de jogo interativo no terminal

[![Prévia do jogo do caolho](assets/caolho.png)](https://youtu.be/2IlDR6D6VVQ)

## Objetivo

Explore um jogo de terminal em que um personagem é redesenhado a cada interação. A atividade apresenta uma estrutura inicial para separar os dados do jogo, a atualização do estado e o desenho na tela.

## Regras

- O personagem começa na posição `(5, 5)`, representado por `@` na cor vermelha.
- As setas direcionais movem o personagem uma posição por vez.
- Ao pressionar uma tecla que produz um caractere, esse caractere passa a representar o personagem.
- `Esc` ou `Ctrl+C` encerra o jogo.
- A tela é redesenhada após uma tecla ou uma alteração no tamanho do terminal.
- No modelo inicial, o personagem pode sair dos limites visíveis da tela.

## Interação

Execute o programa em um terminal. Use as setas para mover o personagem; pressione uma tecla que produza um caractere para alterar sua representação. Encerre com `Esc` ou `Ctrl+C`.

## Exemplos de execução

Ao iniciar, o personagem `@` aparece próximo ao canto superior esquerdo. Cada tecla atualiza a posição ou o caractere e redesenha a tela. A apresentação visual ocorre no próprio terminal.

## Instalação

Na pasta `labs/termgame_1/src/go`, execute:

```bash
go run .
```

O módulo Go já declara a dependência `tcell`. Se a instalação ainda não estiver disponível localmente, o Go poderá baixá-la ao executar o comando.

## Etapas

1. Execute o modelo e identifique onde o jogo guarda a posição, o símbolo e a cor do personagem.
2. Acompanhe como `Update` altera o estado e como `Draw` apresenta esse estado na tela.
3. Faça o personagem reaparecer do lado oposto ao sair por uma borda. Defina o comportamento para os quatro lados.
4. Desenhe as bordas da área de jogo ou impeça o personagem de ultrapassá-las. Compare essas duas regras de movimento.
5. Adicione movimento pelas teclas `W`, `A`, `S` e `D`, sem perder o controle pelas setas.
6. Escolha uma extensão: comidas que o personagem pode colocar, paredes que bloqueiam o movimento ou armadilhas que encerram a partida.
7. Para a extensão escolhida, atualize os dados do jogo, a inicialização, o desenho e a lógica de atualização. Verifique a interação manualmente após cada mudança.

## Critérios de conclusão

- O projeto inicia e encerra sem deixar o terminal em estado incorreto.
- O movimento e a representação do personagem correspondem às teclas pressionadas.
- O comportamento nas bordas está definido e funciona nos quatro lados.
- A extensão escolhida é inicializada, desenhada e atualizada de forma consistente.
