package main

import "fmt"

type Jogada struct {
	pedraA int
	pedraB int
}

func pontuacao(jogada Jogada) (int, bool) {
	if jogada.pedraA < 10 || jogada.pedraB < 10 {
		return 0, false
	}
	diferenca := jogada.pedraA - jogada.pedraB
	if diferenca < 0 {
		diferenca = -diferenca
	}
	return diferenca, true
}

func melhorCompetidor(jogadas []Jogada) int {
	melhorIndice := -1
	menorPontuacao := 0
	for indice, jogada := range jogadas {
		valor, valida := pontuacao(jogada)
		if valida && (melhorIndice == -1 || valor < menorPontuacao) {
			melhorIndice = indice
			menorPontuacao = valor
		}
	}
	return melhorIndice
}

func main() {
	var count int
	fmt.Scan(&count)
	jogadas := make([]Jogada, count)
	for i := range jogadas {
		fmt.Scan(&jogadas[i].pedraA, &jogadas[i].pedraB)
	}
	winner := melhorCompetidor(jogadas)
	if winner == -1 {
		fmt.Println("sem ganhador")
		return
	}
	fmt.Println(winner)
}
