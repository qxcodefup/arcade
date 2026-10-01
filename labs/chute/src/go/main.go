package main

import (
	"fmt"
	"math"
)

func main() {
	var price, a, b int
	fmt.Scan(&price, &a, &b)
	da := math.Abs(float64(a - price))
	db := math.Abs(float64(b - price))
	if da < db {
		fmt.Println("primeiro")
	} else if db < da {
		fmt.Println("segundo")
	} else {
		fmt.Println("empate")
	}
}
