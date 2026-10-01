package main

import "fmt"

func main() {
	var n, value int
	fmt.Scan(&n)
	if n == 0 {
		fmt.Println()
		return
	}
	for i := 0; i < n; i++ {
		fmt.Scan(&value)
		fmt.Println(value)
	}
}
