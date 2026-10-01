package main

import "fmt"

func main() {
	var amount float64
	fmt.Scan(&amount)
	cents := int(amount*100 + 0.5)
	bills := []int{10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5}
	for _, bill := range bills {
		count := cents / bill
		cents %= bill
		if count > 0 {
			fmt.Print(count, " de ", bill/100, ".")
			if bill%100 < 10 {
				fmt.Print("0")
			}
			fmt.Println(bill % 100)
		}
	}
	if cents > 0 {
		fmt.Print("Falta 0.")
		if cents < 10 {
			fmt.Print("0")
		}
		fmt.Println(cents)
	}
}
