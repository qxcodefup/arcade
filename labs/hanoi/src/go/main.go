package main

import "fmt"

func moverDiscos(quantidade int, origem, auxiliar, destino string) {
	if quantidade <= 0 {
		return
	}
	moverDiscos(quantidade-1, origem, destino, auxiliar)
	fmt.Println(origem, "->", destino)
	moverDiscos(quantidade-1, auxiliar, origem, destino)
}

func main() {
	var quantidade int
	fmt.Scan(&quantidade)
	moverDiscos(quantidade, "A", "B", "C")
}
