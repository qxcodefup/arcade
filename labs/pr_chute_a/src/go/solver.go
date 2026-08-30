package main

import (
	"fmt"
	"math/rand"
)

func main() {
	inf := 0
	sup := 100
	sorteado := rand.Intn(99) + 1 // 0 a 100
	chute := 0
	for {
		fmt.Printf("Diga um numero entre ]%v, %v[: ", inf, sup)
		fmt.Scan(&chute)
		if chute == sorteado {
			fmt.Println("ganhou")
			break
		}
		if chute > sorteado {
			sup = chute
		} else {
			inf = chute
		}
		if inf+2 == sup {
			fmt.Println("perdeu")
			break
		}
	}
}
