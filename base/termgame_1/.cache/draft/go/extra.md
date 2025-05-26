# Go

- Vídeo do youtube com as orientações

[![caolho](../../caolho.png)](https://youtu.be/2IlDR6D6VVQ)

## Instalação

-Navegue pelo terminal até a pasta do projeto.

```bash
# você pode usar os comandos cd(mudar de pasta) e ls(para lista o conteúdo).
cd fup/database/termgame_1
ls
```

- Você encontrará os arquivos `main.go` e `extra.md`.
- Dentro dessa pasta, dê os seguintes comandos.

```bash
# Você precisará criar um projeto Go com o comando:
go mod init game
# Instale a biblioteca `tcell` com o comando
go get github.com/gdamore/tcell/v2
# Estando dentro da pasta do projeto, você pode rodar o projeto com o comando:
tko run *.go
```

- Caso entre em loop infinito ou dê algum erro de execução, você pode interromper o programa com `Ctrl + C`.
- Caso seu terminal fique estranho, você pode tentar restaurá-lo com o comando `reset` ou digitando `Ctrl + D` pra matar o terminal.
