package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	real := make([]float64, n)
	guess := make([]float64, n)
	for i := range real {
		fmt.Scan(&real[i])
	}
	for i := range guess {
		fmt.Scan(&guess[i])
	}
	first, second := 0, 0
	var choice string
	for i := 0; i < n; i++ {
		fmt.Scan(&choice)
		if real[i] == guess[i] {
			first++
		} else if choice == "m" && real[i] < guess[i] || choice == "M" && real[i] > guess[i] {
			second++
		} else {
			first++
		}
	}
	if first > second {
		fmt.Println("primeiro")
	} else if second > first {
		fmt.Println("segundo")
	} else {
		fmt.Println("empate")
	}
}
