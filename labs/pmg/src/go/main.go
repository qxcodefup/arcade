package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)
	heights := make([]float64, n)
	sum := 0.0
	for i := range heights {
		fmt.Scan(&heights[i])
		sum += heights[i]
	}
	average := sum / float64(n)
	fmt.Println(strconv.FormatFloat(average, 'f', 2, 64))
	for i, height := range heights {
		if i > 0 {
			fmt.Print(" ")
		}
		if height < average {
			fmt.Print("P")
		} else if height > average {
			fmt.Print("G")
		} else {
			fmt.Print("M")
		}
	}
	fmt.Println()
}
