package main

import "fmt"

func main() {
	var guess, real float64
	var choice string
	fmt.Scan(&guess, &choice, &real)
	if (guess > real && choice == "m") || (guess < real && choice == "M") {
		fmt.Println("segundo")
	} else {
		fmt.Println("primeiro")
	}
}
