package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	if a == b {
		fmt.Println("Empate")
	} else {
		if a < b {
			a += 15
		}
		if a-b <= 7 {
			fmt.Println("Jogador 2")
		} else {
			fmt.Println("Jogador 1")
		}
	}
}
