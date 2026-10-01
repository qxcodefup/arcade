package main

import "fmt"

func main() {
	var n, digit, result int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scan(&digit)
		result = result*10 + digit
	}
	fmt.Println(result)
}
