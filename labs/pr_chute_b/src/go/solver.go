package main

import (
	"fmt"
	"math/rand"
)

func chutar(inf, sup int) int {
	return rand.Intn(sup-inf-1) + inf + 1
}

func main() {
	inf := 0
	sup := 100
	for {
		chute := chutar(inf, sup)
		fmt.Printf("]%v, %v[ É %v?\n", inf, sup, chute)
		fmt.Printf("Acertei(=), É maior(>), É menor(<)? ")
		resposta := ""
		fmt.Scan(&resposta)

		if resposta == "=" {
			fmt.Println("ganhei")
			break
		}
		if resposta == ">" {
			inf = chute
		} else {
			sup = chute
		}
		if inf+2 == sup {
			fmt.Println("perdeu")
			break
		}
	}
}
