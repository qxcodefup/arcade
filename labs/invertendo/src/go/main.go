package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	values := make([]int, n)
	for i := range values {
		fmt.Scan(&values[i])
	}
	fmt.Print("[ ")
	for i := len(values) - 1; i >= 0; i-- {
		fmt.Print(values[i], " ")
	}
	fmt.Println("]")
}
