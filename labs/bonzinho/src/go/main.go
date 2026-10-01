package main

import "fmt"

func main() {
	var a, b, c, work float64
	fmt.Scan(&a, &b, &c, &work)
	min := a
	if b < min {
		min = b
	}
	if c < min {
		min = c
	}
	avg := (a + b + c + work - min) / 3
	if avg >= 7 {
		fmt.Printf("Aprovado com %.1f\n", avg)
	} else {
		fmt.Printf("Final com %.1f\n", avg)
	}
}
