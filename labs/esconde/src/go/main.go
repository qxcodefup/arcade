package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	for value := 1; value <= n; value += 2 {
		fmt.Println(value)
	}
	for value := n - 1; value >= 0; value -= 2 {
		fmt.Println(value)
	}
}
