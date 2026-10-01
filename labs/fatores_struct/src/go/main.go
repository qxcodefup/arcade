package main

import "fmt"

type Fator struct {
	num int
	qtd int
}

func calcularFatores(num int) []Fator {
	fatores := []Fator{}
	for fator := 2; fator <= num/fator; fator++ {
		quantidade := 0
		for num%fator == 0 {
			num /= fator
			quantidade++
		}
		if quantidade > 0 {
			fatores = append(fatores, Fator{num: fator, qtd: quantidade})
		}
	}
	if num > 1 {
		fatores = append(fatores, Fator{num: num, qtd: 1})
	}
	return fatores
}

func main() {
	var num int
	fmt.Scan(&num)
	for _, fator := range calcularFatores(num) {
		fmt.Println(fator.num, fator.qtd)
	}
}
