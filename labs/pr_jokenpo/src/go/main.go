package main

import (
	"fmt"
	"strconv"
	"time"
)

func resultado(jogador, computador int) int {
	if jogador == computador {
		return 0
	}
	if jogador == 1 && computador == 3 ||
		jogador == 2 && computador == 1 ||
		jogador == 3 && computador == 2 {
		return 1
	}
	return 2
}

func lerOpcao(minimo, maximo int) int {
	for {
		var entrada string
		fmt.Scan(&entrada)
		opcao, erro := strconv.Atoi(entrada)
		if erro == nil && opcao >= minimo && opcao <= maximo {
			return opcao
		}
		fmt.Println("Opção inválida.")
		fmt.Print(">> ")
	}
}

func main() {
	jogadas := []string{"", "PEDRA", "PAPEL", "TESOURA"}
	jogarNovamente := 1

	for jogarNovamente == 1 {
		vitoriasJogador := 0
		vitoriasComputador := 0
		round := 1

		for vitoriasJogador < 3 && vitoriasComputador < 3 {
			fmt.Println("# JOKENPÔ #")
			fmt.Println("Você:", vitoriasJogador, "| PC:", vitoriasComputador)
			fmt.Println("Round:", round)
			fmt.Println()
			fmt.Println("1 - Pedra")
			fmt.Println("2 - Papel")
			fmt.Println("3 - Tesoura")
			fmt.Print(">> ")

			escolha := lerOpcao(1, 3)
			computador := int(time.Now().UnixNano()%3) + 1

			fmt.Println("Você jogou", jogadas[escolha], "e o PC", jogadas[computador]+".")
			switch resultado(escolha, computador) {
			case 0:
				fmt.Println("Ninguém ganhou!")
			case 1:
				vitoriasJogador++
				fmt.Println("Você ganhou!")
			case 2:
				vitoriasComputador++
				fmt.Println("O PC ganhou!")
			}
			fmt.Println()
			round++
		}

		fmt.Println("PLACAR FINAL:")
		fmt.Println("Você:", vitoriasJogador, "| PC:", vitoriasComputador)
		if vitoriasJogador == 3 {
			fmt.Println("Você venceu a melhor de 5!")
		} else {
			fmt.Println("O PC venceu a melhor de 5!")
		}
		fmt.Println()
		fmt.Println("JOGAR NOVAMENTE?")
		fmt.Println("1 - Sim")
		fmt.Println("0 - Sair")
		fmt.Print(">> ")
		jogarNovamente = lerOpcao(0, 1)
	}
}
