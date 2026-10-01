package main

import "fmt"

func main() {
	var start, end int
	fmt.Scan(&start, &end)
	step := 1
	if start > end {
		step = -1
	}
	fmt.Print("[ ")
	for value := start; value != end; value += step {
		fmt.Print(value, " ")
	}
	fmt.Println("]")
}
