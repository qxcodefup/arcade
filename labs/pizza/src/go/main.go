package main

import "fmt"

type Restaurante struct {
	nome   string
	pontos int
}

func melhorRestaurante(restaurantes []Restaurante) string {
	melhorIndice := -1
	for i, restaurante := range restaurantes {
		if melhorIndice == -1 || restaurante.pontos > restaurantes[melhorIndice].pontos || (restaurante.pontos == restaurantes[melhorIndice].pontos && restaurante.nome < restaurantes[melhorIndice].nome) {
			melhorIndice = i
		}
	}
	if melhorIndice == -1 {
		return ""
	}
	return restaurantes[melhorIndice].nome
}

func main() {
	var count int
	fmt.Scan(&count)
	restaurantes := make([]Restaurante, count)
	for i := range restaurantes {
		fmt.Scan(&restaurantes[i].nome, &restaurantes[i].pontos)
	}
	fmt.Println(melhorRestaurante(restaurantes))
}
