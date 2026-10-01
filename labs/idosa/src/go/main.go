package main

import "fmt"

type Pessoa struct {
	nome  string
	idade int
	sexo  string
}

func mulherMaisIdosa(pessoas []Pessoa) string {
	maisIdosa := -1
	for i, pessoa := range pessoas {
		if pessoa.sexo == "f" && (maisIdosa == -1 || pessoa.idade > pessoas[maisIdosa].idade) {
			maisIdosa = i
		}
	}
	if maisIdosa == -1 {
		return "nao ha mulher"
	}
	return pessoas[maisIdosa].nome
}

func main() {
	var count int
	fmt.Scan(&count)
	pessoas := make([]Pessoa, count)
	for i := range pessoas {
		fmt.Scan(&pessoas[i].nome, &pessoas[i].idade, &pessoas[i].sexo)
	}
	fmt.Println(mulherMaisIdosa(pessoas))
}
