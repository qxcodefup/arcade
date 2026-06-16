package main

import (
	"fmt"

	"github.com/gdamore/tcell/v2"
)

type Elem struct {
	x, y    int
	simbolo rune
	cor     tcell.Color
}

type Game struct {
	jogador Elem
	tela    tcell.Screen
}

// Essa função roda apenas uma vez no início do jogo
func (g *Game) Init() {
	g.jogador = Elem{x: 5, y: 5, simbolo: '@', cor: tcell.ColorRed}
}

// Essa função é responsável por desenhar o jogo na tela
func (g *Game) Draw() {
	g.tela.Clear() // Limpa a tela antes de desenhar

	g.PlotElem(g.jogador)

	g.tela.Show() // Atualiza a tela para mostrar as mudanças
}

// Essa função é executada quando o usuário pressiona uma tecla
// Ela deve atualizar todas as variáveis do jogo a cada interação
func (g *Game) Update(ek *tcell.EventKey) {
	switch ek.Key() {
	case tcell.KeyUp:
		g.jogador.y -= 1
	case tcell.KeyRight:
		g.jogador.x += 1
	case tcell.KeyDown:
		g.jogador.y += 1
	case tcell.KeyLeft:
		g.jogador.x -= 1
	default:
		letra := ek.Rune()
		if letra != 0 {
			g.jogador.simbolo = letra
		}
	}
}

// ---------------------------------------------------------------------------
// ----- Você não precisa alterar nada abaixo desta linha --------------------
// ---------------------------------------------------------------------------

func (g *Game) Plot(x int, y int, simbolo rune, cor tcell.Color) {
	estilo := tcell.StyleDefault.Foreground(cor).Background(tcell.ColorBlack)
	g.tela.SetContent(x, y, simbolo, nil, estilo)
}

func (g *Game) PlotElem(elem Elem) {
	g.Plot(elem.x, elem.y, elem.simbolo, elem.cor)
}

func main() {
	game := NewGame()      // Cria a tela
	game.Init()            // Inicializa as variaveis do jogo
	game.Draw()            // Desenha o jogo na tela
	game.MainLoop()        // Inicia o loop principal do jogo
	defer game.tela.Fini() // Encerra a tela ao sair
}

func (g *Game) MainLoop() {
	for {
		ev := g.tela.PollEvent()
		switch ev := ev.(type) {
		case *tcell.EventKey:
			switch ev.Key() {
			case tcell.KeyEsc, tcell.KeyCtrlC:
				return
			default:
				g.Update(ev)
			}
			g.Draw()
		case *tcell.EventResize:
			g.tela.Sync()
			g.Draw()
		}
	}
}

func NewGame() *Game {
	g := &Game{}
	screen, err := tcell.NewScreen()
	if err != nil {
		fmt.Printf("erro ao criar a tela: %v", err)
	}
	if err := screen.Init(); err != nil {
		fmt.Printf("erro ao iniciar a tela: %v", err)
	}
	g.tela = screen
	g.tela.Clear()
	return g
}
