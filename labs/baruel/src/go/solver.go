package main

import (
	"fmt"
)

func PrintString[T any](slice []T) {
	fmt.Print("[ ")
	for _, elem := range slice {
		fmt.Printf("%v ", elem)
	}
	fmt.Print("]\n")
}

func main() {
	var qtd_total, qtd_baruel int
	fmt.Scan(&qtd_total, &qtd_baruel)

	var fig_baruel []int
	for i := 0; i < qtd_baruel; i++ {
		var num int
		fmt.Scan(&num)
		fig_baruel = append(fig_baruel, num)
	}

	unicos_baruel := make(map[int]bool)
	var repetidos_baruel []int
	for _, fig := range fig_baruel {
		_, ok := unicos_baruel[fig]
		if ok {
			repetidos_baruel = append(repetidos_baruel, fig)
		} else {
			unicos_baruel[fig] = true
		}
	}
	PrintString(repetidos_baruel)

	var fig_faltantes []int
	for i := 1; i <= qtd_total; i++ {
		_, found := unicos_baruel[i]
		if !found {
			fig_faltantes = append(fig_faltantes, i)
		}
	}
	PrintString(fig_faltantes)
}
