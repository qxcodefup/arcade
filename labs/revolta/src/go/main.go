package main

import "fmt"

func main() {
	var n, value, odd, even int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		if value%2 == 0 {
			even += value
		} else {
			odd += value
		}
	}
	if odd > even {
		fmt.Println("soldados")
	} else if even > odd {
		fmt.Println("rebeldes")
	} else {
		fmt.Println("empate")
	}
}
