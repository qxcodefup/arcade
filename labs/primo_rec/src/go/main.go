package main

import "fmt"

func ehPrimo(numero, divisor int) bool {
	if numero <= 1 {
		return false
	}
	if divisor > numero/divisor {
		return true
	}
	if numero%divisor == 0 {
		return false
	}
	return ehPrimo(numero, divisor+1)
}

func main() {
	var numero int
	fmt.Scan(&numero)
	if ehPrimo(numero, 2) {
		fmt.Println(1)
	} else {
		fmt.Println(0)
	}
}
