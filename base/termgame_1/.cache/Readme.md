# Modelo de jogo interativo no terminal

- Vamos criar um jogo interativo no terminal e utilizar as teclas para movimentar o personagem.

Vídeo de apresentação do projeto

[![caolho](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/termgame_1/caolho.png)](https://youtu.be/2IlDR6D6VVQ)

## Instalação

- Leia no arquivo `extra.md` de cada linguagem como executar a instalação e executar o projeto.

## Sugestão de exercícios

- Rode o projeto e veja o personagem se movimentando.
- Tente fazer o loop da tela, ou seja, se o personagem sair da tela pela direita, ele deve aparecer na esquerda e vice-versa. Caso saia pela parte de cima, ele deve aparecer na parte de baixo e vice-versa.
- Tente desenhar as bordas da tela.
- Tente fazer com que o personagem não possa sair da tela, ou seja, se ele tentar sair pela direita, ele deve ficar parado na borda direita e vice-versa.
- Tente fazer ele também se mover utilizando as teclas `W`, `A`, `S` e `D`.
- Tente criar um vetor de comidas, se a tecla `c` for pressionada, na posição do personagem, deve ser criada uma comida.
  - Atualize estrutura do game para guardar um vetor de comidas.
  - Atualize a função de inicialização do jogo para criar um vetor de comidas vazio.
  - Atualize a função draw para desenhar as comidas.
  - Atualize a função de update para verificar se a tecla `c` foi pressionada e adicionar uma comida na posição do personagem.
- Ao ínves de comidas, você pode criar um vetor de paredes.
  - Atualize estrutura do game para guardar um vetor de paredes.
  - Atualize a função de inicialização do jogo para criar um vetor de paredes em posições aleatórias.
  - Atualize a função draw para desenhar as paredes.
  - Na função de update, antes de andar, salve a posição do personagem em uma variável temporária.
  - Faça o personagem andar normalmente.
  - Verifique se a nova posição do personagem colide com alguma parede, se sim, volte para a posição anterior.
- Tente criar um vetor de armadilhas.
  - Atualize estrutura do game para guardar um vetor de armadilhas.
  - Atualize a função de inicialização do jogo para criar um vetor de armadilhas em posições aleatórias.
  - Atualize a função draw para desenhar as armadilhas.
  - Na função de update, verifique se o personagem colidiu com alguma armadilha e, se sim, finalize o jogo.
  - Para finalizar o jogo, você pode adicionar uma variável `gameOver` na estrutura do jogo e, se ela for verdadeira, não desenhar mais nada e finalizar o jogo.
  - Vá no loop principal do jogo e verifique se o jogo acabou, se sim, quebre o loop para finalizar o jogo.
