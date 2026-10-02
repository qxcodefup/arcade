package main

import (
	"bufio"
	"fmt"
	"math/rand/v2"
	"os"
	"strings"
)

type Carta struct {
	nome  string
	valor int
	naipe string
}

func main() {
	entrada := bufio.NewScanner(os.Stdin)
	saldo := 100
	rodada := 1

	for saldo >= 5 {
		fmt.Println("Rodada", rodada)
		fmt.Println("Dinheiro:", saldo)
		aposta, ok := lerInteiro(entrada, "Digite valor da aposta ou -1 para sair: ")
		if !ok {
			return
		}
		if aposta == -1 {
			return
		}
		if aposta < 5 || aposta > 100 || aposta > saldo {
			fmt.Println("Valor inválido.")
			continue
		}

		saldo -= aposta
		if jogarRodada(entrada) {
			saldo += aposta * 2
		}
		rodada++
	}

	fmt.Println("Dinheiro insuficiente para outra aposta.")
}

func lerInteiro(entrada *bufio.Scanner, prompt string) (int, bool) {
	for {
		fmt.Print(prompt)
		if !entrada.Scan() {
			return 0, false
		}

		campos := strings.Fields(entrada.Text())
		if len(campos) == 1 {
			valor := 0
			if _, err := fmt.Sscan(campos[0], &valor); err == nil {
				return valor, true
			}
		}
		fmt.Println("Valor inválido.")
	}
}

func criarBaralho() []Carta {
	baralho := make([]Carta, 0, 52)
	valores := []Carta{
		{nome: "A", valor: 11},
		{nome: "2", valor: 2},
		{nome: "3", valor: 3},
		{nome: "4", valor: 4},
		{nome: "5", valor: 5},
		{nome: "6", valor: 6},
		{nome: "7", valor: 7},
		{nome: "8", valor: 8},
		{nome: "9", valor: 9},
		{nome: "10", valor: 10},
		{nome: "J", valor: 10},
		{nome: "Q", valor: 10},
		{nome: "K", valor: 10},
	}

	naipes := []string{"copas", "ouros", "paus", "espadas"}
	for _, naipe := range naipes {
		for _, carta := range valores {
			carta.naipe = naipe
			baralho = append(baralho, carta)
		}
	}

	rand.Shuffle(len(baralho), func(i, j int) {
		baralho[i], baralho[j] = baralho[j], baralho[i]
	})
	return baralho
}

func pontuacao(mao []Carta) int {
	total := 0
	ases := 0
	for _, carta := range mao {
		total += carta.valor
		if carta.nome == "A" {
			ases++
		}
	}

	for total > 21 && ases > 0 {
		total -= 10
		ases--
	}
	return total
}

func comprar(baralho *[]Carta) Carta {
	ultima := len(*baralho) - 1
	carta := (*baralho)[ultima]
	*baralho = (*baralho)[:ultima]
	return carta
}

func mostrarRecebimento(jogador string, carta Carta, mao []Carta) {
	total := pontuacao(mao)
	fmt.Print("# ", jogador, " recebe ")
	if len(carta.nome) == 1 {
		fmt.Print(" ")
	}
	fmt.Print(carta.nome, " - Total ")
	if total < 10 {
		fmt.Print(" ")
	}
	fmt.Print(total, " [")
	for _, item := range mao {
		fmt.Print(" ", item.nome)
	}
	fmt.Println(" ]")
}

func jogarRodada(entrada *bufio.Scanner) bool {
	baralho := criarBaralho()
	maoMesa := []Carta{comprar(&baralho), comprar(&baralho)}
	maoJogador := []Carta{comprar(&baralho), comprar(&baralho)}

	fmt.Println("Iniciando Rodada:")
	mostrarRecebimento("Mesa", maoMesa[0], maoMesa[:1])
	mostrarRecebimento("Voce", maoJogador[0], maoJogador[:1])
	mostrarRecebimento("Voce", maoJogador[1], maoJogador)

	pontuacaoJogador := pontuacao(maoJogador)
	pontuacaoMesa := pontuacao(maoMesa)
	if pontuacaoMesa == 21 {
		fmt.Println("A mesa tem 21 com as cartas iniciais. Voce perdeu.")
		fmt.Println("A carta fechada da mesa era", maoMesa[1].nome)
		return false
	}
	if pontuacaoJogador == 21 {
		fmt.Println("Blackjack! Voce ganhou.")
		return true
	}

	for pontuacaoJogador < 21 {
		fmt.Println("Pedir = 1, Parar = 2")
		opcao, ok := lerInteiro(entrada, ">> ")
		if !ok {
			return false
		}
		if opcao == 2 {
			break
		}
		if opcao != 1 {
			fmt.Println("Valor inválido.")
			continue
		}

		carta := comprar(&baralho)
		maoJogador = append(maoJogador, carta)
		mostrarRecebimento("Voce", carta, maoJogador)
		pontuacaoJogador = pontuacao(maoJogador)
	}

	if pontuacaoJogador > 21 {
		fmt.Println("Voce estourou 21. A mesa venceu.")
		return false
	}

	fmt.Println("# Mesa joga:")
	fmt.Println("A carta fechada da mesa era", maoMesa[1].nome)
	for pontuacao(maoMesa) < pontuacaoJogador {
		carta := comprar(&baralho)
		maoMesa = append(maoMesa, carta)
		mostrarRecebimento("Mesa", carta, maoMesa)
	}

	pontuacaoMesa = pontuacao(maoMesa)
	if pontuacaoMesa > 21 {
		fmt.Println("A mesa estourou 21. Voce ganhou.")
		return true
	}
	if pontuacaoMesa == pontuacaoJogador {
		fmt.Println("Empate. A mesa vence.")
		return false
	}

	fmt.Println("A mesa venceu.")
	return false
}
