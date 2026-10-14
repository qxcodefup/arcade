package main

import "fmt"

type Pokemon struct {
	nome   string
	ataque int
	defesa int
	vida   int
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	var p1, p2 Pokemon
	fmt.Scan(&p1.nome, &p1.ataque, &p1.defesa, &p1.vida)
	fmt.Scan(&p2.nome, &p2.ataque, &p2.defesa, &p2.vida)

	dano1 := max(1, p1.ataque-p2.defesa)
	p2.vida = max(0, p2.vida-dano1)
	fmt.Printf("%s atacou %s causando %d de dano!\n", p1.nome, p2.nome, dano1)

	if p2.vida == 0 {
		fmt.Printf("%s foi derrotado!\n", p2.nome)
		fmt.Printf("%s venceu a batalha!\n", p1.nome)
		return
	}

	dano2 := max(1, p2.ataque-p1.defesa)
	p1.vida = max(0, p1.vida-dano2)
	fmt.Printf("%s atacou %s causando %d de dano!\n", p2.nome, p1.nome, dano2)

	if p1.vida == 0 {
		fmt.Printf("%s foi derrotado!\n", p1.nome)
		fmt.Printf("%s venceu a batalha!\n", p2.nome)
		return
	}

	fmt.Printf("Fim do turno: %s (HP %d) vs %s (HP %d)\n", p1.nome, p1.vida, p2.nome, p2.vida)
}
