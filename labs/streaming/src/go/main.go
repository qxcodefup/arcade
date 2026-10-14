package main

import "fmt"

type Filme struct {
	classificacao int
	duracao       int
	titulo        string
}

func main() {
	var n int
	fmt.Scan(&n)

	filmes := make([]Filme, n)
	for i := range filmes {
		fmt.Scan(&filmes[i].classificacao, &filmes[i].duracao, &filmes[i].titulo)
	}

	var idade int
	fmt.Scan(&idade)

	encontrou := false
	for _, f := range filmes {
		if f.classificacao <= idade {
			encontrou = true
			if f.classificacao == 0 {
				fmt.Printf("%s (%d min) - Classificacao: Livre\n", f.titulo, f.duracao)
			} else {
				fmt.Printf("%s (%d min) - Classificacao: %d+\n", f.titulo, f.duracao, f.classificacao)
			}
		}
	}

	if !encontrou {
		fmt.Println("Nenhum filme disponivel")
	}
}
