package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b, c float64
	fmt.Scan(&a, &b, &c)
	d := b*b - 4*a*c
	if d < 0 {
		fmt.Println("nao ha raiz real")
	} else if d == 0 {
		fmt.Printf("%.2f\n", (-b+math.Sqrt(d))/(2*a))
	} else {
		fmt.Printf("%.2f\n%.2f\n", (-b+math.Sqrt(d))/(2*a), (-b-math.Sqrt(d))/(2*a))
	}
}
