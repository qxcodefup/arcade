package main

import (
	"fmt"
	"math/rand/v2"
)

func main() {
	cartela := gerarCartela()

	fmt.Println("Cartela gerada:")
	fmt.Println("B  I  N  G  O")
	for linha := 0; linha < 5; linha++ {
		for coluna := 0; coluna < 5; coluna++ {
			numero := cartela[linha][coluna]
			if numero == 0 {
				fmt.Print("##")
			} else {
				imprimirNumero(numero)
			}
			if coluna < 4 {
				fmt.Print(" ")
			}
		}
		fmt.Println()
	}
}

func gerarCartela() [5][5]int {
	var cartela [5][5]int
	inicios := [5]int{1, 16, 31, 46, 61}

	for coluna := 0; coluna < 5; coluna++ {
		for linha := 0; linha < 5; linha++ {
			if coluna == 2 && linha == 2 {
				continue
			}

			for {
				numero := inicios[coluna] + rand.IntN(15)
				if !jaSorteado(cartela, linha, coluna, numero) {
					cartela[linha][coluna] = numero
					break
				}
			}
		}
	}

	return cartela
}

func jaSorteado(cartela [5][5]int, linha, coluna, numero int) bool {
	for i := 0; i < linha; i++ {
		if cartela[i][coluna] == numero {
			return true
		}
	}
	return false
}

func imprimirNumero(numero int) {
	if numero < 10 {
		fmt.Print(" ")
	}
	fmt.Print(numero)
}
