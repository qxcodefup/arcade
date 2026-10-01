package main

import "fmt"

func main() {
	var chico, cebolinha, n int
	fmt.Scan(&chico, &cebolinha, &n)
	legs := 0
	var animal string
	for i := 0; i < n; i++ {
		fmt.Scan(&animal)
		if animal == "g" {
			legs += 2
		} else {
			legs += 4
		}
	}
	fmt.Println(legs)
	if abs(legs-chico) < abs(legs-cebolinha) {
		fmt.Println("Chico Bento")
	} else if abs(legs-chico) > abs(legs-cebolinha) {
		fmt.Println("Cebolinha")
	} else {
		fmt.Println("empate")
	}
}
func abs(n int) int {
	if n < 0 {
		return -n
	}
	return n
}
