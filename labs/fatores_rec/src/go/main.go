package main

import "fmt"

func calcFatores(numero, divisor int, quantidades map[int]int, ordem *[]int) {
	if numero <= 1 {
		return
	}
	if numero%divisor == 0 {
		if quantidades[divisor] == 0 {
			*ordem = append(*ordem, divisor)
		}
		quantidades[divisor]++
		calcFatores(numero/divisor, divisor, quantidades, ordem)
		return
	}
	if divisor*divisor > numero {
		if quantidades[numero] == 0 {
			*ordem = append(*ordem, numero)
		}
		quantidades[numero]++
		return
	}
	calcFatores(numero, divisor+1, quantidades, ordem)
}

func main() {
	var numero int
	fmt.Scan(&numero)
	quantidades := map[int]int{}
	ordem := []int{}
	calcFatores(numero, 2, quantidades, &ordem)
	for _, fator := range ordem {
		fmt.Println(fator, quantidades[fator])
	}
}
