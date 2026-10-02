package main

import (
	"bufio"
	"fmt"
	"math/rand/v2"
	"os"
	"strings"
)

func main() {
	entrada := bufio.NewScanner(os.Stdin)
	var sorteadas [76]bool
	quantidade := 0

	fmt.Println("Iniciando Bingo:")
	fmt.Println()
	fmt.Println("Roleta:")
	mostrarRoleta(sorteadas)

	for quantidade < 75 {
		opcao, ok := lerOpcao(entrada)
		if !ok {
			return
		}
		if opcao == 0 {
			fmt.Println("Obrigado e volte sempre.")
			return
		}

		disponiveis := bolasDisponiveis(sorteadas)
		numero := disponiveis[rand.IntN(len(disponiveis))]
		sorteadas[numero] = true
		quantidade++

		fmt.Println()
		fmt.Println("Numero sorteado", numero)
		fmt.Println()
		fmt.Println("Roleta:")
		mostrarRoleta(sorteadas)
		fmt.Println()
		fmt.Println("Rack:")
		mostrarRack(sorteadas)
	}

	fmt.Println("Todas as bolas foram sorteadas.")
	fmt.Println("Obrigado e volte sempre.")
}

func lerOpcao(entrada *bufio.Scanner) (int, bool) {
	for {
		fmt.Println("Escolha 1 para pedir bola e 0 para sair")
		fmt.Print(">> ")
		if !entrada.Scan() {
			return 0, false
		}

		campos := strings.Fields(entrada.Text())
		if len(campos) == 1 {
			opcao := 0
			if _, err := fmt.Sscan(campos[0], &opcao); err == nil && (opcao == 0 || opcao == 1) {
				return opcao, true
			}
		}
		fmt.Println("Opcao invalida.")
	}
}

func bolasDisponiveis(sorteadas [76]bool) []int {
	disponiveis := make([]int, 0, 75)
	for numero := 1; numero <= 75; numero++ {
		if !sorteadas[numero] {
			disponiveis = append(disponiveis, numero)
		}
	}
	return disponiveis
}

func mostrarRoleta(sorteadas [76]bool) {
	for numero := 1; numero <= 75; numero++ {
		if sorteadas[numero] {
			fmt.Print("__")
		} else {
			imprimirNumero(numero)
		}
		fmt.Print(" ")
		if numero%15 == 0 {
			fmt.Println()
		}
	}
}

func mostrarRack(sorteadas [76]bool) {
	for numero := 1; numero <= 75; numero++ {
		if sorteadas[numero] {
			imprimirNumero(numero)
		} else {
			fmt.Print("__")
		}
		fmt.Print(" ")
		if numero%15 == 0 {
			fmt.Println()
		}
	}
}

func imprimirNumero(numero int) {
	if numero < 10 {
		fmt.Print(" ")
	}
	fmt.Print(numero)
}
