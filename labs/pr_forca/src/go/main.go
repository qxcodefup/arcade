package main

import (
	"bufio"
	"fmt"
	"math/rand/v2"
	"os"
	"strings"
)

func main() {
	frutas := []string{
		"banana", "maracuja", "morango", "uva", "siriguela", "abacaxi",
		"manga", "goiaba", "pera", "damasco", "caqui", "laranja", "abacate",
	}

	palavra := frutas[rand.IntN(len(frutas))]
	codificada := []byte(strings.Repeat("*", len(palavra)))
	disponiveis := "abcdefghijklmnopqrstuvwxyz"
	tentadas := ""
	chances := 6
	entrada := bufio.NewScanner(os.Stdin)

	for chances > 0 && string(codificada) != palavra {
		mostrarEstado(chances, tentadas, disponiveis, string(codificada))
		letra, ok := lerChute(entrada, disponiveis)
		if !ok {
			return
		}

		tentadas += string(letra)
		disponiveis = removerLetra(disponiveis, letra)
		acertou := false
		for i := 0; i < len(palavra); i++ {
			if palavra[i] == letra {
				codificada[i] = letra
				acertou = true
			}
		}
		if !acertou {
			chances--
		}
	}

	if string(codificada) == palavra {
		fmt.Println("A palavra é", palavra+", voce ganhou")
		return
	}
	fmt.Println("A palavra é", palavra+", voce perdeu")
}

func mostrarEstado(chances int, tentadas, disponiveis, codificada string) {
	fmt.Println(strings.Repeat("-", 83))
	fmt.Println("Chances    :", chances)
	fmt.Println("Chutes     : [", tentadas, "]")
	fmt.Println("Disponíveis: [", disponiveis, "]")
	fmt.Println("Palavra codificada:", codificada)
}

func lerChute(entrada *bufio.Scanner, disponiveis string) (byte, bool) {
	for {
		fmt.Print(">> Digite chute: ")
		if !entrada.Scan() {
			return 0, false
		}

		linha := strings.TrimSpace(entrada.Text())
		if len(linha) != 1 || linha[0] < 'a' || linha[0] > 'z' {
			fmt.Println("Entrada inválida. Digite uma letra minúscula de a a z.")
			continue
		}
		if !strings.ContainsRune(disponiveis, rune(linha[0])) {
			fmt.Println("Essa letra já foi tentada.")
			continue
		}
		return linha[0], true
	}
}

func removerLetra(disponiveis string, letra byte) string {
	restantes := ""
	for i := 0; i < len(disponiveis); i++ {
		if disponiveis[i] != letra {
			restantes += string(disponiveis[i])
		}
	}
	return restantes
}
