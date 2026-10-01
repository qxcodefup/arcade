package main

import (
	"fmt"
	"math"
)

func triangleArea(first, second, third float64) float64 {
	semiperimeter := (first + second + third) / 2
	return math.Sqrt(semiperimeter * (semiperimeter - first) * (semiperimeter - second) * (semiperimeter - third))
}

func main() {
	var first, second, third float64
	fmt.Scan(&first, &second, &third)
	fmt.Printf("%.2f\n", triangleArea(first, second, third))
}
