package main

import "fmt"

func main() {
	var price float64
	var installments int
	fmt.Scan(&price, &installments)
	interestRate := float64(installments-1) * 5
	total := price * (1 + interestRate/100)
	installmentPrice := total / float64(installments)
	fmt.Printf("%.2f\n%.2f\n", installmentPrice, total)
}
