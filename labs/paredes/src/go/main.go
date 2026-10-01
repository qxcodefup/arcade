package main

import "fmt"

func main() {
	var n, height int
	fmt.Scan(&n)
	tallest := 0
	visible := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&height)
		if i == 0 || height > tallest {
			visible++
			tallest = height
		}
	}
	fmt.Println(visible)
}
