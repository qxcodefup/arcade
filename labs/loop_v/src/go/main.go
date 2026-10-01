package main

import "fmt"

func main() {
	var start, end int
	fmt.Scan(&start, &end)
	fmt.Print("[ ")
	for value := start; value < end; value++ {
		if value%2 == 0 {
			continue
		}
		fmt.Print(value, " ")
	}
	fmt.Println("]")
}
