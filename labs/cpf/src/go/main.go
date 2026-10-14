package main

import "fmt"

type Pessoa struct {
	nome  string
	cpf   string
	idade int
}

func main() {
	var n int
	fmt.Scan(&n)

	pessoas := make([]Pessoa, n)
	for i := range pessoas {
		fmt.Scan(&pessoas[i].nome, &pessoas[i].cpf, &pessoas[i].idade)
	}

	var cpfBusca string
	fmt.Scan(&cpfBusca)

	for _, p := range pessoas {
		if p.cpf == cpfBusca {
			fmt.Printf("Nome: %s | Idade: %d anos | CPF: %s\n", p.nome, p.idade, p.cpf)
			return
		}
	}

	fmt.Println("Pessoa nao encontrada")
}
