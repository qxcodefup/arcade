package main

import "fmt"

func main() {
	var a, b, c float64
	fmt.Scan(&a, &b, &c)
	avg := int((a + b) / 2)
	if avg >= 7 {
		fmt.Println("aprovado")
	} else if avg < 4 {
		fmt.Println("reprovado")
	} else if (float64(avg)+c)/2 >= 5 {
		fmt.Println("aprovado na final")
	} else {
		fmt.Println("reprovado na final")
	}
}
