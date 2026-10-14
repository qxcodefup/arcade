package main

import "fmt"

type Fruta struct {
	nome  string
	preco float64
}

func main() {
	var n int
	fmt.Scan(&n)

	frutas := make([]Fruta, n)
	for i := range frutas {
		fmt.Scan(&frutas[i].nome, &frutas[i].preco)
	}

	var dinheiro float64
	fmt.Scan(&dinheiro)

	for _, f := range frutas {
		qtd := int(dinheiro / f.preco)
		troco := dinheiro - float64(qtd)*f.preco
		fmt.Printf("%s: %d unidade(s) - Troco: R$ %.2f\n", f.nome, qtd, troco)
	}
}
