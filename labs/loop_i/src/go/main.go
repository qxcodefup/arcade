package main

import "fmt"

func main() {
	var start, end int
	fmt.Scan(&start, &end)
	for value := start; value < end; value++ {
		fmt.Println(value)
	}
}
