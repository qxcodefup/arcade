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
	for _, v := range values {
		fmt.Print(v, " ")
	}
	fmt.Println("]")
}
