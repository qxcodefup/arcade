package main

import "fmt"

func main() {
	var salary float64
	fmt.Scan(&salary)
	increase := 0.05
	if salary <= 1000 {
		increase = .20
	} else if salary <= 1500 {
		increase = .15
	} else if salary <= 2000 {
		increase = .10
	}
	fmt.Printf("%.2f\n", salary*(1+increase))
}
