package main

import (
	"fmt"
)

func calcularFatores(numero int) map[int]int {
	fatores := make(map[int]int)
	for fator := 2; fator <= numero/fator; fator++ {
		for numero%fator == 0 {
			fatores[fator]++
			numero /= fator
		}
	}
	if numero > 1 {
		fatores[numero]++
	}
	return fatores
}

func main() {
	var numero int
	fmt.Scan(&numero)
	fatores := calcularFatores(numero)
	primos := make([]int, 0, len(fatores))
	for primo := range fatores {
		primos = append(primos, primo)
	}
	for i := 1; i < len(primos); i++ {
		atual := primos[i]
		j := i - 1
		for j >= 0 && primos[j] > atual {
			primos[j+1] = primos[j]
			j--
		}
		primos[j+1] = atual
	}
	for _, primo := range primos {
		fmt.Println(primo, fatores[primo])
	}
}
