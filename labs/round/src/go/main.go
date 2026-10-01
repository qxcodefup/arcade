package main

import (
	"fmt"
	"math"
)

func main() {
	var op string
	var n float64
	fmt.Scan(&op, &n)
	switch op {
	case "c":
		fmt.Println(int(math.Ceil(n)))
	case "f":
		fmt.Println(int(math.Floor(n)))
	default:
		fmt.Println(int(math.Round(n)))
	}
}
