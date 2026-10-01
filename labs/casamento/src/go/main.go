package main

import "fmt"

func main() {
	var value, minimum, maximum int
	for i := 0; i < 5; i++ {
		fmt.Scan(&value)
		if i == 0 || value < minimum {
			minimum = value
		}
		if i == 0 || value > maximum {
			maximum = value
		}
	}
	fmt.Println(minimum + maximum)
}
