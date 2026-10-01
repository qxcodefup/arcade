package main

import "fmt"

func main() {
	var value, minimum int
	for i := 0; i < 5; i++ {
		fmt.Scan(&value)
		if i == 0 || value < minimum {
			minimum = value
		}
	}
	fmt.Println(minimum)
}
