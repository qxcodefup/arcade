package main

import "fmt"

func main() {
	var n, calls int
	fmt.Scan(&n, &calls)
	values := make([]int, n)
	for i := range values {
		fmt.Scan(&values[i])
	}
	for i := 0; i < calls; i++ {
		var called int
		fmt.Scan(&called)
		target := abs(called)
		for j, value := range values {
			if abs(value) == target {
				if j > 0 {
					values[j-1] *= -1
				}
				if j+1 < n {
					values[j+1] *= -1
				}
				break
			}
		}
	}
	printVector(values)
}
func abs(n int) int {
	if n < 0 {
		return -n
	}
	return n
}
func printVector(values []int) {
	fmt.Print("[")
	for i, value := range values {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Print(value)
	}
	fmt.Println("]")
}
