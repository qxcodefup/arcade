package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	values := make([]int, n)
	for i := range values {
		fmt.Scan(&values[i])
	}
	count := 0
	for i, value := range values {
		if value == 0 && (i == 0 || values[i-1] != 1) && (i == n-1 || values[i+1] != 1) {
			count++
		}
	}
	fmt.Println(count)
}
