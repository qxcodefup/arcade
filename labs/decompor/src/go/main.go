package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	divisor := 1
	for n/divisor >= 10 {
		divisor *= 10
	}
	for divisor > 0 {
		fmt.Print(n / divisor)
		n %= divisor
		divisor /= 10
		if divisor > 0 {
			fmt.Print(" ")
		}
	}
	fmt.Println()
}
