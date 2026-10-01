package main

import "fmt"

func main() {
	var houses, routes int
	fmt.Scan(&houses, &routes)
	water := make([]int, houses)
	for i := 0; i < routes; i++ {
		var start, end, amount int
		fmt.Scan(&start, &end, &amount)
		for house := start; house <= end; house++ {
			water[house] += amount
		}
	}
	for i, amount := range water {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(amount)
	}
	fmt.Println()
}
