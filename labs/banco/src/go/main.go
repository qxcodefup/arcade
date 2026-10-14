package main

import "fmt"

type Conta struct {
	numero  int
	titular string
	saldo   float64
}

func main() {
	var c Conta
	fmt.Scan(&c.numero, &c.titular, &c.saldo)

	var q int
	fmt.Scan(&q)

	for i := 0; i < q; i++ {
		var op string
		var val float64
		fmt.Scan(&op, &val)

		if op == "D" {
			c.saldo += val
		} else if op == "S" {
			if val <= c.saldo {
				c.saldo -= val
			} else {
				fmt.Println("Saldo insuficiente")
			}
		}
	}

	fmt.Printf("Conta: %d | Titular: %s | Saldo: R$ %.2f\n", c.numero, c.titular, c.saldo)
}
