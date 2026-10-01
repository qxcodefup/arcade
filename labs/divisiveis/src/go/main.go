package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	if (a%3 == 0 && b%3 == 0) || (a%5 == 0 && b%5 == 0) {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}
