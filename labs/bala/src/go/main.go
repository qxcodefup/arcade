package main

import (
	"fmt"
	"math"
)

func main() {
	var firstX, firstY, secondX, secondY float64
	fmt.Scan(&firstX, &firstY, &secondX, &secondY)
	distance := math.Hypot(secondX-firstX, secondY-firstY)
	fmt.Printf("%.2f\n", distance)
}
