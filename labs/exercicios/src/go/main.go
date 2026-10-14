package main

import "fmt"

type Treino struct {
	modalidade string
	duracao    int
}

func taxaCalorias(modalidade string) int {
	switch modalidade {
	case "corrida":
		return 10
	case "natacao":
		return 9
	case "ciclismo":
		return 8
	case "musculacao":
		return 5
	case "caminhada":
		return 4
	default:
		return 0
	}
}

func main() {
	var n, meta int
	fmt.Scan(&n, &meta)

	treinos := make([]Treino, n)
	totalMin := 0
	totalCal := 0

	for i := range treinos {
		fmt.Scan(&treinos[i].modalidade, &treinos[i].duracao)
		totalMin += treinos[i].duracao
		totalCal += treinos[i].duracao * taxaCalorias(treinos[i].modalidade)
	}

	fmt.Printf("Tempo total: %d min\n", totalMin)
	fmt.Printf("Calorias queimadas: %d kcal\n", totalCal)

	if totalCal >= meta {
		fmt.Println("Meta atingida! Parabens!")
	} else {
		fmt.Printf("Faltam %d kcal para atingir a meta\n", meta-totalCal)
	}
}
