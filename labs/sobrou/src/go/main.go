package main

import "fmt"

func main() {
	var quantities [3]int
	var prices [3]float64
	for index := range quantities {
		fmt.Scan(&quantities[index])
	}
	for index := range prices {
		fmt.Scan(&prices[index])
	}
	var money float64
	fmt.Scan(&money)
	total := money
	for index := range quantities {
		total -= float64(quantities[index]) * prices[index]
	}
	fmt.Printf("%.2f\n", total)
}
