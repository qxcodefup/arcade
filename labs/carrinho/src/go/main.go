package main

import "fmt"

type Item struct {
	nome  string
	preco float64
	qtd   int
}

func main() {
	var n int
	fmt.Scan(&n)

	itens := make([]Item, n)
	subtotal := 0.0

	for i := range itens {
		fmt.Scan(&itens[i].nome, &itens[i].preco, &itens[i].qtd)
		subtotal += itens[i].preco * float64(itens[i].qtd)
	}

	var cupom string
	fmt.Scan(&cupom)

	desconto := 0.0
	if cupom == "DESC10" {
		desconto = subtotal * 0.10
	} else if cupom == "DESC20" {
		desconto = subtotal * 0.20
	}

	total := subtotal - desconto

	fmt.Printf("Subtotal: R$ %.2f\n", subtotal)
	fmt.Printf("Desconto: R$ %.2f\n", desconto)
	fmt.Printf("Total: R$ %.2f\n", total)
}
