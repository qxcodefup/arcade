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
	for i := 1; i < n; i++ {
		difference := values[i] - values[i-1]
		if difference < 0 {
			difference = -difference
		}
		if difference >= 2 {
			count++
		}
	}
	fmt.Println(count)
}
