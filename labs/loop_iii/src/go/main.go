package main

import "fmt"

func main() {
	var start, end int
	fmt.Scan(&start, &end)
	fmt.Print("[ ")
	for value := start; value > end; value-- {
		fmt.Print(value, " ")
	}
	fmt.Println("]")
}
